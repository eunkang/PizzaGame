
//{{BLOCK(win)

//======================================================================
//
//	win, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 211 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 6752 + 2048 = 9312
//
//	Time-stamp: 2019-04-18, 19:57:43
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short winTiles[3376] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x0005,0x5555,0x0005,0x5555,0x0005,0x5555,
	0x0005,0x5555,0x0005,0x5555,0x0005,0x0055,0x0005,0x0000,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5500,0x5555,0x5000,0x5555,

	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x0005,0x5000,0x0000,0x0000,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x0555,0x5555,0x0055,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x0000,0x5550,0x0000,0x5500,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x0055,0x0550,0x0055,0x0050,

	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5550,0x0055,0x5550,0x0005,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5500,0x5000,0x5000,0x5000,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x0005,0x5555,0x0005,0x5555,
	0x5555,0x5555,0x5555,0x0055,0x5555,0x0055,0x5555,0x0055,
	0x5555,0x0055,0x5555,0x0055,0x0005,0x0055,0x0005,0x0055,

	0x5555,0x5555,0x5550,0x5555,0x5550,0x5555,0x5550,0x5555,
	0x5550,0x5555,0x5550,0x5555,0x5550,0x5555,0x5550,0x5555,
	0x0005,0x0000,0x0005,0x5550,0x0005,0x5555,0x0005,0x5555,
	0x0005,0x5555,0x0005,0x5555,0x0005,0x5555,0x0005,0x5555,
	0x0000,0x0555,0x0005,0x0055,0x0005,0x0055,0x0005,0x0055,
	0x0005,0x0055,0x0005,0x0055,0x0005,0x0055,0x0005,0x0055,
	0x0000,0x0000,0x5500,0x0055,0x5550,0x0555,0x5550,0x0555,
	0x5550,0x0555,0x5550,0x0555,0x5550,0x0555,0x5500,0x0055,

	0x5550,0x0005,0x5500,0x0000,0x5500,0x5000,0x5500,0x5000,
	0x5500,0x5000,0x5500,0x5000,0x5500,0x5000,0x5500,0x0000,
	0x0000,0x5000,0x5555,0x0000,0x5555,0x0005,0x5555,0x0005,
	0x5555,0x0005,0x5555,0x0005,0x5555,0x0005,0x5555,0x0000,
	0x0055,0x0000,0x0055,0x5500,0x0055,0x5550,0x0055,0x5550,
	0x0055,0x5550,0x0055,0x5550,0x0055,0x5550,0x0055,0x5550,
	0x5550,0x0000,0x0555,0x5000,0x0555,0x5500,0x0555,0x5500,
	0x0555,0x5500,0x0555,0x5500,0x0555,0x5500,0x0555,0x5000,

	0x0000,0x5000,0x0555,0x5000,0x5555,0x5000,0x5555,0x5000,
	0x5555,0x5000,0x5555,0x5000,0x5555,0x5000,0x0555,0x5000,
	0x0005,0x5555,0x0005,0x5555,0x0005,0x5555,0x0005,0x5555,
	0x0005,0x5555,0x0005,0x5555,0x0005,0x5555,0x0005,0x5555,
	0x0005,0x0055,0x0005,0x0055,0x0005,0x0055,0x0005,0x0055,
	0x0005,0x0055,0x0005,0x0055,0x0005,0x5555,0x0000,0x5555,
	0x5550,0x5555,0x5550,0x5555,0x5550,0x5555,0x5550,0x5555,
	0x5550,0x5555,0x5550,0x5555,0x5555,0x5555,0x5555,0x5555,

	0x0005,0x5555,0x0005,0x5555,0x0005,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x0005,0x0555,0x0005,0x5555,0x0005,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x0000,0x0000,0x0000,0x0000,0x0005,0x5000,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5550,0x0005,0x5555,0x0055,0x5555,0x0555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,

	0x0000,0x5000,0x0000,0x5500,0x0000,0x5550,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x0055,0x5550,0x0055,0x5550,0x0055,0x5550,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x0000,0x5555,0x0005,0x5555,0x0055,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x0000,0x5000,0x5000,0x5000,0x5500,0x5000,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,

	0x0005,0x0000,0x0055,0x0000,0x0555,0x5000,0x5555,0x5555,
	0x5005,0x5555,0x0005,0x0000,0x5555,0x5555,0x5555,0x5555,
	0x0000,0x0055,0x0000,0x0055,0x0005,0x0055,0x0005,0x5555,
	0x0000,0x5555,0x5000,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5550,0x5555,0x5550,0x5555,0x5550,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x0000,0x0555,0x3330,0x0055,0x3333,0x3055,0x3333,
	0x3055,0x3333,0x3055,0x3333,0x3055,0x3333,0x3055,0x0333,

	0x5500,0x5555,0x5003,0x5555,0x0033,0x5555,0x0333,0x5550,
	0x3333,0x5003,0x3333,0x0333,0x3333,0x3333,0x3333,0x3333,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5000,0x5555,0x0333,0x5000,0x3333,0x0333,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x0000,0x5550,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x0555,0x5555,0x0555,

	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x0000,0x5550,0x6666,0x5500,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x0555,0x5550,0x0005,0x5000,0x6600,0x5066,0x6660,0x5066,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x0000,0x0555,0x0880,0x0055,0x8888,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5550,0x5555,0x5008,0x5555,

	0x0555,0x3333,0x0555,0x0330,0x5555,0x0000,0x0055,0x1110,
	0x1005,0x1111,0x1105,0x1111,0x1110,0x1111,0x1110,0x1111,
	0x5330,0x3335,0x3300,0x3355,0x3000,0x3533,0x0011,0x3330,
	0x1111,0x3300,0x1101,0x0011,0x1000,0x0111,0x1101,0x1111,
	0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x3300,0x3333,
	0x3003,0x3333,0x3033,0x3355,0x0000,0x3553,0x1111,0x5530,
	0x3333,0x0003,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,
	0x3333,0x3333,0x0333,0x3333,0x0333,0x3330,0x3333,0x5300,

	0x5550,0x5555,0x0000,0x5550,0x3333,0x0003,0x3333,0x3333,
	0x3333,0x5553,0x3333,0x3333,0x3333,0x3333,0x3335,0x3333,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5000,0x5555,
	0x0335,0x5550,0x3555,0x5003,0x5533,0x0033,0x3333,0x0355,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5550,0x5555,
	0x5555,0x0555,0x5555,0x0555,0x5555,0x0555,0x5555,0x0555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,

	0x6666,0x0006,0x6666,0x0066,0x6666,0x0066,0x6660,0x0666,
	0x6660,0x0666,0x6605,0x0666,0x6005,0x6666,0x0055,0x6666,
	0x6666,0x5066,0x6666,0x5066,0x6666,0x5006,0x6666,0x5506,
	0x6666,0x5506,0x6666,0x5500,0x6666,0x5550,0x6666,0x5550,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x0055,
	0x5555,0x8005,0x0555,0x8880,0x0055,0x8888,0x8005,0x8888,
	0x5555,0x5555,0x0555,0x0000,0x0000,0x8888,0x8880,0x5588,
	0x5888,0x5555,0x5588,0x8888,0x8888,0x8888,0x8888,0x8888,

	0x5555,0x5555,0x0000,0x5555,0x8888,0x0000,0x8855,0x8888,
	0x5555,0x8888,0x5558,0x5555,0x5588,0x5555,0x5588,0x5555,
	0x8005,0x8558,0x8800,0x5555,0x5888,0x5555,0x5588,0x8885,
	0x5555,0x8888,0x8555,0x8088,0x8885,0x8088,0x8888,0x0088,
	0x0088,0x5555,0x0888,0x5555,0x8885,0x5500,0x8855,0x5508,
	0x8858,0x5088,0x8858,0x0088,0x8888,0x0888,0x8880,0x0888,
	0x5555,0x0555,0x5555,0x1005,0x5555,0x9900,0x5555,0x1190,
	0x0555,0x1191,0x0555,0x1191,0x0555,0x1191,0x0555,0x9911,

	0x7110,0x7777,0x7111,0x1100,0x1719,0x1001,0x1791,0x0011,
	0x1791,0x0111,0x1791,0x7111,0x7791,0x7111,0x7119,0x7777,
	0x1117,0x1111,0x1177,0x2211,0x1171,0x2221,0x1177,0x2222,
	0x1117,0x2222,0x1111,0x5222,0x1111,0x2222,0x1111,0x5222,
	0x1111,0x3300,0x0012,0x0000,0x1022,0x0111,0x1222,0x1111,
	0x1222,0x1111,0x1225,0x1111,0x1222,0x1111,0x1222,0x1111,
	0x3333,0x3000,0x3333,0x0003,0x3300,0x0800,0x0110,0x8810,
	0x1111,0x8811,0x1001,0x9111,0x1011,0x1911,0x1111,0x1191,

	0x3355,0x3333,0x3553,0x3333,0x5300,0x3335,0x0008,0x3355,
	0x0888,0x3500,0x8199,0x0008,0x1911,0x0888,0x9111,0x8881,
	0x3333,0x3553,0x3333,0x5533,0x3333,0x5333,0x3333,0x3333,
	0x3333,0x3333,0x3333,0x3333,0x3330,0x3333,0x0008,0x3333,
	0x5500,0x5555,0x5503,0x5555,0x5003,0x5555,0x5035,0x5555,
	0x5033,0x5555,0x5033,0x5555,0x5033,0x5555,0x0333,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x0055,
	0x5555,0x0000,0x5555,0x6660,0x5555,0x6660,0x5555,0x6660,

	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5500,0x5555,0x5006,0x0055,0x5066,0x6005,0x0666,0x6600,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x0000,0x5555,0x0666,0x5555,0x0666,0x5555,
	0x5555,0x6600,0x5555,0x6605,0x5555,0x6055,0x5555,0x0055,
	0x5555,0x0555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x0666,0x5550,0x0066,0x5555,0x5066,0x5555,0x5006,0x5555,
	0x5500,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,

	0x5555,0x5555,0x5555,0x5555,0x5555,0x0555,0x5555,0x0555,
	0x5555,0x0555,0x5555,0x0555,0x5555,0x0055,0x5555,0x8055,
	0x8800,0x8888,0x8880,0x8858,0x5880,0x8855,0x5888,0x8855,
	0x5888,0x8855,0x5588,0x8855,0x5888,0x0855,0x5588,0x8855,
	0x0088,0x8888,0x0888,0x8880,0x0888,0x8800,0x0000,0x8000,
	0x0000,0x0000,0x0080,0x5500,0x8800,0x5000,0x8888,0x5050,
	0x8888,0x8888,0x8888,0x8888,0x8888,0x8888,0x8888,0x0888,
	0x0000,0x0000,0x5555,0x5055,0x5555,0x5055,0x5555,0x5055,

	0x8888,0x0008,0x8888,0x8000,0x0088,0x0000,0x5000,0x8000,
	0x0555,0x8000,0x0555,0x0550,0x0055,0x0550,0x5055,0x5500,
	0x8888,0x8888,0x8888,0x8888,0x8880,0x8888,0x8888,0x8888,
	0x8088,0x8888,0x8008,0x8888,0x8800,0x8888,0x0000,0x8888,
	0x5550,0x5555,0x5550,0x5555,0x5500,0x5555,0x5508,0x5555,
	0x5008,0x5555,0x5088,0x5555,0x5088,0x0555,0x0088,0x0555,
	0x0555,0x1111,0x0055,0x1111,0x2005,0x1122,0x2205,0x1222,
	0x2220,0x2252,0x5220,0x2222,0x2221,0x2222,0x2211,0x1222,

	0x1111,0x1111,0x1011,0x1111,0x0001,0x1111,0x1011,0x1111,
	0x1111,0x2221,0x2111,0x5222,0x2211,0x2222,0x2211,0x2222,
	0x1111,0x2221,0x1111,0x2211,0x0011,0x1110,0x1111,0x1100,
	0x1112,0x1101,0x1222,0x1111,0x2222,0x1111,0x2222,0x1111,
	0x1122,0x1111,0x1112,0x7711,0x1111,0x7777,0x1111,0x7117,
	0x1111,0x1117,0x1111,0x1117,0x1111,0x7771,0x1111,0x1111,
	0x1111,0x1191,0x1111,0x1191,0x1111,0x1911,0x1117,0x9111,
	0x1177,0x1111,0x1177,0x1001,0x1117,0x1000,0x0111,0x0330,

	0x9111,0x0881,0x9111,0x8811,0x1911,0x8111,0x1099,0x1111,
	0x0001,0x0000,0x3301,0x3333,0x3301,0x3333,0x3301,0x3333,
	0x0000,0x3300,0x3330,0x3003,0x3330,0x3033,0x3330,0x3333,
	0x3330,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,
	0x0033,0x5555,0x5033,0x5555,0x5033,0x5555,0x5033,0x5555,
	0x5033,0x5555,0x5033,0x5555,0x5003,0x5555,0x5503,0x5555,
	0x5555,0x6660,0x5555,0x6600,0x5555,0x6605,0x5555,0x6605,
	0x5555,0x6005,0x5555,0x6055,0x5555,0x6055,0x5555,0x0055,

	0x0666,0x6660,0x0666,0x6660,0x0666,0x6666,0x0666,0x6666,
	0x0666,0x6666,0x6666,0x6666,0x6666,0x0666,0x6666,0x5006,
	0x0666,0x5555,0x0666,0x5555,0x0066,0x5555,0x5066,0x5555,
	0x5506,0x5555,0x5500,0x5555,0x5550,0x5555,0x5555,0x5555,
	0x5555,0x8055,0x5555,0x8055,0x5555,0x8005,0x5555,0x8805,
	0x5555,0x8805,0x5555,0x8805,0x5555,0x8805,0x5555,0x8805,
	0x5588,0x8885,0x5558,0x8888,0x8558,0x0088,0x8855,0x8888,
	0x8888,0x8888,0x8888,0x8888,0x8888,0x0088,0x8888,0x0008,

	0x0888,0x0050,0x0008,0x0555,0x5000,0x5555,0x0088,0x0000,
	0x0008,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5555,0x5055,0x5550,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5555,0x5500,0x0500,0x5550,0x0000,0x5000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x8005,0x8888,0x8005,0x8888,0x8055,0x8888,0x8000,0x8888,
	0x0000,0x8888,0x0000,0x8888,0x0000,0x8880,0x0000,0x8880,

	0x0888,0x0555,0x0888,0x0055,0x0888,0x1055,0x0888,0x1055,
	0x0888,0x1055,0x0888,0x0055,0x0888,0x1100,0x0888,0x1110,
	0x2111,0x1122,0x1111,0x1111,0x7111,0x1177,0x7711,0x1771,
	0x1711,0x1711,0x7111,0x1711,0x9991,0x1777,0x1119,0x1779,
	0x2211,0x2522,0x2111,0x2222,0x1111,0x2221,0x1111,0x1111,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x7711,0x1177,
	0x2222,0x1199,0x9222,0x1911,0x1912,0x9111,0x1911,0x9111,
	0x1911,0x9111,0x9111,0x1911,0x1111,0x1199,0x2211,0x1111,

	0x1011,0x1111,0x0001,0x1111,0x1011,0x1111,0x1111,0x1111,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x0111,0x1111,0x0011,
	0x0111,0x0033,0x0011,0x1033,0x3001,0x1033,0x3300,0x0033,
	0x3330,0x0333,0x3330,0x0333,0x3330,0x0003,0x3333,0x5500,
	0x3301,0x3333,0x3001,0x3333,0x3011,0x3333,0x3001,0x0033,
	0x0001,0x5500,0x5500,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x3333,0x3333,0x3333,0x3333,0x3333,0x0333,0x0000,0x0000,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,

	0x5503,0x5555,0x5500,0x5555,0x5550,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x6660,0x5506,0x6660,0x5550,0x0600,0x5550,0x0005,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x8805,0x5555,0x8805,0x5555,0x8805,0x5555,0x8805,
	0x5555,0x8805,0x5555,0x8805,0x5555,0x8805,0x5555,0x8805,
	0x8888,0x0888,0x8888,0x0088,0x8888,0x0088,0x8888,0x0088,
	0x8888,0x0008,0x8888,0x0008,0x8888,0x0008,0x8888,0x0008,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x4400,0x0000,0x4444,0x4000,0x4444,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4400,
	0x0004,0x4440,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,
	0x0000,0x8800,0x0000,0x8800,0x0000,0x8800,0x0000,0x8000,
	0x4440,0x8044,0x4444,0x0044,0x4444,0x0444,0x4444,0x0444,

	0x0088,0x9111,0x1008,0x9111,0x1108,0x9101,0x1108,0x1000,
	0x1108,0x1101,0x1108,0x1111,0x1008,0x1111,0x1088,0x2111,
	0x1111,0x1191,0x1111,0x1191,0x1111,0x1091,0x1119,0x0009,
	0x9991,0x1011,0x1111,0x1111,0x1122,0x1111,0x1222,0x1111,
	0x1711,0x1171,0x1171,0x1171,0x1171,0x1171,0x1771,0x1177,
	0x7711,0x1117,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,
	0x2221,0x1112,0x2222,0x1122,0x2222,0x0025,0x2522,0x3022,
	0x2221,0x3302,0x2211,0x3300,0x0011,0x3333,0x3001,0x3333,

	0x1011,0x0111,0x1000,0x0111,0x1030,0x0111,0x0033,0x0111,
	0x0333,0x0111,0x0333,0x0110,0x3333,0x0110,0x3333,0x0110,
	0x0033,0x5555,0x5003,0x5555,0x5500,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x8805,0x5555,0x8805,0x5555,0x8805,0x5555,0x8055,
	0x5555,0x8055,0x5555,0x8055,0x5555,0x8055,0x5555,0x0055,
	0x8888,0x0000,0x8888,0x0000,0x8888,0x0000,0x0888,0x0000,
	0x0888,0x0000,0x0808,0x0000,0x0008,0x4000,0x0080,0x4000,

	0x4400,0x4444,0x4440,0x0044,0x4440,0x0004,0x4440,0x0000,
	0x0444,0x0000,0x0444,0x0000,0x0444,0x0000,0x0444,0x0000,
	0x4444,0x0044,0x4400,0x0044,0x4000,0x0044,0x0000,0x0044,
	0x0000,0x0444,0x0000,0x0444,0x0000,0x0000,0x0000,0x0000,
	0x4440,0x4444,0x4000,0x4444,0x0000,0x4444,0x0000,0x4444,
	0x0000,0x4440,0x0000,0x4440,0x0000,0x4440,0x0000,0x4440,
	0x4444,0x0444,0x4444,0x0444,0x4444,0x0444,0x4444,0x0444,
	0x4444,0x0044,0x4444,0x1044,0x4444,0x1044,0x4444,0x1044,

	0x1008,0x2211,0x1100,0x2211,0x1110,0x2211,0x1111,0x2111,
	0x1111,0x1111,0x9911,0x1119,0x1191,0x1191,0x1191,0x0191,
	0x2222,0x1111,0x2252,0x1111,0x2222,0x1111,0x1222,0x1111,
	0x1122,0x0111,0x1111,0x8801,0x1111,0x8881,0x1100,0x0001,
	0x1111,0x1111,0x1111,0x8011,0x0111,0x8800,0x0001,0x0888,
	0x8880,0x0008,0x8888,0x0008,0x0088,0x3300,0x3000,0x3333,
	0x0080,0x3333,0x3088,0x3333,0x3308,0x3333,0x3300,0x3333,
	0x3330,0x3333,0x3333,0x0333,0x3333,0x0003,0x3333,0x5500,

	0x0333,0x0110,0x0333,0x0110,0x0033,0x0010,0x5503,0x0010,
	0x5500,0x0010,0x5550,0x0110,0x5555,0x0110,0x5555,0x0110,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x0000,
	0x5555,0x6660,0x5555,0x6660,0x5555,0x6660,0x5555,0x6660,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x0055,0x5500,0x6005,
	0x5006,0x6605,0x0066,0x6660,0x0666,0x6660,0x0666,0x6660,
	0x5555,0x5555,0x5500,0x5555,0x0000,0x5555,0x0666,0x5555,
	0x0666,0x5555,0x0666,0x5555,0x0666,0x5555,0x0066,0x5555,

	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x0055,0x5555,0x6055,0x5555,0x6055,0x5555,0x6055,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5500,0x5555,
	0x0000,0x5555,0x0666,0x5550,0x6666,0x0550,0x6666,0x0006,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x0000,0x5500,0x6660,0x5506,0x6666,0x5506,
	0x0080,0x4400,0x0080,0x4400,0x0880,0x4400,0x0805,0x0000,
	0x0805,0x5500,0x8805,0x5550,0x8805,0x5550,0x8805,0x5550,

	0x4444,0x0000,0x4444,0x0004,0x4444,0x0004,0x4444,0x0044,
	0x4440,0x4444,0x4400,0x0044,0x4005,0x6000,0x0055,0x6660,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0066,0x6666,0x6666,0x6666,0x6666,
	0x0000,0x4440,0x0000,0x4440,0x0000,0x0000,0x0000,0x6600,
	0x6000,0x6666,0x6660,0x6666,0x6600,0x6666,0x6006,0x6666,
	0x4444,0x0044,0x4444,0x0044,0x0000,0x3304,0x0666,0x3300,
	0x6666,0x3306,0x6666,0x3306,0x6666,0x0006,0x6666,0x0066,

	0x1191,0x0091,0x1190,0x3390,0x9900,0x3339,0x3333,0x3333,
	0x3333,0x3333,0x3333,0x3333,0x0000,0x0000,0x8000,0x0888,
	0x1103,0x3301,0x1003,0x3330,0x1033,0x3330,0x1033,0x3330,
	0x1033,0x0030,0x1033,0x5000,0x0000,0x5555,0x5555,0x5555,
	0x3333,0x3333,0x3333,0x3333,0x3333,0x0003,0x0033,0x5500,
	0x5000,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x0033,0x5555,0x5000,0x5555,0x5550,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,

	0x5555,0x0110,0x5555,0x1110,0x5555,0x0000,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x6666,0x6660,0x6666,0x6660,0x6666,0x6660,0x6666,0x6666,
	0x6660,0x6666,0x6005,0x6666,0x6055,0x0666,0x0555,0x0666,
	0x5066,0x5555,0x5066,0x5555,0x5006,0x5555,0x5506,0x5555,
	0x5506,0x5555,0x5500,0x5555,0x5550,0x5555,0x5555,0x5555,
	0x5555,0x6055,0x5555,0x0055,0x5555,0x0555,0x5555,0x0555,
	0x5555,0x0555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,

	0x6666,0x6006,0x6666,0x6006,0x6666,0x6606,0x6666,0x6606,
	0x6660,0x6606,0x6660,0x6666,0x6660,0x6666,0x6600,0x0666,
	0x6666,0x5506,0x6666,0x5506,0x6666,0x5500,0x6666,0x5550,
	0x0666,0x5555,0x0066,0x5555,0x5006,0x5555,0x5550,0x5555,
	0x8805,0x5550,0x8805,0x0550,0x8805,0x0008,0x8805,0x5008,
	0x8005,0x5008,0x8055,0x0088,0x8055,0x0088,0x0055,0x0888,
	0x6005,0x6666,0x0000,0x6666,0x0555,0x6660,0x5555,0x6660,
	0x0005,0x6600,0x5000,0x0055,0x5505,0x0555,0x5550,0x0555,

	0x6666,0x6666,0x6666,0x6666,0x6666,0x6666,0x6666,0x6666,
	0x6666,0x6666,0x6666,0x6666,0x6666,0x6666,0x6666,0x0666,
	0x6666,0x0000,0x0666,0x5555,0x0666,0x5555,0x0666,0x5555,
	0x6666,0x5550,0x6666,0x5500,0x6666,0x0006,0x0666,0x5550,
	0x8055,0x0888,0x8055,0x0888,0x8055,0x0888,0x8055,0x8888,
	0x8055,0x8888,0x8055,0x8888,0x8050,0x8888,0x8000,0x8858,
	0x5550,0x5555,0x5550,0x5555,0x5550,0x5555,0x5550,0x5555,
	0x5550,0x5555,0x5550,0x5555,0x5550,0x5555,0x5500,0x5555,

	0x0555,0x0060,0x5555,0x5000,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x6005,0x0666,0x6055,0x5066,0x0055,0x5006,0x0555,0x5500,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x0555,0x8888,0x0555,0x8880,0x5555,0x8880,0x5555,0x8800,
	0x5555,0x8005,0x5555,0x8005,0x5555,0x0055,0x5555,0x8055,
	0x5550,0x5555,0x5508,0x0555,0x0008,0x0000,0x0088,0x5555,
	0x0888,0x5550,0x8888,0x5008,0x5588,0x0888,0x5888,0x8885,

	0x6000,0x0066,0x0550,0x5060,0x5550,0x5000,0x5550,0x5005,
	0x5550,0x0005,0x5550,0x0055,0x5550,0x5055,0x0000,0x5000,
	0x6005,0x0000,0x0555,0x5550,0x0555,0x5550,0x0555,0x5550,
	0x5555,0x5500,0x5555,0x5500,0x5555,0x5505,0x5555,0x0505,
	0x0060,0x5555,0x5000,0x5555,0x5005,0x5555,0x0055,0x5555,
	0x0555,0x0555,0x0555,0x8055,0x0555,0x8000,0x0000,0x0088,
	0x8005,0x8858,0x8005,0x8858,0x8805,0x8858,0x8800,0x8858,
	0x0000,0x8855,0x0888,0x8885,0x5888,0x8885,0x5880,0x8885,

	0x5500,0x5555,0x5500,0x5555,0x5508,0x5555,0x5508,0x5555,
	0x5500,0x5555,0x5500,0x5555,0x5500,0x5555,0x5500,0x5555,
	0x5555,0x0055,0x5555,0x0555,0x5555,0x0555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x8888,0x8855,0x8888,0x5555,0x8880,0x5558,0x8880,0x8888,
	0x8880,0x8888,0x8005,0x8888,0x0055,0x8880,0x5555,0x0005,
	0x8888,0x0088,0x8888,0x8888,0x5555,0x8555,0x8888,0x5588,
	0x8888,0x5888,0x8888,0x8888,0x8888,0x8888,0x8880,0x8888,

	0x0000,0x0000,0x8088,0x8888,0x0888,0x8888,0x8888,0x5588,
	0x5555,0x5555,0x5555,0x8885,0x8888,0x8888,0x8888,0x8888,
	0x8888,0x8888,0x8888,0x8888,0x5555,0x5588,0x5555,0x8555,
	0x8555,0x8888,0x8888,0x8888,0x8888,0x8888,0x8888,0x0888,
	0x5588,0x0888,0x8555,0x0888,0x8855,0x0888,0x8888,0x0088,
	0x8888,0x5500,0x0888,0x5550,0x0008,0x5555,0x5500,0x5555,
	0x0000,0x8888,0x5555,0x0000,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,

	0x8888,0x8888,0x0000,0x0000,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x0888,0x0000,0x5000,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x0555,
	0x5555,0x0555,0x5555,0x0555,0x5555,0x0005,0x5555,0x0005,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5500,0x5555,
	0x5500,0x5555,0x5500,0x5555,0x0000,0x5500,0x0000,0x5500,

	0x5555,0x5555,0x5555,0x5555,0x5000,0x5555,0x5000,0x5555,
	0x5505,0x5555,0x5555,0x5555,0x5000,0x0005,0x5000,0x0005,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x0005,0x5550,0x0005,0x0500,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x0005,0x5550,0x0000,0x5000,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x0005,0x5555,0x0000,

	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5500,0x5555,0x0000,0x5555,
	0x5555,0x5555,0x5555,0x0005,0x5555,0x0005,0x5555,0x0005,
	0x5555,0x0005,0x5555,0x0005,0x5000,0x0005,0x0000,0x0005,
	0x5555,0x5555,0x5555,0x5555,0x0055,0x5550,0x0055,0x5550,
	0x0555,0x5555,0x5555,0x5555,0x0055,0x5550,0x0055,0x5550,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x0055,0x5500,0x0005,0x5000,

	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5000,0x5555,0x5000,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5000,0x0005,0x5000,0x0000,
	0x5555,0x5555,0x0555,0x5500,0x0555,0x5500,0x0555,0x5500,
	0x0555,0x5500,0x0555,0x5500,0x0555,0x5500,0x0555,0x5500,
	0x5555,0x5555,0x5000,0x0005,0x5000,0x0005,0x5000,0x0005,
	0x5000,0x0005,0x5000,0x0005,0x5000,0x0005,0x5000,0x0005,

	0x0000,0x5550,0x5500,0x5555,0x5500,0x5555,0x5500,0x5555,
	0x5500,0x5555,0x5500,0x5555,0x5500,0x5555,0x5500,0x5555,
	0x5000,0x0005,0x5000,0x0005,0x5000,0x0005,0x5000,0x0005,
	0x5000,0x0005,0x5000,0x0005,0x5000,0x0005,0x5000,0x0005,
	0x0000,0x0000,0x5550,0x0005,0x5555,0x0005,0x5555,0x0005,
	0x5555,0x0005,0x5555,0x0005,0x5555,0x0005,0x5555,0x0005,
	0x0555,0x0000,0x0555,0x5500,0x0055,0x5550,0x0055,0x0000,
	0x0055,0x0000,0x0055,0x0000,0x0055,0x5550,0x0055,0x5500,

	0x0000,0x5555,0x0055,0x5550,0x0055,0x5550,0x0000,0x5550,
	0x0000,0x5550,0x0000,0x5555,0x5555,0x5555,0x0055,0x5555,
	0x5000,0x5555,0x0000,0x5555,0x0005,0x5555,0x0005,0x5555,
	0x0005,0x5555,0x0005,0x5555,0x0005,0x5555,0x0000,0x5555,
	0x0000,0x0000,0x5555,0x0000,0x5555,0x0005,0x5555,0x0005,
	0x5555,0x0005,0x5555,0x0005,0x5555,0x0005,0x5555,0x0000,
	0x0055,0x5550,0x0055,0x0550,0x0055,0x0550,0x0055,0x0550,
	0x0055,0x0550,0x0055,0x0550,0x0055,0x0550,0x0055,0x0550,

	0x0000,0x0000,0x5000,0x0555,0x5500,0x5555,0x5500,0x5555,
	0x5500,0x5555,0x5500,0x5555,0x5500,0x5555,0x5000,0x0555,
	0x5000,0x5555,0x5000,0x5555,0x5000,0x5555,0x5000,0x5555,
	0x5000,0x5555,0x5000,0x5555,0x5000,0x5555,0x5000,0x5555,
	0x0555,0x5500,0x0555,0x5500,0x0555,0x5500,0x0555,0x5500,
	0x0555,0x5500,0x0555,0x5500,0x0555,0x5500,0x0555,0x5500,
	0x0000,0x0000,0x0000,0x5555,0x5000,0x5555,0x5000,0x5555,
	0x5000,0x5555,0x5000,0x5555,0x5000,0x5555,0x5000,0x5555,

	0x0555,0x5500,0x0555,0x5500,0x0555,0x5500,0x0555,0x5500,
	0x0555,0x5500,0x0555,0x5500,0x5555,0x5555,0x5555,0x5555,
	0x5000,0x0005,0x5000,0x0005,0x5000,0x0005,0x5000,0x0005,
	0x5000,0x0005,0x5000,0x0005,0x5555,0x5555,0x5555,0x5555,
	0x0000,0x5500,0x0000,0x5500,0x0000,0x5550,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5000,0x0005,0x5000,0x0005,0x5000,0x0005,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,

	0x5555,0x0005,0x5555,0x0005,0x5555,0x0005,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x0555,0x0000,0x5555,0x0000,0x5555,0x0005,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x0000,0x5550,0x0000,0x5555,0x5500,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5000,0x5555,0x5500,0x5555,0x5550,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,

	0x0000,0x0000,0x0000,0x0005,0x5000,0x0005,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x0000,0x0000,0x0005,0x0000,0x0055,0x5000,0x5555,0x5555,
	0x5500,0x0555,0x0000,0x0000,0x5555,0x5555,0x5555,0x5555,
	0x5000,0x5555,0x5000,0x5555,0x5000,0x5555,0x5000,0x5555,
	0x5000,0x5555,0x5500,0x5555,0x5555,0x5555,0x5555,0x5555,
};

