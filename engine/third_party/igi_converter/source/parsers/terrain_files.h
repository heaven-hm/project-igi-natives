/******************************************************************************
 * @file    terrain_files.h
 * @brief   terrain specific file formats
 *****************************************************************************/

#pragma once

/*
================================================================================
 *.lmp
================================================================================
*/
bool	LMP_Load(const char* filename, pics_s& pics);

/*
================================================================================
 *.ctr
================================================================================
*/
#pragma pack(push, 1)

struct ctr_item_s {
	int16_t					children_[8];
	int8_t					cmd_transform_[8];
	uint8_t					children_mask_;
	uint8_t					pad_[3];
	uint32_t				cmd_offset_;
};

static_assert(sizeof(ctr_item_s) == 32, "bad size of ctr_item_s");

#pragma pack(pop)

struct ctr_s {
	ctr_item_s *			head_;
	int						num_item_;
};

bool	CTR_Load(const char* filename, ctr_s& ret);
void	CTR_Free(ctr_s& ret);

/*
================================================================================
 *.cmd
================================================================================
*/

#pragma pack(push, 1)

struct cmd_item_s {
	uint16_t				num_triangle_;
	uint16_t				vertex_offset_;	// == num_triangle_ * sizeof(uint32_t)
	uint16_t				num_parent_vertex_;
	uint16_t				num_child_vertex_;
};

static_assert(sizeof(cmd_item_s) == 8, "bad size of cmd_item_s");

#pragma pack(pop)

/*
================================================================================
 *.bit
================================================================================
*/

/* bit_item:

  item idx
  0          bit array: SQUARE(size_of_item0)
  1          bit array: SQUARE(size_of_item1)
  2          bit array: SQUARE(size_of_item2)
  3          bit array: SQUARE(size_of_item3)
  ...

 */

#pragma pack(push, 1)

struct bit_item_s {
	uint32_t				contents_;	// runtime pointer in 32bit platform
	uint8_t					unk_;
	uint8_t					pad_[3];
	unsigned int			size_;
};

static_assert(sizeof(bit_item_s) == 12, "bad size of bit_item_s");

#pragma pack(pop)

/*
================================================================================
 *.hmp
================================================================================
*/

/* hmp_item:

  item idx
  0          hmp array: SQUARE(size_of_item0 + 1)
  1          hmp array: SQUARE(size_of_item1 + 1)
  2          hmp array: SQUARE(size_of_item2 + 1)
  3          hmp array: SQUARE(size_of_item3 + 1)
  ...

 */

#pragma pack(push, 1)

struct hmp_item_s {
	uint32_t				contents_;	// runtime pointer in 32bit platform
	uint8_t					unk_;
	uint8_t					pad_[3];
	unsigned int			size_;
};

static_assert(sizeof(hmp_item_s) == 12, "bad size of hmp_item_s");

#pragma pack(pop)
