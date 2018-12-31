
#include "icons_16X16.h"

static const unsigned char fontBits_icons_16X16[16][32] = {
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x1F,0x02,0x10,0x02,0x30,0x02,0x30,0x02,0x30,0x02,0x30,0x02,0x10,0xFE,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,}, // 0x20 ' '
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x1F,0x0E,0x10,0x0E,0x30,0x0E,0x30,0x0E,0x30,0x0E,0x30,0x0E,0x10,0xFE,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,}, // 0x21 '!'
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x1F,0x3E,0x10,0x3E,0x30,0x3E,0x30,0x3E,0x30,0x3E,0x30,0x3E,0x10,0xFE,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,}, // 0x22 '"'
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x1F,0xFE,0x10,0xFE,0x30,0xFE,0x30,0xFE,0x30,0xFE,0x30,0xFE,0x10,0xFE,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,}, // 0x23 '#'
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x1F,0xFE,0x13,0xFE,0x33,0xFE,0x33,0xFE,0x33,0xFE,0x33,0xFE,0x13,0xFE,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,}, // 0x24 '$'
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x1F,0xFE,0x1F,0xFE,0x3F,0xFE,0x3F,0xFE,0x3F,0xFE,0x3F,0xFE,0x1F,0xFE,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,}, // 0x25 '%'
  {0x00,0x00,0xFC,0x0F,0xFC,0x0F,0xFC,0x0F,0xFC,0x0F,0x4C,0x0E,0x6C,0x3D,0x5C,0x3D,0x4C,0x1E,0xFC,0x1F,0xFC,0x3F,0xFC,0x3F,0xFC,0x3F,0xFC,0x3F,0xFC,0x3F,0x00,0x00,}, // 0x26 '&'
  {0x00,0x00,0x00,0x00,0x40,0x00,0x60,0x00,0x70,0x00,0x78,0x00,0x7E,0x00,0x7E,0x00,0x7E,0x00,0x7E,0x00,0x78,0x00,0x70,0x00,0x60,0x00,0x40,0x00,0x00,0x00,0x00,0x00,}, // 0x27 '''
  {0x00,0x00,0x00,0x00,0x40,0x00,0x60,0x00,0x70,0x00,0x78,0x00,0x7E,0x00,0x7E,0x01,0x7E,0x01,0x7E,0x00,0x78,0x00,0x70,0x00,0x60,0x00,0x40,0x00,0x00,0x00,0x00,0x00,}, // 0x28 '('
  {0x00,0x00,0x00,0x00,0x40,0x00,0x60,0x00,0x70,0x00,0x78,0x02,0x7E,0x04,0x7E,0x05,0x7E,0x05,0x7E,0x04,0x78,0x02,0x70,0x00,0x60,0x00,0x40,0x00,0x00,0x00,0x00,0x00,}, // 0x29 ')'
  {0x00,0x00,0x00,0x00,0x40,0x00,0x60,0x04,0x70,0x08,0x78,0x12,0x7E,0x14,0x7E,0x15,0x7E,0x15,0x7E,0x14,0x78,0x12,0x70,0x08,0x60,0x04,0x40,0x00,0x00,0x00,0x00,0x00,}, // 0x2A '*'
};

const tf_font_t font_icons_16X16 = {(const unsigned char *)fontBits_icons_16X16, 16, 16, 32, 47, NULL};