const unsigned short winMap[1024] __attribute__((aligned(4)))=
{
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4002,0x4003,0x4004,0x4005,0x4006,0x4007,0x4008,
	0x4009,0x400A,0x400B,0x400C,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,

	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x400D,0x400E,0x400F,0x4010,0x4011,0x4012,0x4013,
	0x4014,0x4015,0x4016,0x4017,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4018,0x4019,0x401A,0x401B,0x401C,0x401D,0x401E,
	0x401F,0x4020,0x4021,0x4022,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,

	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4023,0x4024,0x4025,0x4026,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,
	0x4001,0x4001,0x4001,0x4027,0x4028,0x4029,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x402A,0x402B,0x4001,0x4001,
	0x402C,0x402D,0x402E,0x402F,0x4030,0x4031,0x4032,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,

	0x4001,0x4001,0x4001,0x4033,0x4034,0x4035,0x4001,0x4001,
	0x4001,0x4036,0x4037,0x4038,0x4039,0x403A,0x4032,0x403B,
	0x403C,0x403D,0x403E,0x403F,0x4040,0x4041,0x4042,0x4043,
	0x4044,0x4045,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,
	0x4001,0x4001,0x4001,0x4001,0x4046,0x4047,0x4001,0x4001,
	0x4048,0x4049,0x404A,0x404B,0x404C,0x404D,0x404E,0x404F,
	0x4050,0x4051,0x4052,0x4053,0x4054,0x4055,0x4056,0x4057,
	0x4058,0x4059,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,

	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x405A,0x405B,0x405C,0x405D,0x405E,0x405F,0x4060,0x4061,
	0x4062,0x4063,0x4064,0x4065,0x4066,0x4067,0x4068,0x4C32,
	0x4069,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x406A,0x406B,0x406C,0x406D,0x406E,0x406F,0x4070,0x4071,
	0x4072,0x4073,0x4074,0x4075,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,

	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4076,0x4077,0x4078,0x4079,0x407A,0x407B,0x407C,0x407D,
	0x407E,0x407F,0x4080,0x4001,0x4081,0x4082,0x4083,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4084,0x4085,0x4086,
	0x4001,0x4087,0x4088,0x4089,0x408A,0x408B,0x408C,0x408D,
	0x408E,0x408F,0x4090,0x4022,0x4046,0x4091,0x4092,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,

	0x4001,0x4001,0x4001,0x4001,0x4001,0x4093,0x4094,0x4095,
	0x4001,0x4096,0x4097,0x4098,0x4498,0x4099,0x409A,0x409B,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x409C,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x409D,0x4001,
	0x4001,0x409E,0x409F,0x40A0,0x40A1,0x40A2,0x40A3,0x40A4,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,

	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x40A5,0x40A6,0x40A7,0x40A8,0x40A9,0x40AA,0x4C27,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x40AB,0x40AC,0x40AD,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,

	0x4001,0x4001,0x4001,0x4001,0x40AE,0x40AF,0x40B0,0x40B1,
	0x40B2,0x40B3,0x40B4,0x40AE,0x40AF,0x4406,0x4405,0x4005,
	0x40B5,0x40B6,0x40B7,0x40B8,0x44B6,0x40B9,0x4405,0x40BA,
	0x40BB,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,
	0x4001,0x4001,0x4001,0x4001,0x4C9B,0x40BC,0x40BD,0x40BE,
	0x40BE,0x40BF,0x40C0,0x4C9B,0x40BC,0x4411,0x40C1,0x44C1,
	0x40C2,0x40C3,0x40C4,0x40C5,0x40C6,0x40C7,0x40C5,0x40C8,
	0x40C9,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,

	0x4001,0x4001,0x4001,0x4001,0x4827,0x40CA,0x40CB,0x40CC,
	0x40CC,0x40CD,0x40CE,0x4827,0x40CA,0x441C,0x40CF,0x44CF,
	0x40D0,0x401D,0x40D1,0x40D2,0x441D,0x44CC,0x44CC,0x441D,
	0x40CB,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,
	0x4001,0x4001,0x4001,0x4001,0x4001,0x4001,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short winPal[256] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x1EFE,0x0096,0x577F,0x3193,0x7FFF,0x313F,0x0A42,
	0x001B,0x40B6,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(win)
