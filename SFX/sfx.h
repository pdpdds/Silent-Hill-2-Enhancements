#pragma once

void UpdateSFXAddr();

constexpr BYTE sfxPtrvDC[] = {
	0x68, 0x40, 0x09, 0xBE, 0x00 };

constexpr BYTE sfxPtrv10[] = {
	0x68, 0x40, 0xDD, 0xBD, 0x00 };

constexpr BYTE sfxPtrv11[] = {
	0x68, 0x40, 0x19, 0xBE, 0x00 };

constexpr BYTE sfxBlock[] = {
	0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
	0x0C, 0x16, 0x00, 0x00,
	0x10, 0x32, 0x00, 0x00,
	0x5E, 0x4B, 0x00, 0x00,
	0xAC, 0xE8, 0x00, 0x00 };

constexpr DWORD BaseSFXAddr[] = {
	0,
	5644,
	12816,
	19294,
	59564,
	88212,
	113254,
	159910,
	188716,
	240014,
	255336,
	301424,
	339628,
	359914,
	403580,
	432250,
	499554,
	511382,
	526550,
	610886,
	673816,
	800162,
	895738,
	923174,
	928608,
	955742,
	1025382,
	1041250,
	1090990,
	1138778,
	1146748,
	1153124,
	1210532,
	1280962,
	1297196,
	1319084,
	1366518,
	1381032,
	1395382,
	1412254,
	1420264,
	1442902,
	1461736,
	1505770,
	1518128,
	1544414,
	1581928,
	1604240,
	1627022,
	1640748,
	1672684,
	1732304,
	1750460,
	1763152,
	1779584,
	1797974,
	1814776,
	1838988,
	1881400,
	1910474,
	1923374,
	1972510,
	1998622,
	2015756,
	2026096,
	2047082,
	2068860,
	2092678,
	2186124,
	2218682,
	2278422,
	2346834,
	2373526,
	2385498,
	2436262,
	2454322,
	2459380,
	2513302,
	2585882,
	2677730,
	2712712,
	2734190,
	2756466,
	2780062,
	2803732,
	2826796,
	2845160,
	2857338,
	2888382,
	2917608,
	3000404,
	3037086,
	3188720,
	3226180,
	3246130,
	3283726,
	3290642,
	3374506,
	3399592,
	3421588,
	3457044,
	3488136,
	3513222,
	3533796,
	3561974,
	3629388,
	3709626,
	3852478,
	3950626,
	4081840,
	4260152,
	4398980,
	4494862,
	4592968,
	4683646,
	4783090,
	4797938,
	4846552,
	4902704,
	4940226,
	4944124,
	4961074,
	4996626,
	5016852,
	5047682,
	5063692,
	5078434,
	5092022,
	5106422,
	5115764,
	5134378,
	5146734,
	5159820,
	5172714,
	5187480,
	5202844,
	5209246,
	5216924,
	5227822,
	5236872,
	5287990,
	5320672,
	5345306,
	5355112,
	5373430,
	5387920,
	5400580,
	5413886,
	5427532,
	5443012,
	5456916,
	5471598,
	5482334,
	5493058,
	5517018,
	5550008,
	5559262,
	5600164,
	5617196,
	5627308,
	5783938,
	5958174,
	5968416,
	6005068,
	6063256,
	6124380,
	6173164,
	6194334,
	6223036,
	6254830,
	6286148,
	6314034,
	6375308,
	6424282,
	6485374,
	6533868,
	6571820,
	6615742,
	6633132,
	6651002,
	6662434,
	6679816,
	6684554,
	6705368,
	6730898,
	6739780,
	6776582,
	6794844,
	6839924,
	6892504,
	6926258,
	7000590,
	7047770,
	7094632,
	7160892,
	7286938,
	7412990,
	7543920,
	7675008,
	7798930,
	7892506,
	8021974,
	8130730,
	8313154,
	8466944,
	8500724,
	8564366,
	8595164,
	8631448,
	8656362,
	8723036,
	8799184,
	8810882,
	8840948,
	8865070,
	8905134,
	8936192,
	8965494,
	8990120,
	9019642,
	9044588,
	9076030,
	9101008,
	9147526,
	9268826,
	9370772,
	9466472,
	9530372,
	9602502,
	9636312,
	9721542,
	9761980,
	9767282,
	9789098,
	9797032,
	9806388,
	9810052,
	9837172,
	9871282,
	9900256,
	9936810,
	9948308,
	9969266,
	10017358,
	10098232,
	10135934,
	10199308,
	10207248,
	10233550,
	10277780,
	10304060,
	10348226,
	10381066,
	10436338,
	10470572,
	10499138,
	10530480,
	10573540,
	10607180,
	10635064,
	10678668,
	10731680,
	10790570,
	10853022,
	10910562,
	10978498,
	11058992,
	11147298,
	11166690,
	11199584,
	11209608,
	11222438,
	11230156,
	11238612,
	11245880,
	11280522,
	11284614,
	11312906,
	11338898,
	11364722,
	11407626,
	11412606,
	11421580,
	11451656,
	11458694,
	11467320,
	11470234,
	11478690,
	11490592,
	11495962,
	11524294,
	11531214,
	11537186,
	11538572,
	11543962,
	11565760,
	11572290,
	11588816,
	11602562,
	11628664,
	11660074,
	11674364,
	11711566,
	11756260,
	11776438,
	11817044,
	11850948,
	11887214,
	11922508,
	11972276,
	12020220,
	12075152,
	12125054,
	12152416,
	12169458,
	12177648,
	12189890,
	12211276,
	12223474,
	12241632,
	12269742,
	12291744,
	12321906,
	12358416,
	12404398,
	12428736,
	12466974,
	12497056,
	12539578,
	12568396,
	12597086,
	12629832,
	12648260,
	12682204,
	12718728,
	12730726,
	12769336,
	12822424,
	12840026,
	12859948,
	12900488,
	12925434,
	12935112,
	12948794,
	13013026,
	13087422,
	13117560,
	13128184,
	13148090,
	13157168,
	13162200,
	13220694,
	13318338,
	13389170,
	13461880,
	13568804,
	13630104,
	13719570,
	13845354,
	13972242,
	14053006,
	14117748,
	14188574,
	14389364,
	14493768,
	14598172,
	14621212,
	14653002,
	14710178,
	14762912,
	14855390,
	14932698,
	15099474,
	15165772,
	15218844,
	15252034,
	15313436,
	15367818,
	15483620,
	15514524,
	15573906,
	15594056,
	15618568,
	15651082,
	15756786,
	15893066,
	15906164,
	15963174,
	16074260,
	16118796,
	16191290,
	16269236,
	16374724,
	16418354,
	16493088,
	16529496,
	16623828,
	16647062,
	16657736,
	16667860,
	16676610,
	16694082,
	16705642,
	16850834,
	16856034,
	16871000,
	16880218,
	16888796,
	16908400,
	16928058,
	16947262,
	16955312,
	16966984,
	17088108,
	17105044,
	17120190,
	17130304
};

