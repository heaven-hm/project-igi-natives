#pragma once
#include "../Common.hpp"
#include "../Libs/GTLibc.hpp"
#include <atomic>

namespace IGI {
	class Camera
	{
	private:
	public:
		//Struct to store angle of camera.
		struct Angle
		{
		private:
				float length_x = 0.0f;//X-Axis length of plane.
				float length_y = 0.0f;//Y-Axis length of plane.
				float pitch_length = 0.0f;//Pitch angle length.
				float pitch = 0.0f;//Pitch angle within plane.
				float roll = 0.0f;//Roll angle within plane.
				float length_z = 0.0f;//Z-Axis length of plane.
				float yaw = 0.0f;//Yaw angle within plane.
				float fov = 0.0f;//FOV (Field Of View) of ViewPort.
				float roll_length = 0.0f;//Roll angle length.

		public:
			//Ctors/Dtors
			Angle() = default;
			~Angle() = default;
				Angle(const Angle& angle) = default;
				Angle(float pitch, float roll, float yaw, float fov) : pitch(pitch), roll(roll), yaw(yaw), fov(fov) {}

			//Getters.
			float Pitch() { return pitch; }
			float Roll() { return roll; }
			float Yaw() { return yaw; }
			float Fov() { return fov; }

			//Setters.
			void Pitch(float pitch) { this->pitch = pitch; }
			void Roll(float roll) { this->roll = roll; }
			void Yaw(float yaw) { this->yaw = yaw; }
			void Fov(float fov) { this->fov = fov; }
		};

		//Struct to store Position of camera.
		struct Position
		{
		private:
			double x;
			double y;
			double z;

		public:
			//Ctors/Dtors
			Position() = default;
			~Position() = default;
			Position(const Position& pos) { this->x = pos.x; this->y = pos.y; this->z = pos.z; }
			Position(double x, double y, double z) { this->x = x; this->y = y; this->z = z; };

			//Getters.
			double X() { return x; }
			double Y() { return y; }
			double Z() { return z; }
			//Setters.
			void X(double x) { this->x = x; }
			void Y(double y) { this->y = y; }
			void Z(double z) { this->z = z; }
		};

		//Struct to store Controls of camera.
		struct Controls
		{
		private:
			key_t up;//Key event - Camera Up. (Z-Axis)
			key_t down;//Key event - Camera Down. (Z-Axis)
			key_t left;//Key event - Camera Left. (Y-Axis)
			key_t right;//Key event - Camera Right. (Y-Axis)
			key_t forward;//Key event - Camera Forward. (X-Axis)
			key_t backward;//Key event - Camera Backward. (X-Axis)
			key_t calibrate;//Key event - Camera Calibrate. [Reset to X-Axis]
			key_t quit;//Key event - Quit Free cam.
			float axis_off; //Offset value to move Camera from Axis.

		public:
			//Ctor/Dtor
			Controls() = default;
			~Controls() = default;
			Controls(const Controls& ctrl) { this->up = ctrl.up; this->down = ctrl.down; this->left = ctrl.left; this->right = ctrl.right; this->forward = ctrl.forward; this->backward = ctrl.backward; this->calibrate = ctrl.calibrate; this->quit = ctrl.quit; this->axis_off = ctrl.axis_off;}
			Controls(key_t up, key_t down, key_t left, key_t right, key_t forward, key_t backward, key_t calibrate, key_t quit, float axis_off) { this->up = up; this->down = down; this->left = left; this->right = right; this->forward = forward; this->backward = backward; this->calibrate = calibrate; this->quit = quit; this->axis_off = axis_off; };
		
			//Getters.
			key_t UP() { return up; }
			key_t DOWN() { return down; }
			key_t LEFT() { return left; }
			key_t RIGHT() { return right; }
			key_t FORWARD() { return forward; }
			key_t BACKWARD() { return backward; }
			key_t CALIBRATE() { return calibrate; }
			key_t QUIT() { return quit; }
			float AXIS_OFF() { return axis_off; }

			//Setters.
			void UP(key_t key) { this->up = key; }
			void DOWN(key_t key) { this->down = key; }
			void LEFT(key_t key) { this->left = key; }
			void RIGHT(key_t key) { this->right = key; }
			void FORWARD(key_t key) { this->forward = key; }
			void BACKWARD(key_t key) { this->backward = key; }
			void CALIBRATE(key_t key) { this->calibrate = key; }
			void QUIT(key_t key) { this->quit = key; }
			void AXIS_OFF(float axis_off) { this->axis_off = axis_off; }
		};

	private:
		std::atomic_bool free_cam_run{false};
		Controls free_cam_controls;

	public:
		//Camera Section.

		//Camera Default Ctors/Dtors.
		Camera() = default;
		~Camera() = default;

		//Camera Methods.
		Position ReadPosition();
		Angle ReadAngle();
		void WritePosition(Position& pos);
		void WritePosition(double x);
		void WritePosition(double x, double y);
		void WritePosition(double x, double y, double z);
		void WriteAngle(Angle& angle);
		void WriteAngle(float pitch);
		void WriteAngle(float pitch, float roll);
		void WriteAngle(float pitch, float roll, float yaw);
		void WriteAngle(float pitch, float roll,float yaw, float fov);
		void CalibrateView();
		void Attach();
		void Deattach();
		void BeginFreeCam(const Controls&);
		bool FreeCamStep();
		void EndFreeCam();
		bool IsFreeCamRunning() const { return free_cam_run.load(); }
		void StopFreeCam() { free_cam_run.store(false); }
		void FreeCam(Controls&);
	};
	inline Camera g_Camera;
}
