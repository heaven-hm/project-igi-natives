#pragma once
//
// iff_gif_exporter.h
//
// Native C++ software renderer that drives the gif.h library to turn
// the skeleton animation stored in an IFF file into an animated GIF.
//
// The exporter is intentionally headless: no Qt, no OpenGL, no
// dependencies beyond the standard library and gif.h.  The GUI's
// QOpenGLWidget is not in scope here - the GUI uses its own GL
// pipeline for the interactive viewport (see ModelViewer::exportGif in
// gui_main.cpp).  Both code paths consume the same iff_parser.h data
// so the visual style is consistent.
//
// Public entry point:
//   IFF_ExportGif(iffPath, gifPath, w, h, fps, &err)
//
// All frames from every clip in the IFF are rendered in order; the
// GIF loops via gif.h's NETSCAPE2.0 extension.
//
// Projection: orthographic from a 3/4 angle (X-axis to the right,
// Y-axis up, Z-axis into the page; the camera "leans" ~30 deg on the
// XZ plane).  This is the same view the GUI shows by default.

#include <string>

namespace igiconv {

bool IFF_ExportGif(const std::string& iffPath,
                   const std::string& gifPath,
                   int width, int height, int fps,
                   std::string* err = nullptr);

} // namespace igiconv
