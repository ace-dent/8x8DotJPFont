/*
8x8dot Japanese font for Arduboy

convert misaki_gothic.png to hex.
(Hiragana, Katakana and Symbol)

Copyright (c) 2016 emutyworks

-----------------------------------------------------
Original: 8x8 dot Japanese font "Misaki font"
http://www.geocities.jp/littlimi/misaki.htm

These fonts are free softwares.
Unlimited permission is granted to use, copy, and distribute it, with or without modification, 
either commercially and noncommercially.
THESE FONTS ARE PROVIDED "AS IS" WITHOUT WARRANTY.

Copyright(C) 2002-2015 Num Kadoma
*/
#ifndef MISAKI_FONT_F0_H
#define MISAKI_FONT_F0_H

PROGMEM const uint8_t misaki_font_f0[240][8] =
{
  { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },/* 0x00 　 */
  { 0x20,0x40,0x00,0x00,0x00,0x00,0x00,0x00 },/* 0x01 、 */
  { 0x20,0x50,0x20,0x00,0x00,0x00,0x00,0x00 },/* 0x02 。 */
  { 0x50,0x30,0x00,0x00,0x00,0x00,0x00,0x00 },/* 0x03 ， */
  { 0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00 },/* 0x04 ． */
  { 0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00 },/* 0x05 ・ */
  { 0x00,0x00,0x36,0x36,0x00,0x00,0x00,0x00 },/* 0x06 ： */
  { 0x00,0x00,0x56,0x36,0x00,0x00,0x00,0x00 },/* 0x07 ； */
  { 0x00,0x02,0x01,0x51,0x09,0x09,0x06,0x00 },/* 0x08 ？ */
  { 0x00,0x00,0x00,0x5f,0x00,0x00,0x00,0x00 },/* 0x09 ！ */
  { 0x00,0x00,0x00,0x00,0x7f,0x41,0x41,0x00 },/* 0x0A ［ */
  { 0x41,0x41,0x7f,0x00,0x00,0x00,0x00,0x00 },/* 0x0B ］ */
  { 0x00,0x00,0x00,0x3f,0x01,0x01,0x01,0x00 },/* 0x0C 「 */
  { 0x40,0x40,0x40,0x7e,0x00,0x00,0x00,0x00 },/* 0x0D 」 */
  { 0x00,0x00,0x3f,0x21,0x3d,0x05,0x07,0x00 },/* 0x0E 『 */
  { 0x70,0x50,0x5e,0x42,0x7e,0x00,0x00,0x00 },/* 0x0F 』 */
  { 0x00,0x00,0x00,0x00,0x7f,0x63,0x41,0x00 },/* 0x10 【 */
  { 0x41,0x63,0x7f,0x00,0x00,0x00,0x00,0x00 },/* 0x11 】 */
  { 0x08,0x08,0x08,0x7f,0x08,0x08,0x08,0x00 },/* 0x12 ＋ */
  { 0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00 },/* 0x13 － */
  { 0x44,0x44,0x44,0x5f,0x44,0x44,0x44,0x00 },/* 0x14 ± */
  { 0x41,0x22,0x14,0x08,0x14,0x22,0x41,0x00 },/* 0x15 × */
  { 0x08,0x08,0x08,0x2a,0x08,0x08,0x08,0x00 },/* 0x16 ÷ */
  { 0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x00 },/* 0x17 ＝ */
  { 0x14,0x34,0x14,0x1c,0x14,0x16,0x14,0x00 },/* 0x18 ≠ */
  { 0x08,0x08,0x14,0x14,0x14,0x22,0x22,0x00 },/* 0x19 ＜ */
  { 0x22,0x22,0x14,0x14,0x14,0x08,0x08,0x00 },/* 0x1A ＞ */
  { 0x02,0x05,0x02,0x3c,0x42,0x42,0x24,0x00 },/* 0x1B ℃ */
  { 0x00,0x2b,0x2c,0x78,0x2c,0x2b,0x00,0x00 },/* 0x1C ￥ */
  { 0x00,0x24,0x2a,0x7a,0x2f,0x2a,0x12,0x00 },/* 0x1D ＄ */
  { 0x00,0x1c,0x62,0x32,0x2e,0x23,0x14,0x00 },/* 0x1E ￠ */
  { 0x20,0x54,0x5e,0x25,0x41,0x42,0x20,0x00 },/* 0x1F ￡ */
  { 0x42,0x25,0x12,0x08,0x24,0x52,0x21,0x00 },/* 0x20 ％ */
  { 0x20,0x62,0x3e,0x63,0x3e,0x23,0x02,0x00 },/* 0x21 ＃ */
  { 0x20,0x56,0x49,0x55,0x22,0x58,0x40,0x00 },/* 0x22 ＆ */
  { 0x00,0x22,0x14,0x7f,0x14,0x22,0x00,0x00 },/* 0x23 ＊ */
  { 0x1c,0x22,0x59,0x55,0x4d,0x12,0x0c,0x00 },/* 0x24 ＠ */
  { 0x00,0x00,0x4a,0x55,0x55,0x29,0x00,0x00 },/* 0x25 § */
  { 0x04,0x64,0x3c,0x17,0x3c,0x64,0x04,0x00 },/* 0x26 ☆ */
  { 0x04,0x64,0x3c,0x1f,0x3c,0x64,0x04,0x00 },/* 0x27 ★ */
  { 0x1c,0x22,0x41,0x41,0x41,0x22,0x1c,0x00 },/* 0x28 ○ */
  { 0x1c,0x3e,0x7f,0x7f,0x7f,0x3e,0x1c,0x00 },/* 0x29 ● */
  { 0x1c,0x22,0x5d,0x55,0x5d,0x22,0x1c,0x00 },/* 0x2A ◎ */
  { 0x08,0x14,0x22,0x41,0x22,0x14,0x08,0x00 },/* 0x2B ◇ */
  { 0x08,0x1c,0x3e,0x7f,0x3e,0x1c,0x08,0x00 },/* 0x2C ◆ */
  { 0x7f,0x41,0x41,0x41,0x41,0x41,0x7f,0x00 },/* 0x2D □ */
  { 0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x00 },/* 0x2E ■ */
  { 0x40,0x70,0x4c,0x43,0x4c,0x70,0x40,0x00 },/* 0x2F △ */
  { 0x40,0x70,0x7c,0x7f,0x7c,0x70,0x40,0x00 },/* 0x30 ▲ */
  { 0x01,0x07,0x19,0x61,0x19,0x07,0x01,0x00 },/* 0x31 ▽ */
  { 0x01,0x07,0x1f,0x7f,0x1f,0x07,0x01,0x00 },/* 0x32 ▼ */
  { 0x49,0x22,0x14,0x49,0x14,0x22,0x49,0x00 },/* 0x33 ※ */
  { 0x05,0x05,0x05,0x7d,0x05,0x05,0x05,0x00 },/* 0x34 〒 */
  { 0x08,0x08,0x08,0x08,0x2a,0x1c,0x08,0x00 },/* 0x35 → */
  { 0x08,0x1c,0x2a,0x08,0x08,0x08,0x08,0x00 },/* 0x36 ← */
  { 0x00,0x04,0x02,0x7f,0x02,0x04,0x00,0x00 },/* 0x37 ↑ */
  { 0x00,0x10,0x20,0x7f,0x20,0x10,0x00,0x00 },/* 0x38 ↓ */
  { 0x00,0x3e,0x41,0x41,0x41,0x41,0x3e,0x00 },/* 0x39 ０ */
  { 0x00,0x00,0x42,0x7f,0x40,0x00,0x00,0x00 },/* 0x3A １ */
  { 0x00,0x62,0x51,0x51,0x49,0x49,0x46,0x00 },/* 0x3B ２ */
  { 0x00,0x22,0x41,0x49,0x49,0x49,0x36,0x00 },/* 0x3C ３ */
  { 0x00,0x30,0x28,0x24,0x22,0x7f,0x20,0x00 },/* 0x3D ４ */
  { 0x00,0x2f,0x45,0x45,0x45,0x45,0x39,0x00 },/* 0x3E ５ */
  { 0x00,0x3e,0x49,0x49,0x49,0x49,0x32,0x00 },/* 0x3F ６ */
  { 0x00,0x01,0x01,0x61,0x19,0x05,0x03,0x00 },/* 0x40 ７ */
  { 0x00,0x36,0x49,0x49,0x49,0x49,0x36,0x00 },/* 0x41 ８ */
  { 0x00,0x26,0x49,0x49,0x49,0x49,0x3e,0x00 },/* 0x42 ９ */
  { 0x00,0x20,0x54,0x7e,0x34,0x14,0x60,0x00 },/* 0x43 ぁ */
  { 0x20,0x52,0x7f,0x2a,0x1a,0x4a,0x30,0x00 },/* 0x44 あ */
  { 0x00,0x3c,0x40,0x20,0x04,0x18,0x00,0x00 },/* 0x45 ぃ */
  { 0x1e,0x20,0x40,0x20,0x02,0x04,0x18,0x00 },/* 0x46 い */
  { 0x00,0x10,0x4a,0x4a,0x2a,0x10,0x00,0x00 },/* 0x47 ぅ */
  { 0x00,0x08,0x45,0x45,0x45,0x25,0x18,0x00 },/* 0x48 う */
  { 0x00,0x48,0x2a,0x3a,0x4a,0x40,0x00,0x00 },/* 0x49 ぇ */
  { 0x00,0x44,0x25,0x15,0x3d,0x45,0x40,0x00 },/* 0x4A え */
  { 0x00,0x24,0x7e,0x14,0x50,0x24,0x00,0x00 },/* 0x4B ぉ */
  { 0x22,0x52,0x7f,0x0a,0x48,0x4a,0x34,0x00 },/* 0x4C お */
  { 0x44,0x34,0x4f,0x44,0x38,0x04,0x18,0x00 },/* 0x4D か */
  { 0x44,0x34,0x4f,0x44,0x39,0x04,0x19,0x00 },/* 0x4E が */
  { 0x00,0x2a,0x5a,0x4b,0x4e,0x5a,0x08,0x00 },/* 0x4F き */
  { 0x00,0x2a,0x5a,0x4b,0x4e,0x5b,0x08,0x00 },/* 0x50 ぎ */
  { 0x00,0x08,0x14,0x14,0x22,0x41,0x00,0x00 },/* 0x51 く */
  { 0x00,0x08,0x14,0x14,0x22,0x45,0x04,0x00 },/* 0x52 ぐ */
  { 0x3f,0x00,0x04,0x44,0x3f,0x04,0x04,0x00 },/* 0x53 け */
  { 0x3f,0x00,0x04,0x44,0x3f,0x04,0x05,0x00 },/* 0x54 げ */
  { 0x00,0x20,0x52,0x42,0x42,0x42,0x40,0x00 },/* 0x55 こ */
  { 0x00,0x20,0x52,0x42,0x43,0x42,0x41,0x00 },/* 0x56 ご */
  { 0x00,0x24,0x54,0x44,0x47,0x5c,0x04,0x00 },/* 0x57 さ */
  { 0x00,0x24,0x54,0x44,0x47,0x5c,0x05,0x00 },/* 0x58 ざ */
  { 0x00,0x00,0x3f,0x40,0x40,0x40,0x20,0x00 },/* 0x59 し */
  { 0x00,0x00,0x3f,0x40,0x41,0x40,0x21,0x00 },/* 0x5A じ */
  { 0x02,0x02,0x0a,0x56,0x3f,0x02,0x02,0x00 },/* 0x5B す */
  { 0x02,0x02,0x0a,0x56,0x3f,0x02,0x03,0x00 },/* 0x5C ず */
  { 0x04,0x04,0x3f,0x44,0x54,0x5f,0x44,0x00 },/* 0x5D せ */
  { 0x04,0x04,0x3f,0x44,0x54,0x5f,0x45,0x00 },/* 0x5E ぜ */
  { 0x00,0x08,0x09,0x3d,0x4b,0x49,0x08,0x00 },/* 0x5F そ */
  { 0x00,0x08,0x09,0x3d,0x4b,0x49,0x0a,0x00 },/* 0x60 ぞ */
  { 0x42,0x3a,0x07,0x22,0x54,0x44,0x44,0x00 },/* 0x61 た */
  { 0x42,0x3a,0x07,0x22,0x55,0x44,0x45,0x00 },/* 0x62 だ */
  { 0x00,0x02,0x12,0x4e,0x4b,0x4a,0x32,0x00 },/* 0x63 ち */
  { 0x00,0x02,0x12,0x4e,0x4b,0x4a,0x33,0x00 },/* 0x64 ぢ */
  { 0x00,0x10,0x10,0x48,0x48,0x30,0x00,0x00 },/* 0x65 っ */
  { 0x04,0x04,0x02,0x22,0x22,0x22,0x1c,0x00 },/* 0x66 つ */
  { 0x04,0x04,0x02,0x22,0x23,0x22,0x1d,0x00 },/* 0x67 づ */
  { 0x00,0x02,0x02,0x1a,0x25,0x43,0x41,0x00 },/* 0x68 て */
  { 0x00,0x02,0x02,0x1a,0x25,0x43,0x45,0x00 },/* 0x69 で */
  { 0x00,0x20,0x57,0x48,0x48,0x44,0x44,0x00 },/* 0x6A と */
  { 0x00,0x20,0x57,0x48,0x49,0x44,0x45,0x00 },/* 0x6B ど */
  { 0x12,0x0a,0x27,0x52,0x50,0x3a,0x24,0x00 },/* 0x6C な */
  { 0x7f,0x00,0x20,0x52,0x42,0x42,0x40,0x00 },/* 0x6D に */
  { 0x30,0x4e,0x38,0x54,0x0f,0x64,0x78,0x00 },/* 0x6E ぬ */
  { 0x24,0x14,0x7f,0x04,0x22,0x52,0x3c,0x00 },/* 0x6F ね */
  { 0x18,0x24,0x12,0x4e,0x42,0x24,0x18,0x00 },/* 0x70 の */
  { 0x7f,0x00,0x24,0x54,0x54,0x3f,0x44,0x00 },/* 0x71 は */
  { 0x7f,0x00,0x24,0x54,0x54,0x3f,0x45,0x00 },/* 0x72 ば */
  { 0x7f,0x00,0x24,0x54,0x56,0x3d,0x46,0x00 },/* 0x73 ぱ */
  { 0x02,0x3a,0x47,0x40,0x41,0x3e,0x04,0x00 },/* 0x74 ひ */
  { 0x02,0x3a,0x47,0x40,0x41,0x3e,0x05,0x00 },/* 0x75 び */
  { 0x02,0x3a,0x47,0x40,0x43,0x3d,0x06,0x00 },/* 0x76 ぴ */
  { 0x40,0x30,0x40,0x4d,0x32,0x10,0x60,0x00 },/* 0x77 ふ */
  { 0x40,0x30,0x40,0x4d,0x32,0x11,0x61,0x00 },/* 0x78 ぶ */
  { 0x40,0x30,0x40,0x4d,0x32,0x15,0x62,0x00 },/* 0x79 ぷ */
  { 0x08,0x04,0x02,0x04,0x08,0x10,0x10,0x00 },/* 0x7A へ */
  { 0x08,0x04,0x02,0x04,0x09,0x10,0x11,0x00 },/* 0x7B べ */
  { 0x08,0x04,0x02,0x04,0x0a,0x15,0x12,0x00 },/* 0x7C ぺ */
  { 0x7f,0x00,0x6a,0x6a,0x7e,0x2a,0x4a,0x00 },/* 0x7D ほ */
  { 0x7f,0x00,0x6a,0x6a,0x7f,0x2a,0x4b,0x00 },/* 0x7E ぼ */
  { 0x7f,0x00,0x6a,0x6a,0x7e,0x2d,0x4a,0x00 },/* 0x7F ぽ */
  { 0x00,0x6a,0x6a,0x6a,0x7f,0x2a,0x4a,0x00 },/* 0x80 ま */
  { 0x30,0x29,0x1d,0x4b,0x48,0x3c,0x10,0x00 },/* 0x81 み */
  { 0x12,0x2a,0x7f,0x42,0x40,0x42,0x24,0x00 },/* 0x82 む */
  { 0x30,0x4e,0x38,0x54,0x0f,0x44,0x38,0x00 },/* 0x83 め */
  { 0x00,0x0a,0x3e,0x4b,0x4a,0x4a,0x30,0x00 },/* 0x84 も */
  { 0x00,0x08,0x0e,0x38,0x46,0x14,0x08,0x00 },/* 0x85 ゃ */
  { 0x04,0x07,0x1c,0x62,0x03,0x0a,0x04,0x00 },/* 0x86 や */
  { 0x00,0x1c,0x48,0x3e,0x24,0x18,0x00,0x00 },/* 0x87 ゅ */
  { 0x1e,0x04,0x52,0x3f,0x12,0x12,0x0c,0x00 },/* 0x88 ゆ */
  { 0x00,0x20,0x50,0x50,0x3e,0x48,0x00,0x00 },/* 0x89 ょ */
  { 0x00,0x20,0x50,0x50,0x3f,0x24,0x44,0x00 },/* 0x8A よ */
  { 0x00,0x1c,0x51,0x49,0x4a,0x48,0x30,0x00 },/* 0x8B ら */
  { 0x00,0x0f,0x42,0x41,0x21,0x1e,0x00,0x00 },/* 0x8C り */
  { 0x00,0x10,0x69,0x6d,0x4b,0x49,0x30,0x00 },/* 0x8D る */
  { 0x24,0x14,0x7f,0x04,0x02,0x3e,0x40,0x00 },/* 0x8E れ */
  { 0x00,0x10,0x49,0x4d,0x4b,0x49,0x30,0x00 },/* 0x8F ろ */
  { 0x00,0x28,0x18,0x7e,0x08,0x44,0x38,0x00 },/* 0x90 ゎ */
  { 0x24,0x14,0x7f,0x04,0x42,0x42,0x3c,0x00 },/* 0x91 わ */
  { 0x30,0x49,0x25,0x1f,0x24,0x54,0x38,0x00 },/* 0x92 ゐ */
  { 0x40,0x28,0x25,0x57,0x35,0x28,0x40,0x00 },/* 0x93 ゑ */
  { 0x10,0x0a,0x2e,0x5b,0x72,0x4a,0x48,0x00 },/* 0x94 を */
  { 0x40,0x30,0x0c,0x33,0x40,0x40,0x20,0x00 },/* 0x95 ん */
  { 0x00,0x04,0x44,0x3c,0x14,0x0c,0x00,0x00 },/* 0x96 ァ */
  { 0x00,0x01,0x41,0x3d,0x09,0x05,0x03,0x00 },/* 0x97 ア */
  { 0x00,0x20,0x20,0x10,0x78,0x04,0x00,0x00 },/* 0x98 ィ */
  { 0x00,0x10,0x10,0x08,0x7c,0x02,0x01,0x00 },/* 0x99 イ */
  { 0x00,0x18,0x48,0x4c,0x28,0x18,0x00,0x00 },/* 0x9A ゥ */
  { 0x00,0x06,0x42,0x43,0x22,0x12,0x0e,0x00 },/* 0x9B ウ */
  { 0x00,0x40,0x48,0x78,0x48,0x40,0x00,0x00 },/* 0x9C ェ */
  { 0x20,0x22,0x22,0x3e,0x22,0x22,0x20,0x00 },/* 0x9D エ */
  { 0x00,0x28,0x28,0x58,0x7c,0x08,0x00,0x00 },/* 0x9E ォ */
  { 0x22,0x22,0x12,0x4a,0x7f,0x02,0x02,0x00 },/* 0x9F オ */
  { 0x00,0x42,0x22,0x1f,0x02,0x42,0x7e,0x00 },/* 0xA0 カ */
  { 0x00,0x42,0x22,0x1f,0x02,0x42,0x7f,0x00 },/* 0xA1 ガ */
  { 0x00,0x12,0x12,0x1f,0x72,0x12,0x10,0x00 },/* 0xA2 キ */
  { 0x00,0x12,0x12,0x1f,0x72,0x13,0x10,0x00 },/* 0xA3 ギ */
  { 0x00,0x08,0x44,0x43,0x22,0x12,0x0e,0x00 },/* 0xA4 ク */
  { 0x00,0x08,0x44,0x43,0x22,0x12,0x0f,0x00 },/* 0xA5 グ */
  { 0x08,0x07,0x42,0x22,0x1e,0x02,0x02,0x00 },/* 0xA6 ケ */
  { 0x08,0x07,0x42,0x22,0x1f,0x02,0x03,0x00 },/* 0xA7 ゲ */
  { 0x00,0x42,0x42,0x42,0x42,0x42,0x7e,0x00 },/* 0xA8 コ */
  { 0x00,0x42,0x42,0x42,0x43,0x42,0x7f,0x00 },/* 0xA9 ゴ */
  { 0x02,0x02,0x4f,0x42,0x22,0x1f,0x02,0x00 },/* 0xAA サ */
  { 0x02,0x02,0x4f,0x42,0x23,0x1e,0x03,0x00 },/* 0xAB ザ */
  { 0x00,0x45,0x4a,0x40,0x20,0x10,0x0c,0x00 },/* 0xAC シ */
  { 0x00,0x45,0x4a,0x40,0x21,0x10,0x0d,0x00 },/* 0xAD ジ */
  { 0x40,0x42,0x22,0x22,0x1a,0x26,0x40,0x00 },/* 0xAE ス */
  { 0x40,0x42,0x22,0x22,0x1b,0x26,0x41,0x00 },/* 0xAF ズ */
  { 0x04,0x04,0x3f,0x44,0x44,0x54,0x4c,0x00 },/* 0xB0 セ */
  { 0x04,0x04,0x3f,0x44,0x45,0x54,0x4d,0x00 },/* 0xB1 ゼ */
  { 0x00,0x01,0x46,0x40,0x20,0x10,0x0f,0x00 },/* 0xB2 ソ */
  { 0x00,0x01,0x46,0x40,0x20,0x11,0x0f,0x00 },/* 0xB3 ゾ */
  { 0x00,0x08,0x44,0x4b,0x2a,0x12,0x0e,0x00 },/* 0xB4 タ */
  { 0x00,0x08,0x44,0x4b,0x2a,0x12,0x0f,0x00 },/* 0xB5 ダ */
  { 0x08,0x0a,0x4a,0x3e,0x09,0x09,0x08,0x00 },/* 0xB6 チ */
  { 0x08,0x0a,0x4a,0x3e,0x09,0x08,0x09,0x00 },/* 0xB7 ヂ */
  { 0x00,0x18,0x40,0x58,0x20,0x18,0x00,0x00 },/* 0xB8 ッ */
  { 0x02,0x0c,0x42,0x4c,0x20,0x10,0x0e,0x00 },/* 0xB9 ツ */
  { 0x02,0x0c,0x42,0x4c,0x21,0x10,0x0d,0x00 },/* 0xBA ヅ */
  { 0x04,0x05,0x45,0x3d,0x05,0x05,0x04,0x00 },/* 0xBB テ */
  { 0x04,0x05,0x45,0x3d,0x05,0x04,0x05,0x00 },/* 0xBC デ */
  { 0x00,0x00,0x7f,0x08,0x08,0x10,0x00,0x00 },/* 0xBD ト */
  { 0x00,0x00,0x7f,0x08,0x09,0x10,0x01,0x00 },/* 0xBE ド */
  { 0x04,0x44,0x24,0x1f,0x04,0x04,0x04,0x00 },/* 0xBF ナ */
  { 0x20,0x22,0x22,0x22,0x22,0x22,0x20,0x00 },/* 0xC0 ニ */
  { 0x40,0x41,0x25,0x15,0x19,0x27,0x00,0x00 },/* 0xC1 ヌ */
  { 0x20,0x22,0x12,0x7b,0x06,0x12,0x20,0x00 },/* 0xC2 ネ */
  { 0x40,0x40,0x20,0x10,0x08,0x07,0x00,0x00 },/* 0xC3 ノ */
  { 0x40,0x30,0x0e,0x00,0x02,0x0c,0x70,0x00 },/* 0xC4 ハ */
  { 0x40,0x30,0x0e,0x00,0x02,0x0d,0x71,0x00 },/* 0xC5 バ */
  { 0x40,0x30,0x0e,0x00,0x02,0x0d,0x72,0x00 },/* 0xC6 パ */
  { 0x00,0x3f,0x48,0x48,0x48,0x44,0x44,0x00 },/* 0xC7 ヒ */
  { 0x00,0x3f,0x48,0x48,0x49,0x44,0x45,0x00 },/* 0xC8 ビ */
  { 0x00,0x3f,0x48,0x48,0x4a,0x45,0x46,0x00 },/* 0xC9 ピ */
  { 0x00,0x02,0x42,0x42,0x22,0x12,0x0e,0x00 },/* 0xCA フ */
  { 0x00,0x02,0x42,0x42,0x23,0x12,0x0f,0x00 },/* 0xCB ブ */
  { 0x00,0x02,0x42,0x42,0x22,0x15,0x0e,0x00 },/* 0xCC プ */
  { 0x08,0x04,0x02,0x04,0x08,0x10,0x20,0x00 },/* 0xCD ヘ */
  { 0x08,0x04,0x02,0x04,0x09,0x10,0x21,0x00 },/* 0xCE ベ */
  { 0x08,0x04,0x02,0x04,0x0a,0x15,0x22,0x00 },/* 0xCF ペ */
  { 0x24,0x14,0x44,0x7f,0x04,0x14,0x24,0x00 },/* 0xD0 ホ */
  { 0x24,0x14,0x44,0x7f,0x05,0x14,0x25,0x00 },/* 0xD1 ボ */
  { 0x24,0x14,0x44,0x7f,0x06,0x15,0x22,0x00 },/* 0xD2 ポ */
  { 0x02,0x02,0x12,0x22,0x52,0x0a,0x06,0x00 },/* 0xD3 マ */
  { 0x00,0x21,0x25,0x29,0x4a,0x42,0x00,0x00 },/* 0xD4 ミ */
  { 0x40,0x70,0x4c,0x43,0x50,0x20,0x40,0x00 },/* 0xD5 ム */
  { 0x40,0x44,0x24,0x14,0x08,0x37,0x00,0x00 },/* 0xD6 メ */
  { 0x00,0x08,0x09,0x3f,0x49,0x49,0x48,0x00 },/* 0xD7 モ */
  { 0x00,0x10,0x1c,0x68,0x08,0x18,0x00,0x00 },/* 0xD8 ャ */
  { 0x04,0x04,0x0f,0x74,0x02,0x0a,0x06,0x00 },/* 0xD9 ヤ */
  { 0x00,0x40,0x48,0x48,0x78,0x40,0x00,0x00 },/* 0xDA ュ */
  { 0x20,0x22,0x22,0x22,0x3e,0x20,0x20,0x00 },/* 0xDB ユ */
  { 0x00,0x00,0x44,0x54,0x54,0x7c,0x00,0x00 },/* 0xDC ョ */
  { 0x00,0x42,0x4a,0x4a,0x4a,0x4a,0x7e,0x00 },/* 0xDD ヨ */
  { 0x00,0x04,0x45,0x45,0x25,0x15,0x0c,0x00 },/* 0xDE ラ */
  { 0x00,0x0f,0x40,0x40,0x20,0x1f,0x00,0x00 },/* 0xDF リ */
  { 0x40,0x20,0x1e,0x00,0x7f,0x20,0x10,0x00 },/* 0xE0 ル */
  { 0x00,0x00,0x7f,0x40,0x20,0x10,0x08,0x00 },/* 0xE1 レ */
  { 0x00,0x7e,0x42,0x42,0x42,0x42,0x7e,0x00 },/* 0xE2 ロ */
  { 0x00,0x0c,0x44,0x44,0x24,0x1c,0x00,0x00 },/* 0xE3 ヮ */
  { 0x00,0x06,0x42,0x42,0x22,0x12,0x0e,0x00 },/* 0xE4 ワ */
  { 0x10,0x12,0x1e,0x12,0x12,0x7f,0x12,0x00 },/* 0xE5 ヰ */
  { 0x20,0x22,0x22,0x3a,0x26,0x22,0x20,0x00 },/* 0xE6 ヱ */
  { 0x00,0x01,0x45,0x45,0x25,0x15,0x0f,0x00 },/* 0xE7 ヲ */
  { 0x00,0x41,0x42,0x40,0x20,0x10,0x0c,0x00 },/* 0xE8 ン */
  { 0x00,0x06,0x42,0x43,0x22,0x12,0x0f,0x00 },/* 0xE9 ヴ */
  { 0x00,0x48,0x28,0x1c,0x48,0x78,0x00,0x00 },/* 0xEA ヵ */
  { 0x00,0x10,0x0c,0x48,0x38,0x08,0x00,0x00 },/* 0xEB ヶ */
  { 0x08,0x04,0x04,0x08,0x10,0x10,0x08,0x00 },/* 0xEC 〜 */
  { 0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00 },/* 0xED … */
  { 0x30,0x48,0x48,0x39,0x05,0x03,0x0f,0x00 },/* 0xEE ♂ */
  { 0x00,0x26,0x29,0x79,0x29,0x26,0x00,0x00 },/* 0xEF ♀ */
};

#endif