constexpr WORD SFXAddrMapping[] = {
	0,
	0,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	32,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
	58,
	59,
	60,
	61,
	62,
	63,
	64,
	65,
	66,
	67,
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	78,
	79,
	80,
	81,
	82,
	83,
	84,
	85,
	86,
	87,
	88,
	89,
	90,
	91,
	92,
	93,
	94,
	95,
	96,
	97,
	98,
	99,
	100,
	101,
	102,
	103,
	104,
	105,
	106,
	107,
	108,
	109,
	110,
	111,
	112,
	113,
	114,
	115,
	116,
	117,
	118,
	119,
	120,
	121,
	122,
	123,
	124,
	125,
	126,
	127,
	128,
	129,
	130,
	131,
	132,
	133,
	134,
	135,
	136,
	137,
	138,
	139,
	140,
	141,
	142,
	143,
	144,
	145,
	146,
	147,
	148,
	149,
	150,
	151,
	152,
	153,
	154,
	155,
	156,
	157,
	158,
	159,
	160,
	161,
	162,
	163,
	164,
	165,
	166,
	167,
	168,
	169,
	170,
	171,
	172,
	173,
	174,
	175,
	176,
	177,
	178,
	179,
	180,
	181,
	182,
	183,
	184,
	185,
	186,
	187,
	188,
	189,
	190,
	191,
	192,
	193,
	194,
	195,
	196,
	197,
	198,
	199,
	200,
	201,
	202,
	203,
	204,
	205,
	206,
	207,
	208,
	209,
	210,
	211,
	212,
	213,
	214,
	215,
	216,
	217,
	218,
	219,
	220,
	221,
	222,
	223,
	224,
	225,
	226,
	227,
	228,
	229,
	230,
	231,
	232,
	233,
	234,
	235,
	236,
	237,
	238,
	239,
	240,
	241,
	242,
	243,
	244,
	245,
	246,
	247,
	248,
	249,
	250,
	251,
	252,
	253,
	254,
	255,
	256,
	257,
	258,
	259,
	260,
	261,
	262,
	263,
	264,
	265,
	266,
	267,
	268,
	269,
	270,
	271,
	272,
	273,
	274,
	275,
	276,
	277,
	278,
	279,
	280,
	281,
	282,
	283,
	284,
	285,
	286,
	287,
	288,
	289,
	290,
	291,
	292,
	293,
	294,
	295,
	296,
	297,
	298,
	299,
	300,
	301,
	302,
	303,
	304,
	305,
	306,
	307,
	308,
	309,
	310,
	311,
	312,
	313,
	314,
	315,
	316,
	317,
	318,
	319,
	320,
	321,
	322,
	323,
	324,
	325,
	326,
	327,
	328,
	329,
	330,
	331,
	332,
	333,
	334,
	335,
	336,
	337,
	338,
	339,
	340,
	341,
	342,
	343,
	344,
	345,
	346,
	347,
	348,
	349,
	350,
	351,
	352,
	353,
	354,
	355,
	356,
	357,
	358,
	359,
	360,
	361,
	362,
	363,
	364,
	365,
	366,
	367,
	368,
	369,
	370,
	371,
	372,
	373,
	374,
	375,
	376,
	377,
	378,
	379,
	380,
	381,
	382,
	383,
	384,
	385,
	386,
	387,
	388,
	389,
	390,
	391,
	392,
	393,
	394,
	395,
	396,
	397,
	398,
	399,
	400,
	401,
	402,
	403,
	404,
	405,
	406,
	407,
	408,
	409,
	410,
	411,
	412,
	413,
	414,
	415,
	367,
	16,
	16,
	16,
	17,
	17,
	17,
	377,
	368,
	369,
	370,
	371,
	372,
	373,
	374,
	72,
	375,
	376,
	378,
	97,
	104,
	105,
	379,
	380,
	380,
	380,
	380,
	380,
	380,
	380,
	380,
	380,
	380,
	380,
	380,
	380,
	380,
	380,
	380,
	380,
	380,
	381,
	381,
	381,
	382,
	188,
	189,
	192,
	193,
	194,
	383,
	384,
	385,
	385,
	385,
	385,
	385,
	385,
	385,
	385,
	385,
	385,
	385,
	385,
	385,
	385,
	385,
	385,
	385,
	385,
	386,
	386,
	386,
	386,
	386,
	386,
	386,
	386,
	386,
	386,
	386,
	386,
	386,
	386,
	386,
	386,
	386,
	386,
	240,
	240,
	240,
	240,
	240,
	240,
	240,
	240,
	240,
	240,
	242,
	242,
	242,
	242,
	242,
	242,
	242,
	242,
	242,
	242,
	251,
	251,
	251,
	251,
	251,
	251,
	251,
	251,
	251,
	251,
	258,
	258,
	258,
	258,
	258,
	258,
	261,
	261,
	261,
	261,
	261,
	387,
	388,
	388,
	389,
	390,
	298,
	298,
	298,
	298,
	298,
	298,
	298,
	298,
	298,
	298,
	299,
	299,
	299,
	299,
	299,
	299,
	299,
	299,
	299,
	299,
	304,
	304,
	304,
	304,
	304,
	304,
	304,
	304,
	304,
	304,
	305,
	305,
	305,
	305,
	305,
	305,
	305,
	305,
	305,
	305,
	391,
	322,
	322,
	322,
	322,
	322,
	322,
	322,
	322,
	322,
	322,
	322,
	322,
	322,
	322,
	322,
	322,
	322,
	324,
	324,
	324,
	324,
	324,
	324,
	324,
	324,
	324,
	324,
	324,
	324,
	324,
	324,
	324,
	324,
	324,
	326,
	326,
	326,
	326,
	326,
	326,
	326,
	326,
	326,
	326,
	326,
	326,
	326,
	326,
	326,
	326,
	326,
	328,
	328,
	328,
	328,
	328,
	328,
	328,
	328,
	328,
	328,
	328,
	328,
	328,
	328,
	328,
	328,
	328,
	328,
	328,
	392,
	392,
	392,
	392,
	392,
	392,
	392,
	392,
	392,
	392,
	392,
	392,
	392,
	392,
	392,
	392,
	392,
	392,
	392,
	393,
	393,
	393,
	393,
	393,
	393,
	393,
	393,
	393,
	393,
	393,
	393,
	393,
	393,
	393,
	393,
	393,
	416,
	352
};
