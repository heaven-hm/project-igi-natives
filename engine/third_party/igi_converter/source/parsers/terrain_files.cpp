/******************************************************************************
 * @file    terrain_files.cpp
 * @brief   terrain specific file formats
 *****************************************************************************/

#include "pch.h"
#include "terrain_files.h"

 /*
 ================================================================================
  *.lmp
 ================================================================================
 */
bool LMP_Load(const char* filename, pics_s& pics) {
	void* buf = nullptr;
	int32_t sz = 0;
	if (!File_LoadBinary(filename, buf, sz)) {
		return false;
	}

	// counting
	int num_tex = 0;

	int32_t read = 0;
	while (read < sz) {
		const uint8_t* cur = ((const uint8_t*)buf + read);
		uint32_t size = *(uint32_t*)cur;
		read += 4;

		num_tex++;

		uint32_t cur_data_size = size * size;
		read += cur_data_size;
	}

	bool load_ok = true;

	pics.pics_ = (pic_s*)MEM_ALLOC(sizeof(pic_s) * num_tex);
	if (pics.pics_) {
		memset(pics.pics_, 0, sizeof(pic_s) * num_tex);

		pics.num_pic_ = num_tex;

		// load contents
		int tex_idx = 0;
		read = 0;
		while (read < sz) {
			const uint8_t* cur = ((const uint8_t*)buf + read);
			uint32_t size = *(uint32_t*)cur;
			read += 4;

			if (size) {
				pic_s* pic = pics.pics_ + tex_idx;

				pic->pixels_ = (uint8_t*)MEM_ALLOC(size * size * 4);
				if (!pic->pixels_) {
					load_ok = false;
					break;
				}

				pic->width_ = size;
				pic->height_ = size;

				const uint8_t* src = cur + 4;
				uint8_t* dst = pic->pixels_;

				for (uint32_t h = 0; h < size; h++) {
					const uint8_t* src_line = src + size * (size - h - 1);
					uint8_t* dst_line = dst + 4 * size * h;

					for (uint32_t w = 0; w < size; w++) {
						uint8_t  src_clr = *(src_line + w);
						uint8_t* dst_clr = dst_line + w * 4;

						dst_clr[0] = src_clr;
						dst_clr[1] = src_clr;
						dst_clr[2] = src_clr;
						dst_clr[3] = src_clr ? 255 : 0;
					}
				}
			}

			tex_idx++;

			uint32_t cur_data_size = size * size;
			read += cur_data_size;
		}

	}
	else {
		load_ok = false;
	}

	File_FreeBuf(buf);

	return load_ok;
}

/*
================================================================================
 *.ctr
================================================================================
*/
bool CTR_Load(const char* filename, ctr_s& ret) {
	int32_t sz = 0;
	void* buf = nullptr;
	if (!File_LoadBinary(filename, buf, sz)) {
		return false;
	}

	ret.head_ = (ctr_item_s*)buf;
	ret.num_item_ = sz / sizeof(ctr_item_s);

	return true;
}

void CTR_Free(ctr_s& ret) {
	File_FreeBuf(ret.head_);
	ret.head_ = nullptr;
	ret.num_item_ = 0;
}
