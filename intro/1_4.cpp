#include <iostream>
#include <string>
#include <cmath>
#include <bitset>
using namespace std;

bool f4(string s) {
    int state = 0;
    char i = -1;
    while (s[++i] != '\0') {
            switch (state) {
                case 0:
switch(s[i]) {
case '0':
	state = 1;
	break;
case '1':
	state = 2;
	break;
}
break;
case 1:
switch(s[i]) {
case '0':
	state = 3;
	break;
case '1':
	state = 4;
	break;
}
break;
case 2:
switch(s[i]) {
case '0':
	state = 5;
	break;
case '1':
	state = 6;
	break;
}
break;
case 3:
switch(s[i]) {
case '0':
	state = 7;
	break;
case '1':
	state = 8;
	break;
}
break;
case 4:
switch(s[i]) {
case '0':
	state = 9;
	break;
case '1':
	state = 10;
	break;
}
break;
case 5:
switch(s[i]) {
case '0':
	state = 11;
	break;
case '1':
	state = 12;
	break;
}
break;
case 6:
switch(s[i]) {
case '0':
	state = 13;
	break;
case '1':
	state = 14;
	break;
}
break;
case 7:
switch(s[i]) {
case '0':
	state = 15;
	break;
case '1':
	state = 16;
	break;
}
break;
case 8:
switch(s[i]) {
case '0':
	state = 17;
	break;
case '1':
	state = 18;
	break;
}
break;
case 9:
switch(s[i]) {
case '0':
	state = 19;
	break;
case '1':
	state = 20;
	break;
}
break;
case 10:
switch(s[i]) {
case '0':
	state = 21;
	break;
case '1':
	state = 22;
	break;
}
break;
case 11:
switch(s[i]) {
case '0':
	state = 23;
	break;
case '1':
	state = 24;
	break;
}
break;
case 12:
switch(s[i]) {
case '0':
	state = 25;
	break;
case '1':
	state = 26;
	break;
}
break;
case 13:
switch(s[i]) {
case '0':
	state = 27;
	break;
case '1':
	state = 28;
	break;
}
break;
case 14:
switch(s[i]) {
case '0':
	state = 29;
	break;
case '1':
	state = 30;
	break;
}
break;
case 15:
switch(s[i]) {
case '0':
	state = 31;
	break;
case '1':
	state = 32;
	break;
}
break;
case 16:
switch(s[i]) {
case '0':
	state = 33;
	break;
case '1':
	state = 34;
	break;
}
break;
case 17:
switch(s[i]) {
case '0':
	state = 35;
	break;
case '1':
	state = 36;
	break;
}
break;
case 18:
switch(s[i]) {
case '0':
	state = 37;
	break;
case '1':
	state = 38;
	break;
}
break;
case 19:
switch(s[i]) {
case '0':
	state = 39;
	break;
case '1':
	state = 40;
	break;
}
break;
case 20:
switch(s[i]) {
case '0':
	state = 41;
	break;
case '1':
	state = 42;
	break;
}
break;
case 21:
switch(s[i]) {
case '0':
	state = 43;
	break;
case '1':
	state = 44;
	break;
}
break;
case 22:
switch(s[i]) {
case '0':
	state = 45;
	break;
case '1':
	state = 46;
	break;
}
break;
case 23:
switch(s[i]) {
case '0':
	state = 47;
	break;
case '1':
	state = 48;
	break;
}
break;
case 24:
switch(s[i]) {
case '0':
	state = 49;
	break;
case '1':
	state = 50;
	break;
}
break;
case 25:
switch(s[i]) {
case '0':
	state = 51;
	break;
case '1':
	state = 52;
	break;
}
break;
case 26:
switch(s[i]) {
case '0':
	state = 53;
	break;
case '1':
	state = 54;
	break;
}
break;
case 27:
switch(s[i]) {
case '0':
	state = 55;
	break;
case '1':
	state = 56;
	break;
}
break;
case 28:
switch(s[i]) {
case '0':
	state = 57;
	break;
case '1':
	state = 58;
	break;
}
break;
case 29:
switch(s[i]) {
case '0':
	state = 59;
	break;
case '1':
	state = 60;
	break;
}
break;
case 30:
switch(s[i]) {
case '0':
	state = 61;
	break;
case '1':
	state = 62;
	break;
}
break;
case 31:
switch(s[i]) {
case '0':
	state = 63;
	break;
case '1':
	state = 64;
	break;
}
break;
case 32:
switch(s[i]) {
case '0':
	state = 65;
	break;
case '1':
	state = 66;
	break;
}
break;
case 33:
switch(s[i]) {
case '0':
	state = 67;
	break;
case '1':
	state = 68;
	break;
}
break;
case 34:
switch(s[i]) {
case '0':
	state = 69;
	break;
case '1':
	state = 70;
	break;
}
break;
case 35:
switch(s[i]) {
case '0':
	state = 71;
	break;
case '1':
	state = 72;
	break;
}
break;
case 36:
switch(s[i]) {
case '0':
	state = 73;
	break;
case '1':
	state = 74;
	break;
}
break;
case 37:
switch(s[i]) {
case '0':
	state = 75;
	break;
case '1':
	state = 76;
	break;
}
break;
case 38:
switch(s[i]) {
case '0':
	state = 77;
	break;
case '1':
	state = 78;
	break;
}
break;
case 39:
switch(s[i]) {
case '0':
	state = 79;
	break;
case '1':
	state = 80;
	break;
}
break;
case 40:
switch(s[i]) {
case '0':
	state = 81;
	break;
case '1':
	state = 82;
	break;
}
break;
case 41:
switch(s[i]) {
case '0':
	state = 83;
	break;
case '1':
	state = 84;
	break;
}
break;
case 42:
switch(s[i]) {
case '0':
	state = 85;
	break;
case '1':
	state = 86;
	break;
}
break;
case 43:
switch(s[i]) {
case '0':
	state = 87;
	break;
case '1':
	state = 88;
	break;
}
break;
case 44:
switch(s[i]) {
case '0':
	state = 89;
	break;
case '1':
	state = 90;
	break;
}
break;
case 45:
switch(s[i]) {
case '0':
	state = 91;
	break;
case '1':
	state = 92;
	break;
}
break;
case 46:
switch(s[i]) {
case '0':
	state = 93;
	break;
case '1':
	state = 94;
	break;
}
break;
case 47:
switch(s[i]) {
case '0':
	state = 95;
	break;
case '1':
	state = 96;
	break;
}
break;
case 48:
switch(s[i]) {
case '0':
	state = 97;
	break;
case '1':
	state = 98;
	break;
}
break;
case 49:
switch(s[i]) {
case '0':
	state = 99;
	break;
case '1':
	state = 100;
	break;
}
break;
case 50:
switch(s[i]) {
case '0':
	state = 101;
	break;
case '1':
	state = 102;
	break;
}
break;
case 51:
switch(s[i]) {
case '0':
	state = 103;
	break;
case '1':
	state = 104;
	break;
}
break;
case 52:
switch(s[i]) {
case '0':
	state = 105;
	break;
case '1':
	state = 106;
	break;
}
break;
case 53:
switch(s[i]) {
case '0':
	state = 107;
	break;
case '1':
	state = 108;
	break;
}
break;
case 54:
switch(s[i]) {
case '0':
	state = 109;
	break;
case '1':
	state = 110;
	break;
}
break;
case 55:
switch(s[i]) {
case '0':
	state = 111;
	break;
case '1':
	state = 112;
	break;
}
break;
case 56:
switch(s[i]) {
case '0':
	state = 113;
	break;
case '1':
	state = 114;
	break;
}
break;
case 57:
switch(s[i]) {
case '0':
	state = 115;
	break;
case '1':
	state = 116;
	break;
}
break;
case 58:
switch(s[i]) {
case '0':
	state = 117;
	break;
case '1':
	state = 118;
	break;
}
break;
case 59:
switch(s[i]) {
case '0':
	state = 119;
	break;
case '1':
	state = 120;
	break;
}
break;
case 60:
switch(s[i]) {
case '0':
	state = 121;
	break;
case '1':
	state = 122;
	break;
}
break;
case 61:
switch(s[i]) {
case '0':
	state = 123;
	break;
case '1':
	state = 124;
	break;
}
break;
case 62:
switch(s[i]) {
case '0':
	state = 125;
	break;
case '1':
	state = 126;
	break;
}
break;
case 63:
switch(s[i]) {
case '0':
	state = 127;
	break;
case '1':
	state = 128;
	break;
}
break;
case 64:
switch(s[i]) {
case '0':
	state = 129;
	break;
case '1':
	state = 130;
	break;
}
break;
case 65:
switch(s[i]) {
case '0':
	state = 131;
	break;
case '1':
	state = 132;
	break;
}
break;
case 66:
switch(s[i]) {
case '0':
	state = 133;
	break;
case '1':
	state = 134;
	break;
}
break;
case 67:
switch(s[i]) {
case '0':
	state = 135;
	break;
case '1':
	state = 136;
	break;
}
break;
case 68:
switch(s[i]) {
case '0':
	state = 137;
	break;
case '1':
	state = 138;
	break;
}
break;
case 69:
switch(s[i]) {
case '0':
	state = 139;
	break;
case '1':
	state = 140;
	break;
}
break;
case 70:
switch(s[i]) {
case '0':
	state = 141;
	break;
case '1':
	state = 142;
	break;
}
break;
case 71:
switch(s[i]) {
case '0':
	state = 143;
	break;
case '1':
	state = 144;
	break;
}
break;
case 72:
switch(s[i]) {
case '0':
	state = 145;
	break;
case '1':
	state = 146;
	break;
}
break;
case 73:
switch(s[i]) {
case '0':
	state = 147;
	break;
case '1':
	state = 148;
	break;
}
break;
case 74:
switch(s[i]) {
case '0':
	state = 149;
	break;
case '1':
	state = 150;
	break;
}
break;
case 75:
switch(s[i]) {
case '0':
	state = 151;
	break;
case '1':
	state = 152;
	break;
}
break;
case 76:
switch(s[i]) {
case '0':
	state = 153;
	break;
case '1':
	state = 154;
	break;
}
break;
case 77:
switch(s[i]) {
case '0':
	state = 155;
	break;
case '1':
	state = 156;
	break;
}
break;
case 78:
switch(s[i]) {
case '0':
	state = 157;
	break;
case '1':
	state = 158;
	break;
}
break;
case 79:
switch(s[i]) {
case '0':
	state = 159;
	break;
case '1':
	state = 160;
	break;
}
break;
case 80:
switch(s[i]) {
case '0':
	state = 161;
	break;
case '1':
	state = 162;
	break;
}
break;
case 81:
switch(s[i]) {
case '0':
	state = 163;
	break;
case '1':
	state = 164;
	break;
}
break;
case 82:
switch(s[i]) {
case '0':
	state = 165;
	break;
case '1':
	state = 166;
	break;
}
break;
case 83:
switch(s[i]) {
case '0':
	state = 167;
	break;
case '1':
	state = 168;
	break;
}
break;
case 84:
switch(s[i]) {
case '0':
	state = 169;
	break;
case '1':
	state = 170;
	break;
}
break;
case 85:
switch(s[i]) {
case '0':
	state = 171;
	break;
case '1':
	state = 172;
	break;
}
break;
case 86:
switch(s[i]) {
case '0':
	state = 173;
	break;
case '1':
	state = 174;
	break;
}
break;
case 87:
switch(s[i]) {
case '0':
	state = 175;
	break;
case '1':
	state = 176;
	break;
}
break;
case 88:
switch(s[i]) {
case '0':
	state = 177;
	break;
case '1':
	state = 178;
	break;
}
break;
case 89:
switch(s[i]) {
case '0':
	state = 179;
	break;
case '1':
	state = 180;
	break;
}
break;
case 90:
switch(s[i]) {
case '0':
	state = 181;
	break;
case '1':
	state = 182;
	break;
}
break;
case 91:
switch(s[i]) {
case '0':
	state = 183;
	break;
case '1':
	state = 184;
	break;
}
break;
case 92:
switch(s[i]) {
case '0':
	state = 185;
	break;
case '1':
	state = 186;
	break;
}
break;
case 93:
switch(s[i]) {
case '0':
	state = 187;
	break;
case '1':
	state = 188;
	break;
}
break;
case 94:
switch(s[i]) {
case '0':
	state = 189;
	break;
case '1':
	state = 190;
	break;
}
break;
case 95:
switch(s[i]) {
case '0':
	state = 191;
	break;
case '1':
	state = 192;
	break;
}
break;
case 96:
switch(s[i]) {
case '0':
	state = 193;
	break;
case '1':
	state = 194;
	break;
}
break;
case 97:
switch(s[i]) {
case '0':
	state = 195;
	break;
case '1':
	state = 196;
	break;
}
break;
case 98:
switch(s[i]) {
case '0':
	state = 197;
	break;
case '1':
	state = 198;
	break;
}
break;
case 99:
switch(s[i]) {
case '0':
	state = 199;
	break;
case '1':
	state = 200;
	break;
}
break;
case 100:
switch(s[i]) {
case '0':
	state = 201;
	break;
case '1':
	state = 202;
	break;
}
break;
case 101:
switch(s[i]) {
case '0':
	state = 203;
	break;
case '1':
	state = 204;
	break;
}
break;
case 102:
switch(s[i]) {
case '0':
	state = 205;
	break;
case '1':
	state = 206;
	break;
}
break;
case 103:
switch(s[i]) {
case '0':
	state = 207;
	break;
case '1':
	state = 208;
	break;
}
break;
case 104:
switch(s[i]) {
case '0':
	state = 209;
	break;
case '1':
	state = 210;
	break;
}
break;
case 105:
switch(s[i]) {
case '0':
	state = 211;
	break;
case '1':
	state = 212;
	break;
}
break;
case 106:
switch(s[i]) {
case '0':
	state = 213;
	break;
case '1':
	state = 214;
	break;
}
break;
case 107:
switch(s[i]) {
case '0':
	state = 215;
	break;
case '1':
	state = 216;
	break;
}
break;
case 108:
switch(s[i]) {
case '0':
	state = 217;
	break;
case '1':
	state = 218;
	break;
}
break;
case 109:
switch(s[i]) {
case '0':
	state = 219;
	break;
case '1':
	state = 220;
	break;
}
break;
case 110:
switch(s[i]) {
case '0':
	state = 221;
	break;
case '1':
	state = 222;
	break;
}
break;
case 111:
switch(s[i]) {
case '0':
	state = 223;
	break;
case '1':
	state = 224;
	break;
}
break;
case 112:
switch(s[i]) {
case '0':
	state = 225;
	break;
case '1':
	state = 226;
	break;
}
break;
case 113:
switch(s[i]) {
case '0':
	state = 227;
	break;
case '1':
	state = 228;
	break;
}
break;
case 114:
switch(s[i]) {
case '0':
	state = 229;
	break;
case '1':
	state = 230;
	break;
}
break;
case 115:
switch(s[i]) {
case '0':
	state = 231;
	break;
case '1':
	state = 232;
	break;
}
break;
case 116:
switch(s[i]) {
case '0':
	state = 233;
	break;
case '1':
	state = 234;
	break;
}
break;
case 117:
switch(s[i]) {
case '0':
	state = 235;
	break;
case '1':
	state = 236;
	break;
}
break;
case 118:
switch(s[i]) {
case '0':
	state = 237;
	break;
case '1':
	state = 238;
	break;
}
break;
case 119:
switch(s[i]) {
case '0':
	state = 239;
	break;
case '1':
	state = 240;
	break;
}
break;
case 120:
switch(s[i]) {
case '0':
	state = 241;
	break;
case '1':
	state = 242;
	break;
}
break;
case 121:
switch(s[i]) {
case '0':
	state = 243;
	break;
case '1':
	state = 244;
	break;
}
break;
case 122:
switch(s[i]) {
case '0':
	state = 245;
	break;
case '1':
	state = 246;
	break;
}
break;
case 123:
switch(s[i]) {
case '0':
	state = 247;
	break;
case '1':
	state = 248;
	break;
}
break;
case 124:
switch(s[i]) {
case '0':
	state = 249;
	break;
case '1':
	state = 250;
	break;
}
break;
case 125:
switch(s[i]) {
case '0':
	state = 251;
	break;
case '1':
	state = 252;
	break;
}
break;
case 126:
switch(s[i]) {
case '0':
	state = 253;
	break;
case '1':
	state = 254;
	break;
}
break;
case 127:
switch(s[i]) {
case '0':
	state = 255;
	break;
case '1':
	state = 256;
	break;
}
break;
case 128:
switch(s[i]) {
case '0':
	state = 257;
	break;
case '1':
	state = 258;
	break;
}
break;
case 129:
switch(s[i]) {
case '0':
	state = 259;
	break;
case '1':
	state = 260;
	break;
}
break;
case 130:
switch(s[i]) {
case '0':
	state = 261;
	break;
case '1':
	state = 262;
	break;
}
break;
case 131:
switch(s[i]) {
case '0':
	state = 263;
	break;
case '1':
	state = 264;
	break;
}
break;
case 132:
switch(s[i]) {
case '0':
	state = 265;
	break;
case '1':
	state = 266;
	break;
}
break;
case 133:
switch(s[i]) {
case '0':
	state = 267;
	break;
case '1':
	state = 268;
	break;
}
break;
case 134:
switch(s[i]) {
case '0':
	state = 269;
	break;
case '1':
	state = 270;
	break;
}
break;
case 135:
switch(s[i]) {
case '0':
	state = 271;
	break;
case '1':
	state = 272;
	break;
}
break;
case 136:
switch(s[i]) {
case '0':
	state = 273;
	break;
case '1':
	state = 274;
	break;
}
break;
case 137:
switch(s[i]) {
case '0':
	state = 275;
	break;
case '1':
	state = 276;
	break;
}
break;
case 138:
switch(s[i]) {
case '0':
	state = 277;
	break;
case '1':
	state = 278;
	break;
}
break;
case 139:
switch(s[i]) {
case '0':
	state = 279;
	break;
case '1':
	state = 280;
	break;
}
break;
case 140:
switch(s[i]) {
case '0':
	state = 281;
	break;
case '1':
	state = 282;
	break;
}
break;
case 141:
switch(s[i]) {
case '0':
	state = 283;
	break;
case '1':
	state = 284;
	break;
}
break;
case 142:
switch(s[i]) {
case '0':
	state = 285;
	break;
case '1':
	state = 286;
	break;
}
break;
case 143:
switch(s[i]) {
case '0':
	state = 287;
	break;
case '1':
	state = 288;
	break;
}
break;
case 144:
switch(s[i]) {
case '0':
	state = 289;
	break;
case '1':
	state = 290;
	break;
}
break;
case 145:
switch(s[i]) {
case '0':
	state = 291;
	break;
case '1':
	state = 292;
	break;
}
break;
case 146:
switch(s[i]) {
case '0':
	state = 293;
	break;
case '1':
	state = 294;
	break;
}
break;
case 147:
switch(s[i]) {
case '0':
	state = 295;
	break;
case '1':
	state = 296;
	break;
}
break;
case 148:
switch(s[i]) {
case '0':
	state = 297;
	break;
case '1':
	state = 298;
	break;
}
break;
case 149:
switch(s[i]) {
case '0':
	state = 299;
	break;
case '1':
	state = 300;
	break;
}
break;
case 150:
switch(s[i]) {
case '0':
	state = 301;
	break;
case '1':
	state = 302;
	break;
}
break;
case 151:
switch(s[i]) {
case '0':
	state = 303;
	break;
case '1':
	state = 304;
	break;
}
break;
case 152:
switch(s[i]) {
case '0':
	state = 305;
	break;
case '1':
	state = 306;
	break;
}
break;
case 153:
switch(s[i]) {
case '0':
	state = 307;
	break;
case '1':
	state = 308;
	break;
}
break;
case 154:
switch(s[i]) {
case '0':
	state = 309;
	break;
case '1':
	state = 310;
	break;
}
break;
case 155:
switch(s[i]) {
case '0':
	state = 311;
	break;
case '1':
	state = 312;
	break;
}
break;
case 156:
switch(s[i]) {
case '0':
	state = 313;
	break;
case '1':
	state = 314;
	break;
}
break;
case 157:
switch(s[i]) {
case '0':
	state = 315;
	break;
case '1':
	state = 316;
	break;
}
break;
case 158:
switch(s[i]) {
case '0':
	state = 317;
	break;
case '1':
	state = 318;
	break;
}
break;
case 159:
switch(s[i]) {
case '0':
	state = 319;
	break;
case '1':
	state = 320;
	break;
}
break;
case 160:
switch(s[i]) {
case '0':
	state = 321;
	break;
case '1':
	state = 322;
	break;
}
break;
case 161:
switch(s[i]) {
case '0':
	state = 323;
	break;
case '1':
	state = 324;
	break;
}
break;
case 162:
switch(s[i]) {
case '0':
	state = 325;
	break;
case '1':
	state = 326;
	break;
}
break;
case 163:
switch(s[i]) {
case '0':
	state = 327;
	break;
case '1':
	state = 328;
	break;
}
break;
case 164:
switch(s[i]) {
case '0':
	state = 329;
	break;
case '1':
	state = 330;
	break;
}
break;
case 165:
switch(s[i]) {
case '0':
	state = 331;
	break;
case '1':
	state = 332;
	break;
}
break;
case 166:
switch(s[i]) {
case '0':
	state = 333;
	break;
case '1':
	state = 334;
	break;
}
break;
case 167:
switch(s[i]) {
case '0':
	state = 335;
	break;
case '1':
	state = 336;
	break;
}
break;
case 168:
switch(s[i]) {
case '0':
	state = 337;
	break;
case '1':
	state = 338;
	break;
}
break;
case 169:
switch(s[i]) {
case '0':
	state = 339;
	break;
case '1':
	state = 340;
	break;
}
break;
case 170:
switch(s[i]) {
case '0':
	state = 341;
	break;
case '1':
	state = 342;
	break;
}
break;
case 171:
switch(s[i]) {
case '0':
	state = 343;
	break;
case '1':
	state = 344;
	break;
}
break;
case 172:
switch(s[i]) {
case '0':
	state = 345;
	break;
case '1':
	state = 346;
	break;
}
break;
case 173:
switch(s[i]) {
case '0':
	state = 347;
	break;
case '1':
	state = 348;
	break;
}
break;
case 174:
switch(s[i]) {
case '0':
	state = 349;
	break;
case '1':
	state = 350;
	break;
}
break;
case 175:
switch(s[i]) {
case '0':
	state = 351;
	break;
case '1':
	state = 352;
	break;
}
break;
case 176:
switch(s[i]) {
case '0':
	state = 353;
	break;
case '1':
	state = 354;
	break;
}
break;
case 177:
switch(s[i]) {
case '0':
	state = 355;
	break;
case '1':
	state = 356;
	break;
}
break;
case 178:
switch(s[i]) {
case '0':
	state = 357;
	break;
case '1':
	state = 358;
	break;
}
break;
case 179:
switch(s[i]) {
case '0':
	state = 359;
	break;
case '1':
	state = 360;
	break;
}
break;
case 180:
switch(s[i]) {
case '0':
	state = 361;
	break;
case '1':
	state = 362;
	break;
}
break;
case 181:
switch(s[i]) {
case '0':
	state = 363;
	break;
case '1':
	state = 364;
	break;
}
break;
case 182:
switch(s[i]) {
case '0':
	state = 365;
	break;
case '1':
	state = 366;
	break;
}
break;
case 183:
switch(s[i]) {
case '0':
	state = 367;
	break;
case '1':
	state = 368;
	break;
}
break;
case 184:
switch(s[i]) {
case '0':
	state = 369;
	break;
case '1':
	state = 370;
	break;
}
break;
case 185:
switch(s[i]) {
case '0':
	state = 371;
	break;
case '1':
	state = 372;
	break;
}
break;
case 186:
switch(s[i]) {
case '0':
	state = 373;
	break;
case '1':
	state = 374;
	break;
}
break;
case 187:
switch(s[i]) {
case '0':
	state = 375;
	break;
case '1':
	state = 376;
	break;
}
break;
case 188:
switch(s[i]) {
case '0':
	state = 377;
	break;
case '1':
	state = 378;
	break;
}
break;
case 189:
switch(s[i]) {
case '0':
	state = 379;
	break;
case '1':
	state = 380;
	break;
}
break;
case 190:
switch(s[i]) {
case '0':
	state = 381;
	break;
case '1':
	state = 382;
	break;
}
break;
case 191:
switch(s[i]) {
case '0':
	state = 383;
	break;
case '1':
	state = 384;
	break;
}
break;
case 192:
switch(s[i]) {
case '0':
	state = 385;
	break;
case '1':
	state = 386;
	break;
}
break;
case 193:
switch(s[i]) {
case '0':
	state = 387;
	break;
case '1':
	state = 388;
	break;
}
break;
case 194:
switch(s[i]) {
case '0':
	state = 389;
	break;
case '1':
	state = 390;
	break;
}
break;
case 195:
switch(s[i]) {
case '0':
	state = 391;
	break;
case '1':
	state = 392;
	break;
}
break;
case 196:
switch(s[i]) {
case '0':
	state = 393;
	break;
case '1':
	state = 394;
	break;
}
break;
case 197:
switch(s[i]) {
case '0':
	state = 395;
	break;
case '1':
	state = 396;
	break;
}
break;
case 198:
switch(s[i]) {
case '0':
	state = 397;
	break;
case '1':
	state = 398;
	break;
}
break;
case 199:
switch(s[i]) {
case '0':
	state = 399;
	break;
case '1':
	state = 400;
	break;
}
break;
case 200:
switch(s[i]) {
case '0':
	state = 401;
	break;
case '1':
	state = 402;
	break;
}
break;
case 201:
switch(s[i]) {
case '0':
	state = 403;
	break;
case '1':
	state = 404;
	break;
}
break;
case 202:
switch(s[i]) {
case '0':
	state = 405;
	break;
case '1':
	state = 406;
	break;
}
break;
case 203:
switch(s[i]) {
case '0':
	state = 407;
	break;
case '1':
	state = 408;
	break;
}
break;
case 204:
switch(s[i]) {
case '0':
	state = 409;
	break;
case '1':
	state = 410;
	break;
}
break;
case 205:
switch(s[i]) {
case '0':
	state = 411;
	break;
case '1':
	state = 412;
	break;
}
break;
case 206:
switch(s[i]) {
case '0':
	state = 413;
	break;
case '1':
	state = 414;
	break;
}
break;
case 207:
switch(s[i]) {
case '0':
	state = 415;
	break;
case '1':
	state = 416;
	break;
}
break;
case 208:
switch(s[i]) {
case '0':
	state = 417;
	break;
case '1':
	state = 418;
	break;
}
break;
case 209:
switch(s[i]) {
case '0':
	state = 419;
	break;
case '1':
	state = 420;
	break;
}
break;
case 210:
switch(s[i]) {
case '0':
	state = 421;
	break;
case '1':
	state = 422;
	break;
}
break;
case 211:
switch(s[i]) {
case '0':
	state = 423;
	break;
case '1':
	state = 424;
	break;
}
break;
case 212:
switch(s[i]) {
case '0':
	state = 425;
	break;
case '1':
	state = 426;
	break;
}
break;
case 213:
switch(s[i]) {
case '0':
	state = 427;
	break;
case '1':
	state = 428;
	break;
}
break;
case 214:
switch(s[i]) {
case '0':
	state = 429;
	break;
case '1':
	state = 430;
	break;
}
break;
case 215:
switch(s[i]) {
case '0':
	state = 431;
	break;
case '1':
	state = 432;
	break;
}
break;
case 216:
switch(s[i]) {
case '0':
	state = 433;
	break;
case '1':
	state = 434;
	break;
}
break;
case 217:
switch(s[i]) {
case '0':
	state = 435;
	break;
case '1':
	state = 436;
	break;
}
break;
case 218:
switch(s[i]) {
case '0':
	state = 437;
	break;
case '1':
	state = 438;
	break;
}
break;
case 219:
switch(s[i]) {
case '0':
	state = 439;
	break;
case '1':
	state = 440;
	break;
}
break;
case 220:
switch(s[i]) {
case '0':
	state = 441;
	break;
case '1':
	state = 442;
	break;
}
break;
case 221:
switch(s[i]) {
case '0':
	state = 443;
	break;
case '1':
	state = 444;
	break;
}
break;
case 222:
switch(s[i]) {
case '0':
	state = 445;
	break;
case '1':
	state = 446;
	break;
}
break;
case 223:
switch(s[i]) {
case '0':
	state = 447;
	break;
case '1':
	state = 448;
	break;
}
break;
case 224:
switch(s[i]) {
case '0':
	state = 449;
	break;
case '1':
	state = 450;
	break;
}
break;
case 225:
switch(s[i]) {
case '0':
	state = 451;
	break;
case '1':
	state = 452;
	break;
}
break;
case 226:
switch(s[i]) {
case '0':
	state = 453;
	break;
case '1':
	state = 454;
	break;
}
break;
case 227:
switch(s[i]) {
case '0':
	state = 455;
	break;
case '1':
	state = 456;
	break;
}
break;
case 228:
switch(s[i]) {
case '0':
	state = 457;
	break;
case '1':
	state = 458;
	break;
}
break;
case 229:
switch(s[i]) {
case '0':
	state = 459;
	break;
case '1':
	state = 460;
	break;
}
break;
case 230:
switch(s[i]) {
case '0':
	state = 461;
	break;
case '1':
	state = 462;
	break;
}
break;
case 231:
switch(s[i]) {
case '0':
	state = 463;
	break;
case '1':
	state = 464;
	break;
}
break;
case 232:
switch(s[i]) {
case '0':
	state = 465;
	break;
case '1':
	state = 466;
	break;
}
break;
case 233:
switch(s[i]) {
case '0':
	state = 467;
	break;
case '1':
	state = 468;
	break;
}
break;
case 234:
switch(s[i]) {
case '0':
	state = 469;
	break;
case '1':
	state = 470;
	break;
}
break;
case 235:
switch(s[i]) {
case '0':
	state = 471;
	break;
case '1':
	state = 472;
	break;
}
break;
case 236:
switch(s[i]) {
case '0':
	state = 473;
	break;
case '1':
	state = 474;
	break;
}
break;
case 237:
switch(s[i]) {
case '0':
	state = 475;
	break;
case '1':
	state = 476;
	break;
}
break;
case 238:
switch(s[i]) {
case '0':
	state = 477;
	break;
case '1':
	state = 478;
	break;
}
break;
case 239:
switch(s[i]) {
case '0':
	state = 479;
	break;
case '1':
	state = 480;
	break;
}
break;
case 240:
switch(s[i]) {
case '0':
	state = 481;
	break;
case '1':
	state = 482;
	break;
}
break;
case 241:
switch(s[i]) {
case '0':
	state = 483;
	break;
case '1':
	state = 484;
	break;
}
break;
case 242:
switch(s[i]) {
case '0':
	state = 485;
	break;
case '1':
	state = 486;
	break;
}
break;
case 243:
switch(s[i]) {
case '0':
	state = 487;
	break;
case '1':
	state = 488;
	break;
}
break;
case 244:
switch(s[i]) {
case '0':
	state = 489;
	break;
case '1':
	state = 490;
	break;
}
break;
case 245:
switch(s[i]) {
case '0':
	state = 491;
	break;
case '1':
	state = 492;
	break;
}
break;
case 246:
switch(s[i]) {
case '0':
	state = 493;
	break;
case '1':
	state = 494;
	break;
}
break;
case 247:
switch(s[i]) {
case '0':
	state = 495;
	break;
case '1':
	state = 496;
	break;
}
break;
case 248:
switch(s[i]) {
case '0':
	state = 497;
	break;
case '1':
	state = 498;
	break;
}
break;
case 249:
switch(s[i]) {
case '0':
	state = 499;
	break;
case '1':
	state = 500;
	break;
}
break;
case 250:
switch(s[i]) {
case '0':
	state = 501;
	break;
case '1':
	state = 502;
	break;
}
break;
case 251:
switch(s[i]) {
case '0':
	state = 503;
	break;
case '1':
	state = 504;
	break;
}
break;
case 252:
switch(s[i]) {
case '0':
	state = 505;
	break;
case '1':
	state = 506;
	break;
}
break;
case 253:
switch(s[i]) {
case '0':
	state = 507;
	break;
case '1':
	state = 508;
	break;
}
break;
case 254:
switch(s[i]) {
case '0':
	state = 509;
	break;
case '1':
	state = 510;
	break;
}
break;
case 255:
switch(s[i]) {
case '0':
	state = 511;
	break;
case '1':
	state = 512;
	break;
}
break;
case 256:
switch(s[i]) {
case '0':
	state = 513;
	break;
case '1':
	state = 514;
	break;
}
break;
case 257:
switch(s[i]) {
case '0':
	state = 515;
	break;
case '1':
	state = 516;
	break;
}
break;
case 258:
switch(s[i]) {
case '0':
	state = 517;
	break;
case '1':
	state = 518;
	break;
}
break;
case 259:
switch(s[i]) {
case '0':
	state = 519;
	break;
case '1':
	state = 520;
	break;
}
break;
case 260:
switch(s[i]) {
case '0':
	state = 521;
	break;
case '1':
	state = 522;
	break;
}
break;
case 261:
switch(s[i]) {
case '0':
	state = 523;
	break;
case '1':
	state = 524;
	break;
}
break;
case 262:
switch(s[i]) {
case '0':
	state = 525;
	break;
case '1':
	state = 526;
	break;
}
break;
case 263:
switch(s[i]) {
case '0':
	state = 527;
	break;
case '1':
	state = 528;
	break;
}
break;
case 264:
switch(s[i]) {
case '0':
	state = 529;
	break;
case '1':
	state = 530;
	break;
}
break;
case 265:
switch(s[i]) {
case '0':
	state = 531;
	break;
case '1':
	state = 532;
	break;
}
break;
case 266:
switch(s[i]) {
case '0':
	state = 533;
	break;
case '1':
	state = 534;
	break;
}
break;
case 267:
switch(s[i]) {
case '0':
	state = 535;
	break;
case '1':
	state = 536;
	break;
}
break;
case 268:
switch(s[i]) {
case '0':
	state = 537;
	break;
case '1':
	state = 538;
	break;
}
break;
case 269:
switch(s[i]) {
case '0':
	state = 539;
	break;
case '1':
	state = 540;
	break;
}
break;
case 270:
switch(s[i]) {
case '0':
	state = 541;
	break;
case '1':
	state = 542;
	break;
}
break;
case 271:
switch(s[i]) {
case '0':
	state = 543;
	break;
case '1':
	state = 544;
	break;
}
break;
case 272:
switch(s[i]) {
case '0':
	state = 545;
	break;
case '1':
	state = 546;
	break;
}
break;
case 273:
switch(s[i]) {
case '0':
	state = 547;
	break;
case '1':
	state = 548;
	break;
}
break;
case 274:
switch(s[i]) {
case '0':
	state = 549;
	break;
case '1':
	state = 550;
	break;
}
break;
case 275:
switch(s[i]) {
case '0':
	state = 551;
	break;
case '1':
	state = 552;
	break;
}
break;
case 276:
switch(s[i]) {
case '0':
	state = 553;
	break;
case '1':
	state = 554;
	break;
}
break;
case 277:
switch(s[i]) {
case '0':
	state = 555;
	break;
case '1':
	state = 556;
	break;
}
break;
case 278:
switch(s[i]) {
case '0':
	state = 557;
	break;
case '1':
	state = 558;
	break;
}
break;
case 279:
switch(s[i]) {
case '0':
	state = 559;
	break;
case '1':
	state = 560;
	break;
}
break;
case 280:
switch(s[i]) {
case '0':
	state = 561;
	break;
case '1':
	state = 562;
	break;
}
break;
case 281:
switch(s[i]) {
case '0':
	state = 563;
	break;
case '1':
	state = 564;
	break;
}
break;
case 282:
switch(s[i]) {
case '0':
	state = 565;
	break;
case '1':
	state = 566;
	break;
}
break;
case 283:
switch(s[i]) {
case '0':
	state = 567;
	break;
case '1':
	state = 568;
	break;
}
break;
case 284:
switch(s[i]) {
case '0':
	state = 569;
	break;
case '1':
	state = 570;
	break;
}
break;
case 285:
switch(s[i]) {
case '0':
	state = 571;
	break;
case '1':
	state = 572;
	break;
}
break;
case 286:
switch(s[i]) {
case '0':
	state = 573;
	break;
case '1':
	state = 574;
	break;
}
break;
case 287:
switch(s[i]) {
case '0':
	state = 575;
	break;
case '1':
	state = 576;
	break;
}
break;
case 288:
switch(s[i]) {
case '0':
	state = 577;
	break;
case '1':
	state = 578;
	break;
}
break;
case 289:
switch(s[i]) {
case '0':
	state = 579;
	break;
case '1':
	state = 580;
	break;
}
break;
case 290:
switch(s[i]) {
case '0':
	state = 581;
	break;
case '1':
	state = 582;
	break;
}
break;
case 291:
switch(s[i]) {
case '0':
	state = 583;
	break;
case '1':
	state = 584;
	break;
}
break;
case 292:
switch(s[i]) {
case '0':
	state = 585;
	break;
case '1':
	state = 586;
	break;
}
break;
case 293:
switch(s[i]) {
case '0':
	state = 587;
	break;
case '1':
	state = 588;
	break;
}
break;
case 294:
switch(s[i]) {
case '0':
	state = 589;
	break;
case '1':
	state = 590;
	break;
}
break;
case 295:
switch(s[i]) {
case '0':
	state = 591;
	break;
case '1':
	state = 592;
	break;
}
break;
case 296:
switch(s[i]) {
case '0':
	state = 593;
	break;
case '1':
	state = 594;
	break;
}
break;
case 297:
switch(s[i]) {
case '0':
	state = 595;
	break;
case '1':
	state = 596;
	break;
}
break;
case 298:
switch(s[i]) {
case '0':
	state = 597;
	break;
case '1':
	state = 598;
	break;
}
break;
case 299:
switch(s[i]) {
case '0':
	state = 599;
	break;
case '1':
	state = 600;
	break;
}
break;
case 300:
switch(s[i]) {
case '0':
	state = 601;
	break;
case '1':
	state = 602;
	break;
}
break;
case 301:
switch(s[i]) {
case '0':
	state = 603;
	break;
case '1':
	state = 604;
	break;
}
break;
case 302:
switch(s[i]) {
case '0':
	state = 605;
	break;
case '1':
	state = 606;
	break;
}
break;
case 303:
switch(s[i]) {
case '0':
	state = 607;
	break;
case '1':
	state = 608;
	break;
}
break;
case 304:
switch(s[i]) {
case '0':
	state = 609;
	break;
case '1':
	state = 610;
	break;
}
break;
case 305:
switch(s[i]) {
case '0':
	state = 611;
	break;
case '1':
	state = 612;
	break;
}
break;
case 306:
switch(s[i]) {
case '0':
	state = 613;
	break;
case '1':
	state = 614;
	break;
}
break;
case 307:
switch(s[i]) {
case '0':
	state = 615;
	break;
case '1':
	state = 616;
	break;
}
break;
case 308:
switch(s[i]) {
case '0':
	state = 617;
	break;
case '1':
	state = 618;
	break;
}
break;
case 309:
switch(s[i]) {
case '0':
	state = 619;
	break;
case '1':
	state = 620;
	break;
}
break;
case 310:
switch(s[i]) {
case '0':
	state = 621;
	break;
case '1':
	state = 622;
	break;
}
break;
case 311:
switch(s[i]) {
case '0':
	state = 623;
	break;
case '1':
	state = 624;
	break;
}
break;
case 312:
switch(s[i]) {
case '0':
	state = 625;
	break;
case '1':
	state = 626;
	break;
}
break;
case 313:
switch(s[i]) {
case '0':
	state = 627;
	break;
case '1':
	state = 628;
	break;
}
break;
case 314:
switch(s[i]) {
case '0':
	state = 629;
	break;
case '1':
	state = 630;
	break;
}
break;
case 315:
switch(s[i]) {
case '0':
	state = 631;
	break;
case '1':
	state = 632;
	break;
}
break;
case 316:
switch(s[i]) {
case '0':
	state = 633;
	break;
case '1':
	state = 634;
	break;
}
break;
case 317:
switch(s[i]) {
case '0':
	state = 635;
	break;
case '1':
	state = 636;
	break;
}
break;
case 318:
switch(s[i]) {
case '0':
	state = 637;
	break;
case '1':
	state = 638;
	break;
}
break;
case 319:
switch(s[i]) {
case '0':
	state = 639;
	break;
case '1':
	state = 640;
	break;
}
break;
case 320:
switch(s[i]) {
case '0':
	state = 641;
	break;
case '1':
	state = 642;
	break;
}
break;
case 321:
switch(s[i]) {
case '0':
	state = 643;
	break;
case '1':
	state = 644;
	break;
}
break;
case 322:
switch(s[i]) {
case '0':
	state = 645;
	break;
case '1':
	state = 646;
	break;
}
break;
case 323:
switch(s[i]) {
case '0':
	state = 647;
	break;
case '1':
	state = 648;
	break;
}
break;
case 324:
switch(s[i]) {
case '0':
	state = 649;
	break;
case '1':
	state = 650;
	break;
}
break;
case 325:
switch(s[i]) {
case '0':
	state = 651;
	break;
case '1':
	state = 652;
	break;
}
break;
case 326:
switch(s[i]) {
case '0':
	state = 653;
	break;
case '1':
	state = 654;
	break;
}
break;
case 327:
switch(s[i]) {
case '0':
	state = 655;
	break;
case '1':
	state = 656;
	break;
}
break;
case 328:
switch(s[i]) {
case '0':
	state = 657;
	break;
case '1':
	state = 658;
	break;
}
break;
case 329:
switch(s[i]) {
case '0':
	state = 659;
	break;
case '1':
	state = 660;
	break;
}
break;
case 330:
switch(s[i]) {
case '0':
	state = 661;
	break;
case '1':
	state = 662;
	break;
}
break;
case 331:
switch(s[i]) {
case '0':
	state = 663;
	break;
case '1':
	state = 664;
	break;
}
break;
case 332:
switch(s[i]) {
case '0':
	state = 665;
	break;
case '1':
	state = 666;
	break;
}
break;
case 333:
switch(s[i]) {
case '0':
	state = 667;
	break;
case '1':
	state = 668;
	break;
}
break;
case 334:
switch(s[i]) {
case '0':
	state = 669;
	break;
case '1':
	state = 670;
	break;
}
break;
case 335:
switch(s[i]) {
case '0':
	state = 671;
	break;
case '1':
	state = 672;
	break;
}
break;
case 336:
switch(s[i]) {
case '0':
	state = 673;
	break;
case '1':
	state = 674;
	break;
}
break;
case 337:
switch(s[i]) {
case '0':
	state = 675;
	break;
case '1':
	state = 676;
	break;
}
break;
case 338:
switch(s[i]) {
case '0':
	state = 677;
	break;
case '1':
	state = 678;
	break;
}
break;
case 339:
switch(s[i]) {
case '0':
	state = 679;
	break;
case '1':
	state = 680;
	break;
}
break;
case 340:
switch(s[i]) {
case '0':
	state = 681;
	break;
case '1':
	state = 682;
	break;
}
break;
case 341:
switch(s[i]) {
case '0':
	state = 683;
	break;
case '1':
	state = 684;
	break;
}
break;
case 342:
switch(s[i]) {
case '0':
	state = 685;
	break;
case '1':
	state = 686;
	break;
}
break;
case 343:
switch(s[i]) {
case '0':
	state = 687;
	break;
case '1':
	state = 688;
	break;
}
break;
case 344:
switch(s[i]) {
case '0':
	state = 689;
	break;
case '1':
	state = 690;
	break;
}
break;
case 345:
switch(s[i]) {
case '0':
	state = 691;
	break;
case '1':
	state = 692;
	break;
}
break;
case 346:
switch(s[i]) {
case '0':
	state = 693;
	break;
case '1':
	state = 694;
	break;
}
break;
case 347:
switch(s[i]) {
case '0':
	state = 695;
	break;
case '1':
	state = 696;
	break;
}
break;
case 348:
switch(s[i]) {
case '0':
	state = 697;
	break;
case '1':
	state = 698;
	break;
}
break;
case 349:
switch(s[i]) {
case '0':
	state = 699;
	break;
case '1':
	state = 700;
	break;
}
break;
case 350:
switch(s[i]) {
case '0':
	state = 701;
	break;
case '1':
	state = 702;
	break;
}
break;
case 351:
switch(s[i]) {
case '0':
	state = 703;
	break;
case '1':
	state = 704;
	break;
}
break;
case 352:
switch(s[i]) {
case '0':
	state = 705;
	break;
case '1':
	state = 706;
	break;
}
break;
case 353:
switch(s[i]) {
case '0':
	state = 707;
	break;
case '1':
	state = 708;
	break;
}
break;
case 354:
switch(s[i]) {
case '0':
	state = 709;
	break;
case '1':
	state = 710;
	break;
}
break;
case 355:
switch(s[i]) {
case '0':
	state = 711;
	break;
case '1':
	state = 712;
	break;
}
break;
case 356:
switch(s[i]) {
case '0':
	state = 713;
	break;
case '1':
	state = 714;
	break;
}
break;
case 357:
switch(s[i]) {
case '0':
	state = 715;
	break;
case '1':
	state = 716;
	break;
}
break;
case 358:
switch(s[i]) {
case '0':
	state = 717;
	break;
case '1':
	state = 718;
	break;
}
break;
case 359:
switch(s[i]) {
case '0':
	state = 719;
	break;
case '1':
	state = 720;
	break;
}
break;
case 360:
switch(s[i]) {
case '0':
	state = 721;
	break;
case '1':
	state = 722;
	break;
}
break;
case 361:
switch(s[i]) {
case '0':
	state = 723;
	break;
case '1':
	state = 724;
	break;
}
break;
case 362:
switch(s[i]) {
case '0':
	state = 725;
	break;
case '1':
	state = 726;
	break;
}
break;
case 363:
switch(s[i]) {
case '0':
	state = 727;
	break;
case '1':
	state = 728;
	break;
}
break;
case 364:
switch(s[i]) {
case '0':
	state = 729;
	break;
case '1':
	state = 730;
	break;
}
break;
case 365:
switch(s[i]) {
case '0':
	state = 731;
	break;
case '1':
	state = 732;
	break;
}
break;
case 366:
switch(s[i]) {
case '0':
	state = 733;
	break;
case '1':
	state = 734;
	break;
}
break;
case 367:
switch(s[i]) {
case '0':
	state = 735;
	break;
case '1':
	state = 736;
	break;
}
break;
case 368:
switch(s[i]) {
case '0':
	state = 737;
	break;
case '1':
	state = 738;
	break;
}
break;
case 369:
switch(s[i]) {
case '0':
	state = 739;
	break;
case '1':
	state = 740;
	break;
}
break;
case 370:
switch(s[i]) {
case '0':
	state = 741;
	break;
case '1':
	state = 742;
	break;
}
break;
case 371:
switch(s[i]) {
case '0':
	state = 743;
	break;
case '1':
	state = 744;
	break;
}
break;
case 372:
switch(s[i]) {
case '0':
	state = 745;
	break;
case '1':
	state = 746;
	break;
}
break;
case 373:
switch(s[i]) {
case '0':
	state = 747;
	break;
case '1':
	state = 748;
	break;
}
break;
case 374:
switch(s[i]) {
case '0':
	state = 749;
	break;
case '1':
	state = 750;
	break;
}
break;
case 375:
switch(s[i]) {
case '0':
	state = 751;
	break;
case '1':
	state = 752;
	break;
}
break;
case 376:
switch(s[i]) {
case '0':
	state = 753;
	break;
case '1':
	state = 754;
	break;
}
break;
case 377:
switch(s[i]) {
case '0':
	state = 755;
	break;
case '1':
	state = 756;
	break;
}
break;
case 378:
switch(s[i]) {
case '0':
	state = 757;
	break;
case '1':
	state = 758;
	break;
}
break;
case 379:
switch(s[i]) {
case '0':
	state = 759;
	break;
case '1':
	state = 760;
	break;
}
break;
case 380:
switch(s[i]) {
case '0':
	state = 761;
	break;
case '1':
	state = 762;
	break;
}
break;
case 381:
switch(s[i]) {
case '0':
	state = 763;
	break;
case '1':
	state = 764;
	break;
}
break;
case 382:
switch(s[i]) {
case '0':
	state = 765;
	break;
case '1':
	state = 766;
	break;
}
break;
case 383:
switch(s[i]) {
case '0':
	state = 767;
	break;
case '1':
	state = 768;
	break;
}
break;
case 384:
switch(s[i]) {
case '0':
	state = 769;
	break;
case '1':
	state = 770;
	break;
}
break;
case 385:
switch(s[i]) {
case '0':
	state = 771;
	break;
case '1':
	state = 772;
	break;
}
break;
case 386:
switch(s[i]) {
case '0':
	state = 773;
	break;
case '1':
	state = 774;
	break;
}
break;
case 387:
switch(s[i]) {
case '0':
	state = 775;
	break;
case '1':
	state = 776;
	break;
}
break;
case 388:
switch(s[i]) {
case '0':
	state = 777;
	break;
case '1':
	state = 778;
	break;
}
break;
case 389:
switch(s[i]) {
case '0':
	state = 779;
	break;
case '1':
	state = 780;
	break;
}
break;
case 390:
switch(s[i]) {
case '0':
	state = 781;
	break;
case '1':
	state = 782;
	break;
}
break;
case 391:
switch(s[i]) {
case '0':
	state = 783;
	break;
case '1':
	state = 784;
	break;
}
break;
case 392:
switch(s[i]) {
case '0':
	state = 785;
	break;
case '1':
	state = 786;
	break;
}
break;
case 393:
switch(s[i]) {
case '0':
	state = 787;
	break;
case '1':
	state = 788;
	break;
}
break;
case 394:
switch(s[i]) {
case '0':
	state = 789;
	break;
case '1':
	state = 790;
	break;
}
break;
case 395:
switch(s[i]) {
case '0':
	state = 791;
	break;
case '1':
	state = 792;
	break;
}
break;
case 396:
switch(s[i]) {
case '0':
	state = 793;
	break;
case '1':
	state = 794;
	break;
}
break;
case 397:
switch(s[i]) {
case '0':
	state = 795;
	break;
case '1':
	state = 796;
	break;
}
break;
case 398:
switch(s[i]) {
case '0':
	state = 797;
	break;
case '1':
	state = 798;
	break;
}
break;
case 399:
switch(s[i]) {
case '0':
	state = 799;
	break;
case '1':
	state = 800;
	break;
}
break;
case 400:
switch(s[i]) {
case '0':
	state = 801;
	break;
case '1':
	state = 802;
	break;
}
break;
case 401:
switch(s[i]) {
case '0':
	state = 803;
	break;
case '1':
	state = 804;
	break;
}
break;
case 402:
switch(s[i]) {
case '0':
	state = 805;
	break;
case '1':
	state = 806;
	break;
}
break;
case 403:
switch(s[i]) {
case '0':
	state = 807;
	break;
case '1':
	state = 808;
	break;
}
break;
case 404:
switch(s[i]) {
case '0':
	state = 809;
	break;
case '1':
	state = 810;
	break;
}
break;
case 405:
switch(s[i]) {
case '0':
	state = 811;
	break;
case '1':
	state = 812;
	break;
}
break;
case 406:
switch(s[i]) {
case '0':
	state = 813;
	break;
case '1':
	state = 814;
	break;
}
break;
case 407:
switch(s[i]) {
case '0':
	state = 815;
	break;
case '1':
	state = 816;
	break;
}
break;
case 408:
switch(s[i]) {
case '0':
	state = 817;
	break;
case '1':
	state = 818;
	break;
}
break;
case 409:
switch(s[i]) {
case '0':
	state = 819;
	break;
case '1':
	state = 820;
	break;
}
break;
case 410:
switch(s[i]) {
case '0':
	state = 821;
	break;
case '1':
	state = 822;
	break;
}
break;
case 411:
switch(s[i]) {
case '0':
	state = 823;
	break;
case '1':
	state = 824;
	break;
}
break;
case 412:
switch(s[i]) {
case '0':
	state = 825;
	break;
case '1':
	state = 826;
	break;
}
break;
case 413:
switch(s[i]) {
case '0':
	state = 827;
	break;
case '1':
	state = 828;
	break;
}
break;
case 414:
switch(s[i]) {
case '0':
	state = 829;
	break;
case '1':
	state = 830;
	break;
}
break;
case 415:
switch(s[i]) {
case '0':
	state = 831;
	break;
case '1':
	state = 832;
	break;
}
break;
case 416:
switch(s[i]) {
case '0':
	state = 833;
	break;
case '1':
	state = 834;
	break;
}
break;
case 417:
switch(s[i]) {
case '0':
	state = 835;
	break;
case '1':
	state = 836;
	break;
}
break;
case 418:
switch(s[i]) {
case '0':
	state = 837;
	break;
case '1':
	state = 838;
	break;
}
break;
case 419:
switch(s[i]) {
case '0':
	state = 839;
	break;
case '1':
	state = 840;
	break;
}
break;
case 420:
switch(s[i]) {
case '0':
	state = 841;
	break;
case '1':
	state = 842;
	break;
}
break;
case 421:
switch(s[i]) {
case '0':
	state = 843;
	break;
case '1':
	state = 844;
	break;
}
break;
case 422:
switch(s[i]) {
case '0':
	state = 845;
	break;
case '1':
	state = 846;
	break;
}
break;
case 423:
switch(s[i]) {
case '0':
	state = 847;
	break;
case '1':
	state = 848;
	break;
}
break;
case 424:
switch(s[i]) {
case '0':
	state = 849;
	break;
case '1':
	state = 850;
	break;
}
break;
case 425:
switch(s[i]) {
case '0':
	state = 851;
	break;
case '1':
	state = 852;
	break;
}
break;
case 426:
switch(s[i]) {
case '0':
	state = 853;
	break;
case '1':
	state = 854;
	break;
}
break;
case 427:
switch(s[i]) {
case '0':
	state = 855;
	break;
case '1':
	state = 856;
	break;
}
break;
case 428:
switch(s[i]) {
case '0':
	state = 857;
	break;
case '1':
	state = 858;
	break;
}
break;
case 429:
switch(s[i]) {
case '0':
	state = 859;
	break;
case '1':
	state = 860;
	break;
}
break;
case 430:
switch(s[i]) {
case '0':
	state = 861;
	break;
case '1':
	state = 862;
	break;
}
break;
case 431:
switch(s[i]) {
case '0':
	state = 863;
	break;
case '1':
	state = 864;
	break;
}
break;
case 432:
switch(s[i]) {
case '0':
	state = 865;
	break;
case '1':
	state = 866;
	break;
}
break;
case 433:
switch(s[i]) {
case '0':
	state = 867;
	break;
case '1':
	state = 868;
	break;
}
break;
case 434:
switch(s[i]) {
case '0':
	state = 869;
	break;
case '1':
	state = 870;
	break;
}
break;
case 435:
switch(s[i]) {
case '0':
	state = 871;
	break;
case '1':
	state = 872;
	break;
}
break;
case 436:
switch(s[i]) {
case '0':
	state = 873;
	break;
case '1':
	state = 874;
	break;
}
break;
case 437:
switch(s[i]) {
case '0':
	state = 875;
	break;
case '1':
	state = 876;
	break;
}
break;
case 438:
switch(s[i]) {
case '0':
	state = 877;
	break;
case '1':
	state = 878;
	break;
}
break;
case 439:
switch(s[i]) {
case '0':
	state = 879;
	break;
case '1':
	state = 880;
	break;
}
break;
case 440:
switch(s[i]) {
case '0':
	state = 881;
	break;
case '1':
	state = 882;
	break;
}
break;
case 441:
switch(s[i]) {
case '0':
	state = 883;
	break;
case '1':
	state = 884;
	break;
}
break;
case 442:
switch(s[i]) {
case '0':
	state = 885;
	break;
case '1':
	state = 886;
	break;
}
break;
case 443:
switch(s[i]) {
case '0':
	state = 887;
	break;
case '1':
	state = 888;
	break;
}
break;
case 444:
switch(s[i]) {
case '0':
	state = 889;
	break;
case '1':
	state = 890;
	break;
}
break;
case 445:
switch(s[i]) {
case '0':
	state = 891;
	break;
case '1':
	state = 892;
	break;
}
break;
case 446:
switch(s[i]) {
case '0':
	state = 893;
	break;
case '1':
	state = 894;
	break;
}
break;
case 447:
switch(s[i]) {
case '0':
	state = 895;
	break;
case '1':
	state = 896;
	break;
}
break;
case 448:
switch(s[i]) {
case '0':
	state = 897;
	break;
case '1':
	state = 898;
	break;
}
break;
case 449:
switch(s[i]) {
case '0':
	state = 899;
	break;
case '1':
	state = 900;
	break;
}
break;
case 450:
switch(s[i]) {
case '0':
	state = 901;
	break;
case '1':
	state = 902;
	break;
}
break;
case 451:
switch(s[i]) {
case '0':
	state = 903;
	break;
case '1':
	state = 904;
	break;
}
break;
case 452:
switch(s[i]) {
case '0':
	state = 905;
	break;
case '1':
	state = 906;
	break;
}
break;
case 453:
switch(s[i]) {
case '0':
	state = 907;
	break;
case '1':
	state = 908;
	break;
}
break;
case 454:
switch(s[i]) {
case '0':
	state = 909;
	break;
case '1':
	state = 910;
	break;
}
break;
case 455:
switch(s[i]) {
case '0':
	state = 911;
	break;
case '1':
	state = 912;
	break;
}
break;
case 456:
switch(s[i]) {
case '0':
	state = 913;
	break;
case '1':
	state = 914;
	break;
}
break;
case 457:
switch(s[i]) {
case '0':
	state = 915;
	break;
case '1':
	state = 916;
	break;
}
break;
case 458:
switch(s[i]) {
case '0':
	state = 917;
	break;
case '1':
	state = 918;
	break;
}
break;
case 459:
switch(s[i]) {
case '0':
	state = 919;
	break;
case '1':
	state = 920;
	break;
}
break;
case 460:
switch(s[i]) {
case '0':
	state = 921;
	break;
case '1':
	state = 922;
	break;
}
break;
case 461:
switch(s[i]) {
case '0':
	state = 923;
	break;
case '1':
	state = 924;
	break;
}
break;
case 462:
switch(s[i]) {
case '0':
	state = 925;
	break;
case '1':
	state = 926;
	break;
}
break;
case 463:
switch(s[i]) {
case '0':
	state = 927;
	break;
case '1':
	state = 928;
	break;
}
break;
case 464:
switch(s[i]) {
case '0':
	state = 929;
	break;
case '1':
	state = 930;
	break;
}
break;
case 465:
switch(s[i]) {
case '0':
	state = 931;
	break;
case '1':
	state = 932;
	break;
}
break;
case 466:
switch(s[i]) {
case '0':
	state = 933;
	break;
case '1':
	state = 934;
	break;
}
break;
case 467:
switch(s[i]) {
case '0':
	state = 935;
	break;
case '1':
	state = 936;
	break;
}
break;
case 468:
switch(s[i]) {
case '0':
	state = 937;
	break;
case '1':
	state = 938;
	break;
}
break;
case 469:
switch(s[i]) {
case '0':
	state = 939;
	break;
case '1':
	state = 940;
	break;
}
break;
case 470:
switch(s[i]) {
case '0':
	state = 941;
	break;
case '1':
	state = 942;
	break;
}
break;
case 471:
switch(s[i]) {
case '0':
	state = 943;
	break;
case '1':
	state = 944;
	break;
}
break;
case 472:
switch(s[i]) {
case '0':
	state = 945;
	break;
case '1':
	state = 946;
	break;
}
break;
case 473:
switch(s[i]) {
case '0':
	state = 947;
	break;
case '1':
	state = 948;
	break;
}
break;
case 474:
switch(s[i]) {
case '0':
	state = 949;
	break;
case '1':
	state = 950;
	break;
}
break;
case 475:
switch(s[i]) {
case '0':
	state = 951;
	break;
case '1':
	state = 952;
	break;
}
break;
case 476:
switch(s[i]) {
case '0':
	state = 953;
	break;
case '1':
	state = 954;
	break;
}
break;
case 477:
switch(s[i]) {
case '0':
	state = 955;
	break;
case '1':
	state = 956;
	break;
}
break;
case 478:
switch(s[i]) {
case '0':
	state = 957;
	break;
case '1':
	state = 958;
	break;
}
break;
case 479:
switch(s[i]) {
case '0':
	state = 959;
	break;
case '1':
	state = 960;
	break;
}
break;
case 480:
switch(s[i]) {
case '0':
	state = 961;
	break;
case '1':
	state = 962;
	break;
}
break;
case 481:
switch(s[i]) {
case '0':
	state = 963;
	break;
case '1':
	state = 964;
	break;
}
break;
case 482:
switch(s[i]) {
case '0':
	state = 965;
	break;
case '1':
	state = 966;
	break;
}
break;
case 483:
switch(s[i]) {
case '0':
	state = 967;
	break;
case '1':
	state = 968;
	break;
}
break;
case 484:
switch(s[i]) {
case '0':
	state = 969;
	break;
case '1':
	state = 970;
	break;
}
break;
case 485:
switch(s[i]) {
case '0':
	state = 971;
	break;
case '1':
	state = 972;
	break;
}
break;
case 486:
switch(s[i]) {
case '0':
	state = 973;
	break;
case '1':
	state = 974;
	break;
}
break;
case 487:
switch(s[i]) {
case '0':
	state = 975;
	break;
case '1':
	state = 976;
	break;
}
break;
case 488:
switch(s[i]) {
case '0':
	state = 977;
	break;
case '1':
	state = 978;
	break;
}
break;
case 489:
switch(s[i]) {
case '0':
	state = 979;
	break;
case '1':
	state = 980;
	break;
}
break;
case 490:
switch(s[i]) {
case '0':
	state = 981;
	break;
case '1':
	state = 982;
	break;
}
break;
case 491:
switch(s[i]) {
case '0':
	state = 983;
	break;
case '1':
	state = 984;
	break;
}
break;
case 492:
switch(s[i]) {
case '0':
	state = 985;
	break;
case '1':
	state = 986;
	break;
}
break;
case 493:
switch(s[i]) {
case '0':
	state = 987;
	break;
case '1':
	state = 988;
	break;
}
break;
case 494:
switch(s[i]) {
case '0':
	state = 989;
	break;
case '1':
	state = 990;
	break;
}
break;
case 495:
switch(s[i]) {
case '0':
	state = 991;
	break;
case '1':
	state = 992;
	break;
}
break;
case 496:
switch(s[i]) {
case '0':
	state = 993;
	break;
case '1':
	state = 994;
	break;
}
break;
case 497:
switch(s[i]) {
case '0':
	state = 995;
	break;
case '1':
	state = 996;
	break;
}
break;
case 498:
switch(s[i]) {
case '0':
	state = 997;
	break;
case '1':
	state = 998;
	break;
}
break;
case 499:
switch(s[i]) {
case '0':
	state = 999;
	break;
case '1':
	state = 1000;
	break;
}
break;
case 500:
switch(s[i]) {
case '0':
	state = 1001;
	break;
case '1':
	state = 1002;
	break;
}
break;
case 501:
switch(s[i]) {
case '0':
	state = 1003;
	break;
case '1':
	state = 1004;
	break;
}
break;
case 502:
switch(s[i]) {
case '0':
	state = 1005;
	break;
case '1':
	state = 1006;
	break;
}
break;
case 503:
switch(s[i]) {
case '0':
	state = 1007;
	break;
case '1':
	state = 1008;
	break;
}
break;
case 504:
switch(s[i]) {
case '0':
	state = 1009;
	break;
case '1':
	state = 1010;
	break;
}
break;
case 505:
switch(s[i]) {
case '0':
	state = 1011;
	break;
case '1':
	state = 1012;
	break;
}
break;
case 506:
switch(s[i]) {
case '0':
	state = 1013;
	break;
case '1':
	state = 1014;
	break;
}
break;
case 507:
switch(s[i]) {
case '0':
	state = 1015;
	break;
case '1':
	state = 1016;
	break;
}
break;
case 508:
switch(s[i]) {
case '0':
	state = 1017;
	break;
case '1':
	state = 1018;
	break;
}
break;
case 509:
switch(s[i]) {
case '0':
	state = 1019;
	break;
case '1':
	state = 1020;
	break;
}
break;
case 510:
switch(s[i]) {
case '0':
	state = 1021;
	break;
case '1':
	state = 1022;
	break;
}
break;
case 511:
switch(s[i]) {
case '0':
	state = 1023;
	break;
case '1':
	state = 1024;
	break;
}
break;
case 512:
switch(s[i]) {
case '0':
	state = 1025;
	break;
case '1':
	state = 1026;
	break;
}
break;
case 513:
switch(s[i]) {
case '0':
	state = 1027;
	break;
case '1':
	state = 1028;
	break;
}
break;
case 514:
switch(s[i]) {
case '0':
	state = 1029;
	break;
case '1':
	state = 1030;
	break;
}
break;
case 515:
switch(s[i]) {
case '0':
	state = 1031;
	break;
case '1':
	state = 1032;
	break;
}
break;
case 516:
switch(s[i]) {
case '0':
	state = 1033;
	break;
case '1':
	state = 1034;
	break;
}
break;
case 517:
switch(s[i]) {
case '0':
	state = 1035;
	break;
case '1':
	state = 1036;
	break;
}
break;
case 518:
switch(s[i]) {
case '0':
	state = 1037;
	break;
case '1':
	state = 1038;
	break;
}
break;
case 519:
switch(s[i]) {
case '0':
	state = 1039;
	break;
case '1':
	state = 1040;
	break;
}
break;
case 520:
switch(s[i]) {
case '0':
	state = 1041;
	break;
case '1':
	state = 1042;
	break;
}
break;
case 521:
switch(s[i]) {
case '0':
	state = 1043;
	break;
case '1':
	state = 1044;
	break;
}
break;
case 522:
switch(s[i]) {
case '0':
	state = 1045;
	break;
case '1':
	state = 1046;
	break;
}
break;
case 523:
switch(s[i]) {
case '0':
	state = 1047;
	break;
case '1':
	state = 1048;
	break;
}
break;
case 524:
switch(s[i]) {
case '0':
	state = 1049;
	break;
case '1':
	state = 1050;
	break;
}
break;
case 525:
switch(s[i]) {
case '0':
	state = 1051;
	break;
case '1':
	state = 1052;
	break;
}
break;
case 526:
switch(s[i]) {
case '0':
	state = 1053;
	break;
case '1':
	state = 1054;
	break;
}
break;
case 527:
switch(s[i]) {
case '0':
	state = 1055;
	break;
case '1':
	state = 1056;
	break;
}
break;
case 528:
switch(s[i]) {
case '0':
	state = 1057;
	break;
case '1':
	state = 1058;
	break;
}
break;
case 529:
switch(s[i]) {
case '0':
	state = 1059;
	break;
case '1':
	state = 1060;
	break;
}
break;
case 530:
switch(s[i]) {
case '0':
	state = 1061;
	break;
case '1':
	state = 1062;
	break;
}
break;
case 531:
switch(s[i]) {
case '0':
	state = 1063;
	break;
case '1':
	state = 1064;
	break;
}
break;
case 532:
switch(s[i]) {
case '0':
	state = 1065;
	break;
case '1':
	state = 1066;
	break;
}
break;
case 533:
switch(s[i]) {
case '0':
	state = 1067;
	break;
case '1':
	state = 1068;
	break;
}
break;
case 534:
switch(s[i]) {
case '0':
	state = 1069;
	break;
case '1':
	state = 1070;
	break;
}
break;
case 535:
switch(s[i]) {
case '0':
	state = 1071;
	break;
case '1':
	state = 1072;
	break;
}
break;
case 536:
switch(s[i]) {
case '0':
	state = 1073;
	break;
case '1':
	state = 1074;
	break;
}
break;
case 537:
switch(s[i]) {
case '0':
	state = 1075;
	break;
case '1':
	state = 1076;
	break;
}
break;
case 538:
switch(s[i]) {
case '0':
	state = 1077;
	break;
case '1':
	state = 1078;
	break;
}
break;
case 539:
switch(s[i]) {
case '0':
	state = 1079;
	break;
case '1':
	state = 1080;
	break;
}
break;
case 540:
switch(s[i]) {
case '0':
	state = 1081;
	break;
case '1':
	state = 1082;
	break;
}
break;
case 541:
switch(s[i]) {
case '0':
	state = 1083;
	break;
case '1':
	state = 1084;
	break;
}
break;
case 542:
switch(s[i]) {
case '0':
	state = 1085;
	break;
case '1':
	state = 1086;
	break;
}
break;
case 543:
switch(s[i]) {
case '0':
	state = 1087;
	break;
case '1':
	state = 1088;
	break;
}
break;
case 544:
switch(s[i]) {
case '0':
	state = 1089;
	break;
case '1':
	state = 1090;
	break;
}
break;
case 545:
switch(s[i]) {
case '0':
	state = 1091;
	break;
case '1':
	state = 1092;
	break;
}
break;
case 546:
switch(s[i]) {
case '0':
	state = 1093;
	break;
case '1':
	state = 1094;
	break;
}
break;
case 547:
switch(s[i]) {
case '0':
	state = 1095;
	break;
case '1':
	state = 1096;
	break;
}
break;
case 548:
switch(s[i]) {
case '0':
	state = 1097;
	break;
case '1':
	state = 1098;
	break;
}
break;
case 549:
switch(s[i]) {
case '0':
	state = 1099;
	break;
case '1':
	state = 1100;
	break;
}
break;
case 550:
switch(s[i]) {
case '0':
	state = 1101;
	break;
case '1':
	state = 1102;
	break;
}
break;
case 551:
switch(s[i]) {
case '0':
	state = 1103;
	break;
case '1':
	state = 1104;
	break;
}
break;
case 552:
switch(s[i]) {
case '0':
	state = 1105;
	break;
case '1':
	state = 1106;
	break;
}
break;
case 553:
switch(s[i]) {
case '0':
	state = 1107;
	break;
case '1':
	state = 1108;
	break;
}
break;
case 554:
switch(s[i]) {
case '0':
	state = 1109;
	break;
case '1':
	state = 1110;
	break;
}
break;
case 555:
switch(s[i]) {
case '0':
	state = 1111;
	break;
case '1':
	state = 1112;
	break;
}
break;
case 556:
switch(s[i]) {
case '0':
	state = 1113;
	break;
case '1':
	state = 1114;
	break;
}
break;
case 557:
switch(s[i]) {
case '0':
	state = 1115;
	break;
case '1':
	state = 1116;
	break;
}
break;
case 558:
switch(s[i]) {
case '0':
	state = 1117;
	break;
case '1':
	state = 1118;
	break;
}
break;
case 559:
switch(s[i]) {
case '0':
	state = 1119;
	break;
case '1':
	state = 1120;
	break;
}
break;
case 560:
switch(s[i]) {
case '0':
	state = 1121;
	break;
case '1':
	state = 1122;
	break;
}
break;
case 561:
switch(s[i]) {
case '0':
	state = 1123;
	break;
case '1':
	state = 1124;
	break;
}
break;
case 562:
switch(s[i]) {
case '0':
	state = 1125;
	break;
case '1':
	state = 1126;
	break;
}
break;
case 563:
switch(s[i]) {
case '0':
	state = 1127;
	break;
case '1':
	state = 1128;
	break;
}
break;
case 564:
switch(s[i]) {
case '0':
	state = 1129;
	break;
case '1':
	state = 1130;
	break;
}
break;
case 565:
switch(s[i]) {
case '0':
	state = 1131;
	break;
case '1':
	state = 1132;
	break;
}
break;
case 566:
switch(s[i]) {
case '0':
	state = 1133;
	break;
case '1':
	state = 1134;
	break;
}
break;
case 567:
switch(s[i]) {
case '0':
	state = 1135;
	break;
case '1':
	state = 1136;
	break;
}
break;
case 568:
switch(s[i]) {
case '0':
	state = 1137;
	break;
case '1':
	state = 1138;
	break;
}
break;
case 569:
switch(s[i]) {
case '0':
	state = 1139;
	break;
case '1':
	state = 1140;
	break;
}
break;
case 570:
switch(s[i]) {
case '0':
	state = 1141;
	break;
case '1':
	state = 1142;
	break;
}
break;
case 571:
switch(s[i]) {
case '0':
	state = 1143;
	break;
case '1':
	state = 1144;
	break;
}
break;
case 572:
switch(s[i]) {
case '0':
	state = 1145;
	break;
case '1':
	state = 1146;
	break;
}
break;
case 573:
switch(s[i]) {
case '0':
	state = 1147;
	break;
case '1':
	state = 1148;
	break;
}
break;
case 574:
switch(s[i]) {
case '0':
	state = 1149;
	break;
case '1':
	state = 1150;
	break;
}
break;
case 575:
switch(s[i]) {
case '0':
	state = 1151;
	break;
case '1':
	state = 1152;
	break;
}
break;
case 576:
switch(s[i]) {
case '0':
	state = 1153;
	break;
case '1':
	state = 1154;
	break;
}
break;
case 577:
switch(s[i]) {
case '0':
	state = 1155;
	break;
case '1':
	state = 1156;
	break;
}
break;
case 578:
switch(s[i]) {
case '0':
	state = 1157;
	break;
case '1':
	state = 1158;
	break;
}
break;
case 579:
switch(s[i]) {
case '0':
	state = 1159;
	break;
case '1':
	state = 1160;
	break;
}
break;
case 580:
switch(s[i]) {
case '0':
	state = 1161;
	break;
case '1':
	state = 1162;
	break;
}
break;
case 581:
switch(s[i]) {
case '0':
	state = 1163;
	break;
case '1':
	state = 1164;
	break;
}
break;
case 582:
switch(s[i]) {
case '0':
	state = 1165;
	break;
case '1':
	state = 1166;
	break;
}
break;
case 583:
switch(s[i]) {
case '0':
	state = 1167;
	break;
case '1':
	state = 1168;
	break;
}
break;
case 584:
switch(s[i]) {
case '0':
	state = 1169;
	break;
case '1':
	state = 1170;
	break;
}
break;
case 585:
switch(s[i]) {
case '0':
	state = 1171;
	break;
case '1':
	state = 1172;
	break;
}
break;
case 586:
switch(s[i]) {
case '0':
	state = 1173;
	break;
case '1':
	state = 1174;
	break;
}
break;
case 587:
switch(s[i]) {
case '0':
	state = 1175;
	break;
case '1':
	state = 1176;
	break;
}
break;
case 588:
switch(s[i]) {
case '0':
	state = 1177;
	break;
case '1':
	state = 1178;
	break;
}
break;
case 589:
switch(s[i]) {
case '0':
	state = 1179;
	break;
case '1':
	state = 1180;
	break;
}
break;
case 590:
switch(s[i]) {
case '0':
	state = 1181;
	break;
case '1':
	state = 1182;
	break;
}
break;
case 591:
switch(s[i]) {
case '0':
	state = 1183;
	break;
case '1':
	state = 1184;
	break;
}
break;
case 592:
switch(s[i]) {
case '0':
	state = 1185;
	break;
case '1':
	state = 1186;
	break;
}
break;
case 593:
switch(s[i]) {
case '0':
	state = 1187;
	break;
case '1':
	state = 1188;
	break;
}
break;
case 594:
switch(s[i]) {
case '0':
	state = 1189;
	break;
case '1':
	state = 1190;
	break;
}
break;
case 595:
switch(s[i]) {
case '0':
	state = 1191;
	break;
case '1':
	state = 1192;
	break;
}
break;
case 596:
switch(s[i]) {
case '0':
	state = 1193;
	break;
case '1':
	state = 1194;
	break;
}
break;
case 597:
switch(s[i]) {
case '0':
	state = 1195;
	break;
case '1':
	state = 1196;
	break;
}
break;
case 598:
switch(s[i]) {
case '0':
	state = 1197;
	break;
case '1':
	state = 1198;
	break;
}
break;
case 599:
switch(s[i]) {
case '0':
	state = 1199;
	break;
case '1':
	state = 1200;
	break;
}
break;
case 600:
switch(s[i]) {
case '0':
	state = 1201;
	break;
case '1':
	state = 1202;
	break;
}
break;
case 601:
switch(s[i]) {
case '0':
	state = 1203;
	break;
case '1':
	state = 1204;
	break;
}
break;
case 602:
switch(s[i]) {
case '0':
	state = 1205;
	break;
case '1':
	state = 1206;
	break;
}
break;
case 603:
switch(s[i]) {
case '0':
	state = 1207;
	break;
case '1':
	state = 1208;
	break;
}
break;
case 604:
switch(s[i]) {
case '0':
	state = 1209;
	break;
case '1':
	state = 1210;
	break;
}
break;
case 605:
switch(s[i]) {
case '0':
	state = 1211;
	break;
case '1':
	state = 1212;
	break;
}
break;
case 606:
switch(s[i]) {
case '0':
	state = 1213;
	break;
case '1':
	state = 1214;
	break;
}
break;
case 607:
switch(s[i]) {
case '0':
	state = 1215;
	break;
case '1':
	state = 1216;
	break;
}
break;
case 608:
switch(s[i]) {
case '0':
	state = 1217;
	break;
case '1':
	state = 1218;
	break;
}
break;
case 609:
switch(s[i]) {
case '0':
	state = 1219;
	break;
case '1':
	state = 1220;
	break;
}
break;
case 610:
switch(s[i]) {
case '0':
	state = 1221;
	break;
case '1':
	state = 1222;
	break;
}
break;
case 611:
switch(s[i]) {
case '0':
	state = 1223;
	break;
case '1':
	state = 1224;
	break;
}
break;
case 612:
switch(s[i]) {
case '0':
	state = 1225;
	break;
case '1':
	state = 1226;
	break;
}
break;
case 613:
switch(s[i]) {
case '0':
	state = 1227;
	break;
case '1':
	state = 1228;
	break;
}
break;
case 614:
switch(s[i]) {
case '0':
	state = 1229;
	break;
case '1':
	state = 1230;
	break;
}
break;
case 615:
switch(s[i]) {
case '0':
	state = 1231;
	break;
case '1':
	state = 1232;
	break;
}
break;
case 616:
switch(s[i]) {
case '0':
	state = 1233;
	break;
case '1':
	state = 1234;
	break;
}
break;
case 617:
switch(s[i]) {
case '0':
	state = 1235;
	break;
case '1':
	state = 1236;
	break;
}
break;
case 618:
switch(s[i]) {
case '0':
	state = 1237;
	break;
case '1':
	state = 1238;
	break;
}
break;
case 619:
switch(s[i]) {
case '0':
	state = 1239;
	break;
case '1':
	state = 1240;
	break;
}
break;
case 620:
switch(s[i]) {
case '0':
	state = 1241;
	break;
case '1':
	state = 1242;
	break;
}
break;
case 621:
switch(s[i]) {
case '0':
	state = 1243;
	break;
case '1':
	state = 1244;
	break;
}
break;
case 622:
switch(s[i]) {
case '0':
	state = 1245;
	break;
case '1':
	state = 1246;
	break;
}
break;
case 623:
switch(s[i]) {
case '0':
	state = 1247;
	break;
case '1':
	state = 1248;
	break;
}
break;
case 624:
switch(s[i]) {
case '0':
	state = 1249;
	break;
case '1':
	state = 1250;
	break;
}
break;
case 625:
switch(s[i]) {
case '0':
	state = 1251;
	break;
case '1':
	state = 1252;
	break;
}
break;
case 626:
switch(s[i]) {
case '0':
	state = 1253;
	break;
case '1':
	state = 1254;
	break;
}
break;
case 627:
switch(s[i]) {
case '0':
	state = 1255;
	break;
case '1':
	state = 1256;
	break;
}
break;
case 628:
switch(s[i]) {
case '0':
	state = 1257;
	break;
case '1':
	state = 1258;
	break;
}
break;
case 629:
switch(s[i]) {
case '0':
	state = 1259;
	break;
case '1':
	state = 1260;
	break;
}
break;
case 630:
switch(s[i]) {
case '0':
	state = 1261;
	break;
case '1':
	state = 1262;
	break;
}
break;
case 631:
switch(s[i]) {
case '0':
	state = 1263;
	break;
case '1':
	state = 1264;
	break;
}
break;
case 632:
switch(s[i]) {
case '0':
	state = 1265;
	break;
case '1':
	state = 1266;
	break;
}
break;
case 633:
switch(s[i]) {
case '0':
	state = 1267;
	break;
case '1':
	state = 1268;
	break;
}
break;
case 634:
switch(s[i]) {
case '0':
	state = 1269;
	break;
case '1':
	state = 1270;
	break;
}
break;
case 635:
switch(s[i]) {
case '0':
	state = 1271;
	break;
case '1':
	state = 1272;
	break;
}
break;
case 636:
switch(s[i]) {
case '0':
	state = 1273;
	break;
case '1':
	state = 1274;
	break;
}
break;
case 637:
switch(s[i]) {
case '0':
	state = 1275;
	break;
case '1':
	state = 1276;
	break;
}
break;
case 638:
switch(s[i]) {
case '0':
	state = 1277;
	break;
case '1':
	state = 1278;
	break;
}
break;
case 639:
switch(s[i]) {
case '0':
	state = 1279;
	break;
case '1':
	state = 1280;
	break;
}
break;
case 640:
switch(s[i]) {
case '0':
	state = 1281;
	break;
case '1':
	state = 1282;
	break;
}
break;
case 641:
switch(s[i]) {
case '0':
	state = 1283;
	break;
case '1':
	state = 1284;
	break;
}
break;
case 642:
switch(s[i]) {
case '0':
	state = 1285;
	break;
case '1':
	state = 1286;
	break;
}
break;
case 643:
switch(s[i]) {
case '0':
	state = 1287;
	break;
case '1':
	state = 1288;
	break;
}
break;
case 644:
switch(s[i]) {
case '0':
	state = 1289;
	break;
case '1':
	state = 1290;
	break;
}
break;
case 645:
switch(s[i]) {
case '0':
	state = 1291;
	break;
case '1':
	state = 1292;
	break;
}
break;
case 646:
switch(s[i]) {
case '0':
	state = 1293;
	break;
case '1':
	state = 1294;
	break;
}
break;
case 647:
switch(s[i]) {
case '0':
	state = 1295;
	break;
case '1':
	state = 1296;
	break;
}
break;
case 648:
switch(s[i]) {
case '0':
	state = 1297;
	break;
case '1':
	state = 1298;
	break;
}
break;
case 649:
switch(s[i]) {
case '0':
	state = 1299;
	break;
case '1':
	state = 1300;
	break;
}
break;
case 650:
switch(s[i]) {
case '0':
	state = 1301;
	break;
case '1':
	state = 1302;
	break;
}
break;
case 651:
switch(s[i]) {
case '0':
	state = 1303;
	break;
case '1':
	state = 1304;
	break;
}
break;
case 652:
switch(s[i]) {
case '0':
	state = 1305;
	break;
case '1':
	state = 1306;
	break;
}
break;
case 653:
switch(s[i]) {
case '0':
	state = 1307;
	break;
case '1':
	state = 1308;
	break;
}
break;
case 654:
switch(s[i]) {
case '0':
	state = 1309;
	break;
case '1':
	state = 1310;
	break;
}
break;
case 655:
switch(s[i]) {
case '0':
	state = 1311;
	break;
case '1':
	state = 1312;
	break;
}
break;
case 656:
switch(s[i]) {
case '0':
	state = 1313;
	break;
case '1':
	state = 1314;
	break;
}
break;
case 657:
switch(s[i]) {
case '0':
	state = 1315;
	break;
case '1':
	state = 1316;
	break;
}
break;
case 658:
switch(s[i]) {
case '0':
	state = 1317;
	break;
case '1':
	state = 1318;
	break;
}
break;
case 659:
switch(s[i]) {
case '0':
	state = 1319;
	break;
case '1':
	state = 1320;
	break;
}
break;
case 660:
switch(s[i]) {
case '0':
	state = 1321;
	break;
case '1':
	state = 1322;
	break;
}
break;
case 661:
switch(s[i]) {
case '0':
	state = 1323;
	break;
case '1':
	state = 1324;
	break;
}
break;
case 662:
switch(s[i]) {
case '0':
	state = 1325;
	break;
case '1':
	state = 1326;
	break;
}
break;
case 663:
switch(s[i]) {
case '0':
	state = 1327;
	break;
case '1':
	state = 1328;
	break;
}
break;
case 664:
switch(s[i]) {
case '0':
	state = 1329;
	break;
case '1':
	state = 1330;
	break;
}
break;
case 665:
switch(s[i]) {
case '0':
	state = 1331;
	break;
case '1':
	state = 1332;
	break;
}
break;
case 666:
switch(s[i]) {
case '0':
	state = 1333;
	break;
case '1':
	state = 1334;
	break;
}
break;
case 667:
switch(s[i]) {
case '0':
	state = 1335;
	break;
case '1':
	state = 1336;
	break;
}
break;
case 668:
switch(s[i]) {
case '0':
	state = 1337;
	break;
case '1':
	state = 1338;
	break;
}
break;
case 669:
switch(s[i]) {
case '0':
	state = 1339;
	break;
case '1':
	state = 1340;
	break;
}
break;
case 670:
switch(s[i]) {
case '0':
	state = 1341;
	break;
case '1':
	state = 1342;
	break;
}
break;
case 671:
switch(s[i]) {
case '0':
	state = 1343;
	break;
case '1':
	state = 1344;
	break;
}
break;
case 672:
switch(s[i]) {
case '0':
	state = 1345;
	break;
case '1':
	state = 1346;
	break;
}
break;
case 673:
switch(s[i]) {
case '0':
	state = 1347;
	break;
case '1':
	state = 1348;
	break;
}
break;
case 674:
switch(s[i]) {
case '0':
	state = 1349;
	break;
case '1':
	state = 1350;
	break;
}
break;
case 675:
switch(s[i]) {
case '0':
	state = 1351;
	break;
case '1':
	state = 1352;
	break;
}
break;
case 676:
switch(s[i]) {
case '0':
	state = 1353;
	break;
case '1':
	state = 1354;
	break;
}
break;
case 677:
switch(s[i]) {
case '0':
	state = 1355;
	break;
case '1':
	state = 1356;
	break;
}
break;
case 678:
switch(s[i]) {
case '0':
	state = 1357;
	break;
case '1':
	state = 1358;
	break;
}
break;
case 679:
switch(s[i]) {
case '0':
	state = 1359;
	break;
case '1':
	state = 1360;
	break;
}
break;
case 680:
switch(s[i]) {
case '0':
	state = 1361;
	break;
case '1':
	state = 1362;
	break;
}
break;
case 681:
switch(s[i]) {
case '0':
	state = 1363;
	break;
case '1':
	state = 1364;
	break;
}
break;
case 682:
switch(s[i]) {
case '0':
	state = 1365;
	break;
case '1':
	state = 1366;
	break;
}
break;
case 683:
switch(s[i]) {
case '0':
	state = 1367;
	break;
case '1':
	state = 1368;
	break;
}
break;
case 684:
switch(s[i]) {
case '0':
	state = 1369;
	break;
case '1':
	state = 1370;
	break;
}
break;
case 685:
switch(s[i]) {
case '0':
	state = 1371;
	break;
case '1':
	state = 1372;
	break;
}
break;
case 686:
switch(s[i]) {
case '0':
	state = 1373;
	break;
case '1':
	state = 1374;
	break;
}
break;
case 687:
switch(s[i]) {
case '0':
	state = 1375;
	break;
case '1':
	state = 1376;
	break;
}
break;
case 688:
switch(s[i]) {
case '0':
	state = 1377;
	break;
case '1':
	state = 1378;
	break;
}
break;
case 689:
switch(s[i]) {
case '0':
	state = 1379;
	break;
case '1':
	state = 1380;
	break;
}
break;
case 690:
switch(s[i]) {
case '0':
	state = 1381;
	break;
case '1':
	state = 1382;
	break;
}
break;
case 691:
switch(s[i]) {
case '0':
	state = 1383;
	break;
case '1':
	state = 1384;
	break;
}
break;
case 692:
switch(s[i]) {
case '0':
	state = 1385;
	break;
case '1':
	state = 1386;
	break;
}
break;
case 693:
switch(s[i]) {
case '0':
	state = 1387;
	break;
case '1':
	state = 1388;
	break;
}
break;
case 694:
switch(s[i]) {
case '0':
	state = 1389;
	break;
case '1':
	state = 1390;
	break;
}
break;
case 695:
switch(s[i]) {
case '0':
	state = 1391;
	break;
case '1':
	state = 1392;
	break;
}
break;
case 696:
switch(s[i]) {
case '0':
	state = 1393;
	break;
case '1':
	state = 1394;
	break;
}
break;
case 697:
switch(s[i]) {
case '0':
	state = 1395;
	break;
case '1':
	state = 1396;
	break;
}
break;
case 698:
switch(s[i]) {
case '0':
	state = 1397;
	break;
case '1':
	state = 1398;
	break;
}
break;
case 699:
switch(s[i]) {
case '0':
	state = 1399;
	break;
case '1':
	state = 1400;
	break;
}
break;
case 700:
switch(s[i]) {
case '0':
	state = 1401;
	break;
case '1':
	state = 1402;
	break;
}
break;
case 701:
switch(s[i]) {
case '0':
	state = 1403;
	break;
case '1':
	state = 1404;
	break;
}
break;
case 702:
switch(s[i]) {
case '0':
	state = 1405;
	break;
case '1':
	state = 1406;
	break;
}
break;
case 703:
switch(s[i]) {
case '0':
	state = 1407;
	break;
case '1':
	state = 1408;
	break;
}
break;
case 704:
switch(s[i]) {
case '0':
	state = 1409;
	break;
case '1':
	state = 1410;
	break;
}
break;
case 705:
switch(s[i]) {
case '0':
	state = 1411;
	break;
case '1':
	state = 1412;
	break;
}
break;
case 706:
switch(s[i]) {
case '0':
	state = 1413;
	break;
case '1':
	state = 1414;
	break;
}
break;
case 707:
switch(s[i]) {
case '0':
	state = 1415;
	break;
case '1':
	state = 1416;
	break;
}
break;
case 708:
switch(s[i]) {
case '0':
	state = 1417;
	break;
case '1':
	state = 1418;
	break;
}
break;
case 709:
switch(s[i]) {
case '0':
	state = 1419;
	break;
case '1':
	state = 1420;
	break;
}
break;
case 710:
switch(s[i]) {
case '0':
	state = 1421;
	break;
case '1':
	state = 1422;
	break;
}
break;
case 711:
switch(s[i]) {
case '0':
	state = 1423;
	break;
case '1':
	state = 1424;
	break;
}
break;
case 712:
switch(s[i]) {
case '0':
	state = 1425;
	break;
case '1':
	state = 1426;
	break;
}
break;
case 713:
switch(s[i]) {
case '0':
	state = 1427;
	break;
case '1':
	state = 1428;
	break;
}
break;
case 714:
switch(s[i]) {
case '0':
	state = 1429;
	break;
case '1':
	state = 1430;
	break;
}
break;
case 715:
switch(s[i]) {
case '0':
	state = 1431;
	break;
case '1':
	state = 1432;
	break;
}
break;
case 716:
switch(s[i]) {
case '0':
	state = 1433;
	break;
case '1':
	state = 1434;
	break;
}
break;
case 717:
switch(s[i]) {
case '0':
	state = 1435;
	break;
case '1':
	state = 1436;
	break;
}
break;
case 718:
switch(s[i]) {
case '0':
	state = 1437;
	break;
case '1':
	state = 1438;
	break;
}
break;
case 719:
switch(s[i]) {
case '0':
	state = 1439;
	break;
case '1':
	state = 1440;
	break;
}
break;
case 720:
switch(s[i]) {
case '0':
	state = 1441;
	break;
case '1':
	state = 1442;
	break;
}
break;
case 721:
switch(s[i]) {
case '0':
	state = 1443;
	break;
case '1':
	state = 1444;
	break;
}
break;
case 722:
switch(s[i]) {
case '0':
	state = 1445;
	break;
case '1':
	state = 1446;
	break;
}
break;
case 723:
switch(s[i]) {
case '0':
	state = 1447;
	break;
case '1':
	state = 1448;
	break;
}
break;
case 724:
switch(s[i]) {
case '0':
	state = 1449;
	break;
case '1':
	state = 1450;
	break;
}
break;
case 725:
switch(s[i]) {
case '0':
	state = 1451;
	break;
case '1':
	state = 1452;
	break;
}
break;
case 726:
switch(s[i]) {
case '0':
	state = 1453;
	break;
case '1':
	state = 1454;
	break;
}
break;
case 727:
switch(s[i]) {
case '0':
	state = 1455;
	break;
case '1':
	state = 1456;
	break;
}
break;
case 728:
switch(s[i]) {
case '0':
	state = 1457;
	break;
case '1':
	state = 1458;
	break;
}
break;
case 729:
switch(s[i]) {
case '0':
	state = 1459;
	break;
case '1':
	state = 1460;
	break;
}
break;
case 730:
switch(s[i]) {
case '0':
	state = 1461;
	break;
case '1':
	state = 1462;
	break;
}
break;
case 731:
switch(s[i]) {
case '0':
	state = 1463;
	break;
case '1':
	state = 1464;
	break;
}
break;
case 732:
switch(s[i]) {
case '0':
	state = 1465;
	break;
case '1':
	state = 1466;
	break;
}
break;
case 733:
switch(s[i]) {
case '0':
	state = 1467;
	break;
case '1':
	state = 1468;
	break;
}
break;
case 734:
switch(s[i]) {
case '0':
	state = 1469;
	break;
case '1':
	state = 1470;
	break;
}
break;
case 735:
switch(s[i]) {
case '0':
	state = 1471;
	break;
case '1':
	state = 1472;
	break;
}
break;
case 736:
switch(s[i]) {
case '0':
	state = 1473;
	break;
case '1':
	state = 1474;
	break;
}
break;
case 737:
switch(s[i]) {
case '0':
	state = 1475;
	break;
case '1':
	state = 1476;
	break;
}
break;
case 738:
switch(s[i]) {
case '0':
	state = 1477;
	break;
case '1':
	state = 1478;
	break;
}
break;
case 739:
switch(s[i]) {
case '0':
	state = 1479;
	break;
case '1':
	state = 1480;
	break;
}
break;
case 740:
switch(s[i]) {
case '0':
	state = 1481;
	break;
case '1':
	state = 1482;
	break;
}
break;
case 741:
switch(s[i]) {
case '0':
	state = 1483;
	break;
case '1':
	state = 1484;
	break;
}
break;
case 742:
switch(s[i]) {
case '0':
	state = 1485;
	break;
case '1':
	state = 1486;
	break;
}
break;
case 743:
switch(s[i]) {
case '0':
	state = 1487;
	break;
case '1':
	state = 1488;
	break;
}
break;
case 744:
switch(s[i]) {
case '0':
	state = 1489;
	break;
case '1':
	state = 1490;
	break;
}
break;
case 745:
switch(s[i]) {
case '0':
	state = 1491;
	break;
case '1':
	state = 1492;
	break;
}
break;
case 746:
switch(s[i]) {
case '0':
	state = 1493;
	break;
case '1':
	state = 1494;
	break;
}
break;
case 747:
switch(s[i]) {
case '0':
	state = 1495;
	break;
case '1':
	state = 1496;
	break;
}
break;
case 748:
switch(s[i]) {
case '0':
	state = 1497;
	break;
case '1':
	state = 1498;
	break;
}
break;
case 749:
switch(s[i]) {
case '0':
	state = 1499;
	break;
case '1':
	state = 1500;
	break;
}
break;
case 750:
switch(s[i]) {
case '0':
	state = 1501;
	break;
case '1':
	state = 1502;
	break;
}
break;
case 751:
switch(s[i]) {
case '0':
	state = 1503;
	break;
case '1':
	state = 1504;
	break;
}
break;
case 752:
switch(s[i]) {
case '0':
	state = 1505;
	break;
case '1':
	state = 1506;
	break;
}
break;
case 753:
switch(s[i]) {
case '0':
	state = 1507;
	break;
case '1':
	state = 1508;
	break;
}
break;
case 754:
switch(s[i]) {
case '0':
	state = 1509;
	break;
case '1':
	state = 1510;
	break;
}
break;
case 755:
switch(s[i]) {
case '0':
	state = 1511;
	break;
case '1':
	state = 1512;
	break;
}
break;
case 756:
switch(s[i]) {
case '0':
	state = 1513;
	break;
case '1':
	state = 1514;
	break;
}
break;
case 757:
switch(s[i]) {
case '0':
	state = 1515;
	break;
case '1':
	state = 1516;
	break;
}
break;
case 758:
switch(s[i]) {
case '0':
	state = 1517;
	break;
case '1':
	state = 1518;
	break;
}
break;
case 759:
switch(s[i]) {
case '0':
	state = 1519;
	break;
case '1':
	state = 1520;
	break;
}
break;
case 760:
switch(s[i]) {
case '0':
	state = 1521;
	break;
case '1':
	state = 1522;
	break;
}
break;
case 761:
switch(s[i]) {
case '0':
	state = 1523;
	break;
case '1':
	state = 1524;
	break;
}
break;
case 762:
switch(s[i]) {
case '0':
	state = 1525;
	break;
case '1':
	state = 1526;
	break;
}
break;
case 763:
switch(s[i]) {
case '0':
	state = 1527;
	break;
case '1':
	state = 1528;
	break;
}
break;
case 764:
switch(s[i]) {
case '0':
	state = 1529;
	break;
case '1':
	state = 1530;
	break;
}
break;
case 765:
switch(s[i]) {
case '0':
	state = 1531;
	break;
case '1':
	state = 1532;
	break;
}
break;
case 766:
switch(s[i]) {
case '0':
	state = 1533;
	break;
case '1':
	state = 1534;
	break;
}
break;
case 767:
switch(s[i]) {
case '0':
	state = 1535;
	break;
case '1':
	state = 1536;
	break;
}
break;
case 768:
switch(s[i]) {
case '0':
	state = 1537;
	break;
case '1':
	state = 1538;
	break;
}
break;
case 769:
switch(s[i]) {
case '0':
	state = 1539;
	break;
case '1':
	state = 1540;
	break;
}
break;
case 770:
switch(s[i]) {
case '0':
	state = 1541;
	break;
case '1':
	state = 1542;
	break;
}
break;
case 771:
switch(s[i]) {
case '0':
	state = 1543;
	break;
case '1':
	state = 1544;
	break;
}
break;
case 772:
switch(s[i]) {
case '0':
	state = 1545;
	break;
case '1':
	state = 1546;
	break;
}
break;
case 773:
switch(s[i]) {
case '0':
	state = 1547;
	break;
case '1':
	state = 1548;
	break;
}
break;
case 774:
switch(s[i]) {
case '0':
	state = 1549;
	break;
case '1':
	state = 1550;
	break;
}
break;
case 775:
switch(s[i]) {
case '0':
	state = 1551;
	break;
case '1':
	state = 1552;
	break;
}
break;
case 776:
switch(s[i]) {
case '0':
	state = 1553;
	break;
case '1':
	state = 1554;
	break;
}
break;
case 777:
switch(s[i]) {
case '0':
	state = 1555;
	break;
case '1':
	state = 1556;
	break;
}
break;
case 778:
switch(s[i]) {
case '0':
	state = 1557;
	break;
case '1':
	state = 1558;
	break;
}
break;
case 779:
switch(s[i]) {
case '0':
	state = 1559;
	break;
case '1':
	state = 1560;
	break;
}
break;
case 780:
switch(s[i]) {
case '0':
	state = 1561;
	break;
case '1':
	state = 1562;
	break;
}
break;
case 781:
switch(s[i]) {
case '0':
	state = 1563;
	break;
case '1':
	state = 1564;
	break;
}
break;
case 782:
switch(s[i]) {
case '0':
	state = 1565;
	break;
case '1':
	state = 1566;
	break;
}
break;
case 783:
switch(s[i]) {
case '0':
	state = 1567;
	break;
case '1':
	state = 1568;
	break;
}
break;
case 784:
switch(s[i]) {
case '0':
	state = 1569;
	break;
case '1':
	state = 1570;
	break;
}
break;
case 785:
switch(s[i]) {
case '0':
	state = 1571;
	break;
case '1':
	state = 1572;
	break;
}
break;
case 786:
switch(s[i]) {
case '0':
	state = 1573;
	break;
case '1':
	state = 1574;
	break;
}
break;
case 787:
switch(s[i]) {
case '0':
	state = 1575;
	break;
case '1':
	state = 1576;
	break;
}
break;
case 788:
switch(s[i]) {
case '0':
	state = 1577;
	break;
case '1':
	state = 1578;
	break;
}
break;
case 789:
switch(s[i]) {
case '0':
	state = 1579;
	break;
case '1':
	state = 1580;
	break;
}
break;
case 790:
switch(s[i]) {
case '0':
	state = 1581;
	break;
case '1':
	state = 1582;
	break;
}
break;
case 791:
switch(s[i]) {
case '0':
	state = 1583;
	break;
case '1':
	state = 1584;
	break;
}
break;
case 792:
switch(s[i]) {
case '0':
	state = 1585;
	break;
case '1':
	state = 1586;
	break;
}
break;
case 793:
switch(s[i]) {
case '0':
	state = 1587;
	break;
case '1':
	state = 1588;
	break;
}
break;
case 794:
switch(s[i]) {
case '0':
	state = 1589;
	break;
case '1':
	state = 1590;
	break;
}
break;
case 795:
switch(s[i]) {
case '0':
	state = 1591;
	break;
case '1':
	state = 1592;
	break;
}
break;
case 796:
switch(s[i]) {
case '0':
	state = 1593;
	break;
case '1':
	state = 1594;
	break;
}
break;
case 797:
switch(s[i]) {
case '0':
	state = 1595;
	break;
case '1':
	state = 1596;
	break;
}
break;
case 798:
switch(s[i]) {
case '0':
	state = 1597;
	break;
case '1':
	state = 1598;
	break;
}
break;
case 799:
switch(s[i]) {
case '0':
	state = 1599;
	break;
case '1':
	state = 1600;
	break;
}
break;
case 800:
switch(s[i]) {
case '0':
	state = 1601;
	break;
case '1':
	state = 1602;
	break;
}
break;
case 801:
switch(s[i]) {
case '0':
	state = 1603;
	break;
case '1':
	state = 1604;
	break;
}
break;
case 802:
switch(s[i]) {
case '0':
	state = 1605;
	break;
case '1':
	state = 1606;
	break;
}
break;
case 803:
switch(s[i]) {
case '0':
	state = 1607;
	break;
case '1':
	state = 1608;
	break;
}
break;
case 804:
switch(s[i]) {
case '0':
	state = 1609;
	break;
case '1':
	state = 1610;
	break;
}
break;
case 805:
switch(s[i]) {
case '0':
	state = 1611;
	break;
case '1':
	state = 1612;
	break;
}
break;
case 806:
switch(s[i]) {
case '0':
	state = 1613;
	break;
case '1':
	state = 1614;
	break;
}
break;
case 807:
switch(s[i]) {
case '0':
	state = 1615;
	break;
case '1':
	state = 1616;
	break;
}
break;
case 808:
switch(s[i]) {
case '0':
	state = 1617;
	break;
case '1':
	state = 1618;
	break;
}
break;
case 809:
switch(s[i]) {
case '0':
	state = 1619;
	break;
case '1':
	state = 1620;
	break;
}
break;
case 810:
switch(s[i]) {
case '0':
	state = 1621;
	break;
case '1':
	state = 1622;
	break;
}
break;
case 811:
switch(s[i]) {
case '0':
	state = 1623;
	break;
case '1':
	state = 1624;
	break;
}
break;
case 812:
switch(s[i]) {
case '0':
	state = 1625;
	break;
case '1':
	state = 1626;
	break;
}
break;
case 813:
switch(s[i]) {
case '0':
	state = 1627;
	break;
case '1':
	state = 1628;
	break;
}
break;
case 814:
switch(s[i]) {
case '0':
	state = 1629;
	break;
case '1':
	state = 1630;
	break;
}
break;
case 815:
switch(s[i]) {
case '0':
	state = 1631;
	break;
case '1':
	state = 1632;
	break;
}
break;
case 816:
switch(s[i]) {
case '0':
	state = 1633;
	break;
case '1':
	state = 1634;
	break;
}
break;
case 817:
switch(s[i]) {
case '0':
	state = 1635;
	break;
case '1':
	state = 1636;
	break;
}
break;
case 818:
switch(s[i]) {
case '0':
	state = 1637;
	break;
case '1':
	state = 1638;
	break;
}
break;
case 819:
switch(s[i]) {
case '0':
	state = 1639;
	break;
case '1':
	state = 1640;
	break;
}
break;
case 820:
switch(s[i]) {
case '0':
	state = 1641;
	break;
case '1':
	state = 1642;
	break;
}
break;
case 821:
switch(s[i]) {
case '0':
	state = 1643;
	break;
case '1':
	state = 1644;
	break;
}
break;
case 822:
switch(s[i]) {
case '0':
	state = 1645;
	break;
case '1':
	state = 1646;
	break;
}
break;
case 823:
switch(s[i]) {
case '0':
	state = 1647;
	break;
case '1':
	state = 1648;
	break;
}
break;
case 824:
switch(s[i]) {
case '0':
	state = 1649;
	break;
case '1':
	state = 1650;
	break;
}
break;
case 825:
switch(s[i]) {
case '0':
	state = 1651;
	break;
case '1':
	state = 1652;
	break;
}
break;
case 826:
switch(s[i]) {
case '0':
	state = 1653;
	break;
case '1':
	state = 1654;
	break;
}
break;
case 827:
switch(s[i]) {
case '0':
	state = 1655;
	break;
case '1':
	state = 1656;
	break;
}
break;
case 828:
switch(s[i]) {
case '0':
	state = 1657;
	break;
case '1':
	state = 1658;
	break;
}
break;
case 829:
switch(s[i]) {
case '0':
	state = 1659;
	break;
case '1':
	state = 1660;
	break;
}
break;
case 830:
switch(s[i]) {
case '0':
	state = 1661;
	break;
case '1':
	state = 1662;
	break;
}
break;
case 831:
switch(s[i]) {
case '0':
	state = 1663;
	break;
case '1':
	state = 1664;
	break;
}
break;
case 832:
switch(s[i]) {
case '0':
	state = 1665;
	break;
case '1':
	state = 1666;
	break;
}
break;
case 833:
switch(s[i]) {
case '0':
	state = 1667;
	break;
case '1':
	state = 1668;
	break;
}
break;
case 834:
switch(s[i]) {
case '0':
	state = 1669;
	break;
case '1':
	state = 1670;
	break;
}
break;
case 835:
switch(s[i]) {
case '0':
	state = 1671;
	break;
case '1':
	state = 1672;
	break;
}
break;
case 836:
switch(s[i]) {
case '0':
	state = 1673;
	break;
case '1':
	state = 1674;
	break;
}
break;
case 837:
switch(s[i]) {
case '0':
	state = 1675;
	break;
case '1':
	state = 1676;
	break;
}
break;
case 838:
switch(s[i]) {
case '0':
	state = 1677;
	break;
case '1':
	state = 1678;
	break;
}
break;
case 839:
switch(s[i]) {
case '0':
	state = 1679;
	break;
case '1':
	state = 1680;
	break;
}
break;
case 840:
switch(s[i]) {
case '0':
	state = 1681;
	break;
case '1':
	state = 1682;
	break;
}
break;
case 841:
switch(s[i]) {
case '0':
	state = 1683;
	break;
case '1':
	state = 1684;
	break;
}
break;
case 842:
switch(s[i]) {
case '0':
	state = 1685;
	break;
case '1':
	state = 1686;
	break;
}
break;
case 843:
switch(s[i]) {
case '0':
	state = 1687;
	break;
case '1':
	state = 1688;
	break;
}
break;
case 844:
switch(s[i]) {
case '0':
	state = 1689;
	break;
case '1':
	state = 1690;
	break;
}
break;
case 845:
switch(s[i]) {
case '0':
	state = 1691;
	break;
case '1':
	state = 1692;
	break;
}
break;
case 846:
switch(s[i]) {
case '0':
	state = 1693;
	break;
case '1':
	state = 1694;
	break;
}
break;
case 847:
switch(s[i]) {
case '0':
	state = 1695;
	break;
case '1':
	state = 1696;
	break;
}
break;
case 848:
switch(s[i]) {
case '0':
	state = 1697;
	break;
case '1':
	state = 1698;
	break;
}
break;
case 849:
switch(s[i]) {
case '0':
	state = 1699;
	break;
case '1':
	state = 1700;
	break;
}
break;
case 850:
switch(s[i]) {
case '0':
	state = 1701;
	break;
case '1':
	state = 1702;
	break;
}
break;
case 851:
switch(s[i]) {
case '0':
	state = 1703;
	break;
case '1':
	state = 1704;
	break;
}
break;
case 852:
switch(s[i]) {
case '0':
	state = 1705;
	break;
case '1':
	state = 1706;
	break;
}
break;
case 853:
switch(s[i]) {
case '0':
	state = 1707;
	break;
case '1':
	state = 1708;
	break;
}
break;
case 854:
switch(s[i]) {
case '0':
	state = 1709;
	break;
case '1':
	state = 1710;
	break;
}
break;
case 855:
switch(s[i]) {
case '0':
	state = 1711;
	break;
case '1':
	state = 1712;
	break;
}
break;
case 856:
switch(s[i]) {
case '0':
	state = 1713;
	break;
case '1':
	state = 1714;
	break;
}
break;
case 857:
switch(s[i]) {
case '0':
	state = 1715;
	break;
case '1':
	state = 1716;
	break;
}
break;
case 858:
switch(s[i]) {
case '0':
	state = 1717;
	break;
case '1':
	state = 1718;
	break;
}
break;
case 859:
switch(s[i]) {
case '0':
	state = 1719;
	break;
case '1':
	state = 1720;
	break;
}
break;
case 860:
switch(s[i]) {
case '0':
	state = 1721;
	break;
case '1':
	state = 1722;
	break;
}
break;
case 861:
switch(s[i]) {
case '0':
	state = 1723;
	break;
case '1':
	state = 1724;
	break;
}
break;
case 862:
switch(s[i]) {
case '0':
	state = 1725;
	break;
case '1':
	state = 1726;
	break;
}
break;
case 863:
switch(s[i]) {
case '0':
	state = 1727;
	break;
case '1':
	state = 1728;
	break;
}
break;
case 864:
switch(s[i]) {
case '0':
	state = 1729;
	break;
case '1':
	state = 1730;
	break;
}
break;
case 865:
switch(s[i]) {
case '0':
	state = 1731;
	break;
case '1':
	state = 1732;
	break;
}
break;
case 866:
switch(s[i]) {
case '0':
	state = 1733;
	break;
case '1':
	state = 1734;
	break;
}
break;
case 867:
switch(s[i]) {
case '0':
	state = 1735;
	break;
case '1':
	state = 1736;
	break;
}
break;
case 868:
switch(s[i]) {
case '0':
	state = 1737;
	break;
case '1':
	state = 1738;
	break;
}
break;
case 869:
switch(s[i]) {
case '0':
	state = 1739;
	break;
case '1':
	state = 1740;
	break;
}
break;
case 870:
switch(s[i]) {
case '0':
	state = 1741;
	break;
case '1':
	state = 1742;
	break;
}
break;
case 871:
switch(s[i]) {
case '0':
	state = 1743;
	break;
case '1':
	state = 1744;
	break;
}
break;
case 872:
switch(s[i]) {
case '0':
	state = 1745;
	break;
case '1':
	state = 1746;
	break;
}
break;
case 873:
switch(s[i]) {
case '0':
	state = 1747;
	break;
case '1':
	state = 1748;
	break;
}
break;
case 874:
switch(s[i]) {
case '0':
	state = 1749;
	break;
case '1':
	state = 1750;
	break;
}
break;
case 875:
switch(s[i]) {
case '0':
	state = 1751;
	break;
case '1':
	state = 1752;
	break;
}
break;
case 876:
switch(s[i]) {
case '0':
	state = 1753;
	break;
case '1':
	state = 1754;
	break;
}
break;
case 877:
switch(s[i]) {
case '0':
	state = 1755;
	break;
case '1':
	state = 1756;
	break;
}
break;
case 878:
switch(s[i]) {
case '0':
	state = 1757;
	break;
case '1':
	state = 1758;
	break;
}
break;
case 879:
switch(s[i]) {
case '0':
	state = 1759;
	break;
case '1':
	state = 1760;
	break;
}
break;
case 880:
switch(s[i]) {
case '0':
	state = 1761;
	break;
case '1':
	state = 1762;
	break;
}
break;
case 881:
switch(s[i]) {
case '0':
	state = 1763;
	break;
case '1':
	state = 1764;
	break;
}
break;
case 882:
switch(s[i]) {
case '0':
	state = 1765;
	break;
case '1':
	state = 1766;
	break;
}
break;
case 883:
switch(s[i]) {
case '0':
	state = 1767;
	break;
case '1':
	state = 1768;
	break;
}
break;
case 884:
switch(s[i]) {
case '0':
	state = 1769;
	break;
case '1':
	state = 1770;
	break;
}
break;
case 885:
switch(s[i]) {
case '0':
	state = 1771;
	break;
case '1':
	state = 1772;
	break;
}
break;
case 886:
switch(s[i]) {
case '0':
	state = 1773;
	break;
case '1':
	state = 1774;
	break;
}
break;
case 887:
switch(s[i]) {
case '0':
	state = 1775;
	break;
case '1':
	state = 1776;
	break;
}
break;
case 888:
switch(s[i]) {
case '0':
	state = 1777;
	break;
case '1':
	state = 1778;
	break;
}
break;
case 889:
switch(s[i]) {
case '0':
	state = 1779;
	break;
case '1':
	state = 1780;
	break;
}
break;
case 890:
switch(s[i]) {
case '0':
	state = 1781;
	break;
case '1':
	state = 1782;
	break;
}
break;
case 891:
switch(s[i]) {
case '0':
	state = 1783;
	break;
case '1':
	state = 1784;
	break;
}
break;
case 892:
switch(s[i]) {
case '0':
	state = 1785;
	break;
case '1':
	state = 1786;
	break;
}
break;
case 893:
switch(s[i]) {
case '0':
	state = 1787;
	break;
case '1':
	state = 1788;
	break;
}
break;
case 894:
switch(s[i]) {
case '0':
	state = 1789;
	break;
case '1':
	state = 1790;
	break;
}
break;
case 895:
switch(s[i]) {
case '0':
	state = 1791;
	break;
case '1':
	state = 1792;
	break;
}
break;
case 896:
switch(s[i]) {
case '0':
	state = 1793;
	break;
case '1':
	state = 1794;
	break;
}
break;
case 897:
switch(s[i]) {
case '0':
	state = 1795;
	break;
case '1':
	state = 1796;
	break;
}
break;
case 898:
switch(s[i]) {
case '0':
	state = 1797;
	break;
case '1':
	state = 1798;
	break;
}
break;
case 899:
switch(s[i]) {
case '0':
	state = 1799;
	break;
case '1':
	state = 1800;
	break;
}
break;
case 900:
switch(s[i]) {
case '0':
	state = 1801;
	break;
case '1':
	state = 1802;
	break;
}
break;
case 901:
switch(s[i]) {
case '0':
	state = 1803;
	break;
case '1':
	state = 1804;
	break;
}
break;
case 902:
switch(s[i]) {
case '0':
	state = 1805;
	break;
case '1':
	state = 1806;
	break;
}
break;
case 903:
switch(s[i]) {
case '0':
	state = 1807;
	break;
case '1':
	state = 1808;
	break;
}
break;
case 904:
switch(s[i]) {
case '0':
	state = 1809;
	break;
case '1':
	state = 1810;
	break;
}
break;
case 905:
switch(s[i]) {
case '0':
	state = 1811;
	break;
case '1':
	state = 1812;
	break;
}
break;
case 906:
switch(s[i]) {
case '0':
	state = 1813;
	break;
case '1':
	state = 1814;
	break;
}
break;
case 907:
switch(s[i]) {
case '0':
	state = 1815;
	break;
case '1':
	state = 1816;
	break;
}
break;
case 908:
switch(s[i]) {
case '0':
	state = 1817;
	break;
case '1':
	state = 1818;
	break;
}
break;
case 909:
switch(s[i]) {
case '0':
	state = 1819;
	break;
case '1':
	state = 1820;
	break;
}
break;
case 910:
switch(s[i]) {
case '0':
	state = 1821;
	break;
case '1':
	state = 1822;
	break;
}
break;
case 911:
switch(s[i]) {
case '0':
	state = 1823;
	break;
case '1':
	state = 1824;
	break;
}
break;
case 912:
switch(s[i]) {
case '0':
	state = 1825;
	break;
case '1':
	state = 1826;
	break;
}
break;
case 913:
switch(s[i]) {
case '0':
	state = 1827;
	break;
case '1':
	state = 1828;
	break;
}
break;
case 914:
switch(s[i]) {
case '0':
	state = 1829;
	break;
case '1':
	state = 1830;
	break;
}
break;
case 915:
switch(s[i]) {
case '0':
	state = 1831;
	break;
case '1':
	state = 1832;
	break;
}
break;
case 916:
switch(s[i]) {
case '0':
	state = 1833;
	break;
case '1':
	state = 1834;
	break;
}
break;
case 917:
switch(s[i]) {
case '0':
	state = 1835;
	break;
case '1':
	state = 1836;
	break;
}
break;
case 918:
switch(s[i]) {
case '0':
	state = 1837;
	break;
case '1':
	state = 1838;
	break;
}
break;
case 919:
switch(s[i]) {
case '0':
	state = 1839;
	break;
case '1':
	state = 1840;
	break;
}
break;
case 920:
switch(s[i]) {
case '0':
	state = 1841;
	break;
case '1':
	state = 1842;
	break;
}
break;
case 921:
switch(s[i]) {
case '0':
	state = 1843;
	break;
case '1':
	state = 1844;
	break;
}
break;
case 922:
switch(s[i]) {
case '0':
	state = 1845;
	break;
case '1':
	state = 1846;
	break;
}
break;
case 923:
switch(s[i]) {
case '0':
	state = 1847;
	break;
case '1':
	state = 1848;
	break;
}
break;
case 924:
switch(s[i]) {
case '0':
	state = 1849;
	break;
case '1':
	state = 1850;
	break;
}
break;
case 925:
switch(s[i]) {
case '0':
	state = 1851;
	break;
case '1':
	state = 1852;
	break;
}
break;
case 926:
switch(s[i]) {
case '0':
	state = 1853;
	break;
case '1':
	state = 1854;
	break;
}
break;
case 927:
switch(s[i]) {
case '0':
	state = 1855;
	break;
case '1':
	state = 1856;
	break;
}
break;
case 928:
switch(s[i]) {
case '0':
	state = 1857;
	break;
case '1':
	state = 1858;
	break;
}
break;
case 929:
switch(s[i]) {
case '0':
	state = 1859;
	break;
case '1':
	state = 1860;
	break;
}
break;
case 930:
switch(s[i]) {
case '0':
	state = 1861;
	break;
case '1':
	state = 1862;
	break;
}
break;
case 931:
switch(s[i]) {
case '0':
	state = 1863;
	break;
case '1':
	state = 1864;
	break;
}
break;
case 932:
switch(s[i]) {
case '0':
	state = 1865;
	break;
case '1':
	state = 1866;
	break;
}
break;
case 933:
switch(s[i]) {
case '0':
	state = 1867;
	break;
case '1':
	state = 1868;
	break;
}
break;
case 934:
switch(s[i]) {
case '0':
	state = 1869;
	break;
case '1':
	state = 1870;
	break;
}
break;
case 935:
switch(s[i]) {
case '0':
	state = 1871;
	break;
case '1':
	state = 1872;
	break;
}
break;
case 936:
switch(s[i]) {
case '0':
	state = 1873;
	break;
case '1':
	state = 1874;
	break;
}
break;
case 937:
switch(s[i]) {
case '0':
	state = 1875;
	break;
case '1':
	state = 1876;
	break;
}
break;
case 938:
switch(s[i]) {
case '0':
	state = 1877;
	break;
case '1':
	state = 1878;
	break;
}
break;
case 939:
switch(s[i]) {
case '0':
	state = 1879;
	break;
case '1':
	state = 1880;
	break;
}
break;
case 940:
switch(s[i]) {
case '0':
	state = 1881;
	break;
case '1':
	state = 1882;
	break;
}
break;
case 941:
switch(s[i]) {
case '0':
	state = 1883;
	break;
case '1':
	state = 1884;
	break;
}
break;
case 942:
switch(s[i]) {
case '0':
	state = 1885;
	break;
case '1':
	state = 1886;
	break;
}
break;
case 943:
switch(s[i]) {
case '0':
	state = 1887;
	break;
case '1':
	state = 1888;
	break;
}
break;
case 944:
switch(s[i]) {
case '0':
	state = 1889;
	break;
case '1':
	state = 1890;
	break;
}
break;
case 945:
switch(s[i]) {
case '0':
	state = 1891;
	break;
case '1':
	state = 1892;
	break;
}
break;
case 946:
switch(s[i]) {
case '0':
	state = 1893;
	break;
case '1':
	state = 1894;
	break;
}
break;
case 947:
switch(s[i]) {
case '0':
	state = 1895;
	break;
case '1':
	state = 1896;
	break;
}
break;
case 948:
switch(s[i]) {
case '0':
	state = 1897;
	break;
case '1':
	state = 1898;
	break;
}
break;
case 949:
switch(s[i]) {
case '0':
	state = 1899;
	break;
case '1':
	state = 1900;
	break;
}
break;
case 950:
switch(s[i]) {
case '0':
	state = 1901;
	break;
case '1':
	state = 1902;
	break;
}
break;
case 951:
switch(s[i]) {
case '0':
	state = 1903;
	break;
case '1':
	state = 1904;
	break;
}
break;
case 952:
switch(s[i]) {
case '0':
	state = 1905;
	break;
case '1':
	state = 1906;
	break;
}
break;
case 953:
switch(s[i]) {
case '0':
	state = 1907;
	break;
case '1':
	state = 1908;
	break;
}
break;
case 954:
switch(s[i]) {
case '0':
	state = 1909;
	break;
case '1':
	state = 1910;
	break;
}
break;
case 955:
switch(s[i]) {
case '0':
	state = 1911;
	break;
case '1':
	state = 1912;
	break;
}
break;
case 956:
switch(s[i]) {
case '0':
	state = 1913;
	break;
case '1':
	state = 1914;
	break;
}
break;
case 957:
switch(s[i]) {
case '0':
	state = 1915;
	break;
case '1':
	state = 1916;
	break;
}
break;
case 958:
switch(s[i]) {
case '0':
	state = 1917;
	break;
case '1':
	state = 1918;
	break;
}
break;
case 959:
switch(s[i]) {
case '0':
	state = 1919;
	break;
case '1':
	state = 1920;
	break;
}
break;
case 960:
switch(s[i]) {
case '0':
	state = 1921;
	break;
case '1':
	state = 1922;
	break;
}
break;
case 961:
switch(s[i]) {
case '0':
	state = 1923;
	break;
case '1':
	state = 1924;
	break;
}
break;
case 962:
switch(s[i]) {
case '0':
	state = 1925;
	break;
case '1':
	state = 1926;
	break;
}
break;
case 963:
switch(s[i]) {
case '0':
	state = 1927;
	break;
case '1':
	state = 1928;
	break;
}
break;
case 964:
switch(s[i]) {
case '0':
	state = 1929;
	break;
case '1':
	state = 1930;
	break;
}
break;
case 965:
switch(s[i]) {
case '0':
	state = 1931;
	break;
case '1':
	state = 1932;
	break;
}
break;
case 966:
switch(s[i]) {
case '0':
	state = 1933;
	break;
case '1':
	state = 1934;
	break;
}
break;
case 967:
switch(s[i]) {
case '0':
	state = 1935;
	break;
case '1':
	state = 1936;
	break;
}
break;
case 968:
switch(s[i]) {
case '0':
	state = 1937;
	break;
case '1':
	state = 1938;
	break;
}
break;
case 969:
switch(s[i]) {
case '0':
	state = 1939;
	break;
case '1':
	state = 1940;
	break;
}
break;
case 970:
switch(s[i]) {
case '0':
	state = 1941;
	break;
case '1':
	state = 1942;
	break;
}
break;
case 971:
switch(s[i]) {
case '0':
	state = 1943;
	break;
case '1':
	state = 1944;
	break;
}
break;
case 972:
switch(s[i]) {
case '0':
	state = 1945;
	break;
case '1':
	state = 1946;
	break;
}
break;
case 973:
switch(s[i]) {
case '0':
	state = 1947;
	break;
case '1':
	state = 1948;
	break;
}
break;
case 974:
switch(s[i]) {
case '0':
	state = 1949;
	break;
case '1':
	state = 1950;
	break;
}
break;
case 975:
switch(s[i]) {
case '0':
	state = 1951;
	break;
case '1':
	state = 1952;
	break;
}
break;
case 976:
switch(s[i]) {
case '0':
	state = 1953;
	break;
case '1':
	state = 1954;
	break;
}
break;
case 977:
switch(s[i]) {
case '0':
	state = 1955;
	break;
case '1':
	state = 1956;
	break;
}
break;
case 978:
switch(s[i]) {
case '0':
	state = 1957;
	break;
case '1':
	state = 1958;
	break;
}
break;
case 979:
switch(s[i]) {
case '0':
	state = 1959;
	break;
case '1':
	state = 1960;
	break;
}
break;
case 980:
switch(s[i]) {
case '0':
	state = 1961;
	break;
case '1':
	state = 1962;
	break;
}
break;
case 981:
switch(s[i]) {
case '0':
	state = 1963;
	break;
case '1':
	state = 1964;
	break;
}
break;
case 982:
switch(s[i]) {
case '0':
	state = 1965;
	break;
case '1':
	state = 1966;
	break;
}
break;
case 983:
switch(s[i]) {
case '0':
	state = 1967;
	break;
case '1':
	state = 1968;
	break;
}
break;
case 984:
switch(s[i]) {
case '0':
	state = 1969;
	break;
case '1':
	state = 1970;
	break;
}
break;
case 985:
switch(s[i]) {
case '0':
	state = 1971;
	break;
case '1':
	state = 1972;
	break;
}
break;
case 986:
switch(s[i]) {
case '0':
	state = 1973;
	break;
case '1':
	state = 1974;
	break;
}
break;
case 987:
switch(s[i]) {
case '0':
	state = 1975;
	break;
case '1':
	state = 1976;
	break;
}
break;
case 988:
switch(s[i]) {
case '0':
	state = 1977;
	break;
case '1':
	state = 1978;
	break;
}
break;
case 989:
switch(s[i]) {
case '0':
	state = 1979;
	break;
case '1':
	state = 1980;
	break;
}
break;
case 990:
switch(s[i]) {
case '0':
	state = 1981;
	break;
case '1':
	state = 1982;
	break;
}
break;
case 991:
switch(s[i]) {
case '0':
	state = 1983;
	break;
case '1':
	state = 1984;
	break;
}
break;
case 992:
switch(s[i]) {
case '0':
	state = 1985;
	break;
case '1':
	state = 1986;
	break;
}
break;
case 993:
switch(s[i]) {
case '0':
	state = 1987;
	break;
case '1':
	state = 1988;
	break;
}
break;
case 994:
switch(s[i]) {
case '0':
	state = 1989;
	break;
case '1':
	state = 1990;
	break;
}
break;
case 995:
switch(s[i]) {
case '0':
	state = 1991;
	break;
case '1':
	state = 1992;
	break;
}
break;
case 996:
switch(s[i]) {
case '0':
	state = 1993;
	break;
case '1':
	state = 1994;
	break;
}
break;
case 997:
switch(s[i]) {
case '0':
	state = 1995;
	break;
case '1':
	state = 1996;
	break;
}
break;
case 998:
switch(s[i]) {
case '0':
	state = 1997;
	break;
case '1':
	state = 1998;
	break;
}
break;
case 999:
switch(s[i]) {
case '0':
	state = 1999;
	break;
case '1':
	state = 2000;
	break;
}
break;
case 1000:
switch(s[i]) {
case '0':
	state = 2001;
	break;
case '1':
	state = 2002;
	break;
}
break;
case 1001:
switch(s[i]) {
case '0':
	state = 2003;
	break;
case '1':
	state = 2004;
	break;
}
break;
case 1002:
switch(s[i]) {
case '0':
	state = 2005;
	break;
case '1':
	state = 2006;
	break;
}
break;
case 1003:
switch(s[i]) {
case '0':
	state = 2007;
	break;
case '1':
	state = 2008;
	break;
}
break;
case 1004:
switch(s[i]) {
case '0':
	state = 2009;
	break;
case '1':
	state = 2010;
	break;
}
break;
case 1005:
switch(s[i]) {
case '0':
	state = 2011;
	break;
case '1':
	state = 2012;
	break;
}
break;
case 1006:
switch(s[i]) {
case '0':
	state = 2013;
	break;
case '1':
	state = 2014;
	break;
}
break;
case 1007:
switch(s[i]) {
case '0':
	state = 2015;
	break;
case '1':
	state = 2016;
	break;
}
break;
case 1008:
switch(s[i]) {
case '0':
	state = 2017;
	break;
case '1':
	state = 2018;
	break;
}
break;
case 1009:
switch(s[i]) {
case '0':
	state = 2019;
	break;
case '1':
	state = 2020;
	break;
}
break;
case 1010:
switch(s[i]) {
case '0':
	state = 2021;
	break;
case '1':
	state = 2022;
	break;
}
break;
case 1011:
switch(s[i]) {
case '0':
	state = 2023;
	break;
case '1':
	state = 2024;
	break;
}
break;
case 1012:
switch(s[i]) {
case '0':
	state = 2025;
	break;
case '1':
	state = 2026;
	break;
}
break;
case 1013:
switch(s[i]) {
case '0':
	state = 2027;
	break;
case '1':
	state = 2028;
	break;
}
break;
case 1014:
switch(s[i]) {
case '0':
	state = 2029;
	break;
case '1':
	state = 2030;
	break;
}
break;
case 1015:
switch(s[i]) {
case '0':
	state = 2031;
	break;
case '1':
	state = 2032;
	break;
}
break;
case 1016:
switch(s[i]) {
case '0':
	state = 2033;
	break;
case '1':
	state = 2034;
	break;
}
break;
case 1017:
switch(s[i]) {
case '0':
	state = 2035;
	break;
case '1':
	state = 2036;
	break;
}
break;
case 1018:
switch(s[i]) {
case '0':
	state = 2037;
	break;
case '1':
	state = 2038;
	break;
}
break;
case 1019:
switch(s[i]) {
case '0':
	state = 2039;
	break;
case '1':
	state = 2040;
	break;
}
break;
case 1020:
switch(s[i]) {
case '0':
	state = 2041;
	break;
case '1':
	state = 2042;
	break;
}
break;
case 1021:
switch(s[i]) {
case '0':
	state = 2043;
	break;
case '1':
	state = 2044;
	break;
}
break;
case 1022:
switch(s[i]) {
case '0':
	state = 2045;
	break;
case '1':
	state = 2046;
	break;
}
break;
case 1023:
switch(s[i]) {
case '0':
	state = 1023;
	break;
case '1':
	state = 1024;
	break;
}
break;
case 1024:
switch(s[i]) {
case '0':
	state = 1025;
	break;
case '1':
	state = 1026;
	break;
}
break;
case 1025:
switch(s[i]) {
case '0':
	state = 1027;
	break;
case '1':
	state = 1028;
	break;
}
break;
case 1026:
switch(s[i]) {
case '0':
	state = 1029;
	break;
case '1':
	state = 1030;
	break;
}
break;
case 1027:
switch(s[i]) {
case '0':
	state = 1031;
	break;
case '1':
	state = 1032;
	break;
}
break;
case 1028:
switch(s[i]) {
case '0':
	state = 1033;
	break;
case '1':
	state = 1034;
	break;
}
break;
case 1029:
switch(s[i]) {
case '0':
	state = 1035;
	break;
case '1':
	state = 1036;
	break;
}
break;
case 1030:
switch(s[i]) {
case '0':
	state = 1037;
	break;
case '1':
	state = 1038;
	break;
}
break;
case 1031:
switch(s[i]) {
case '0':
	state = 1039;
	break;
case '1':
	state = 1040;
	break;
}
break;
case 1032:
switch(s[i]) {
case '0':
	state = 1041;
	break;
case '1':
	state = 1042;
	break;
}
break;
case 1033:
switch(s[i]) {
case '0':
	state = 1043;
	break;
case '1':
	state = 1044;
	break;
}
break;
case 1034:
switch(s[i]) {
case '0':
	state = 1045;
	break;
case '1':
	state = 1046;
	break;
}
break;
case 1035:
switch(s[i]) {
case '0':
	state = 1047;
	break;
case '1':
	state = 1048;
	break;
}
break;
case 1036:
switch(s[i]) {
case '0':
	state = 1049;
	break;
case '1':
	state = 1050;
	break;
}
break;
case 1037:
switch(s[i]) {
case '0':
	state = 1051;
	break;
case '1':
	state = 1052;
	break;
}
break;
case 1038:
switch(s[i]) {
case '0':
	state = 1053;
	break;
case '1':
	state = 1054;
	break;
}
break;
case 1039:
switch(s[i]) {
case '0':
	state = 1055;
	break;
case '1':
	state = 1056;
	break;
}
break;
case 1040:
switch(s[i]) {
case '0':
	state = 1057;
	break;
case '1':
	state = 1058;
	break;
}
break;
case 1041:
switch(s[i]) {
case '0':
	state = 1059;
	break;
case '1':
	state = 1060;
	break;
}
break;
case 1042:
switch(s[i]) {
case '0':
	state = 1061;
	break;
case '1':
	state = 1062;
	break;
}
break;
case 1043:
switch(s[i]) {
case '0':
	state = 1063;
	break;
case '1':
	state = 1064;
	break;
}
break;
case 1044:
switch(s[i]) {
case '0':
	state = 1065;
	break;
case '1':
	state = 1066;
	break;
}
break;
case 1045:
switch(s[i]) {
case '0':
	state = 1067;
	break;
case '1':
	state = 1068;
	break;
}
break;
case 1046:
switch(s[i]) {
case '0':
	state = 1069;
	break;
case '1':
	state = 1070;
	break;
}
break;
case 1047:
switch(s[i]) {
case '0':
	state = 1071;
	break;
case '1':
	state = 1072;
	break;
}
break;
case 1048:
switch(s[i]) {
case '0':
	state = 1073;
	break;
case '1':
	state = 1074;
	break;
}
break;
case 1049:
switch(s[i]) {
case '0':
	state = 1075;
	break;
case '1':
	state = 1076;
	break;
}
break;
case 1050:
switch(s[i]) {
case '0':
	state = 1077;
	break;
case '1':
	state = 1078;
	break;
}
break;
case 1051:
switch(s[i]) {
case '0':
	state = 1079;
	break;
case '1':
	state = 1080;
	break;
}
break;
case 1052:
switch(s[i]) {
case '0':
	state = 1081;
	break;
case '1':
	state = 1082;
	break;
}
break;
case 1053:
switch(s[i]) {
case '0':
	state = 1083;
	break;
case '1':
	state = 1084;
	break;
}
break;
case 1054:
switch(s[i]) {
case '0':
	state = 1085;
	break;
case '1':
	state = 1086;
	break;
}
break;
case 1055:
switch(s[i]) {
case '0':
	state = 1087;
	break;
case '1':
	state = 1088;
	break;
}
break;
case 1056:
switch(s[i]) {
case '0':
	state = 1089;
	break;
case '1':
	state = 1090;
	break;
}
break;
case 1057:
switch(s[i]) {
case '0':
	state = 1091;
	break;
case '1':
	state = 1092;
	break;
}
break;
case 1058:
switch(s[i]) {
case '0':
	state = 1093;
	break;
case '1':
	state = 1094;
	break;
}
break;
case 1059:
switch(s[i]) {
case '0':
	state = 1095;
	break;
case '1':
	state = 1096;
	break;
}
break;
case 1060:
switch(s[i]) {
case '0':
	state = 1097;
	break;
case '1':
	state = 1098;
	break;
}
break;
case 1061:
switch(s[i]) {
case '0':
	state = 1099;
	break;
case '1':
	state = 1100;
	break;
}
break;
case 1062:
switch(s[i]) {
case '0':
	state = 1101;
	break;
case '1':
	state = 1102;
	break;
}
break;
case 1063:
switch(s[i]) {
case '0':
	state = 1103;
	break;
case '1':
	state = 1104;
	break;
}
break;
case 1064:
switch(s[i]) {
case '0':
	state = 1105;
	break;
case '1':
	state = 1106;
	break;
}
break;
case 1065:
switch(s[i]) {
case '0':
	state = 1107;
	break;
case '1':
	state = 1108;
	break;
}
break;
case 1066:
switch(s[i]) {
case '0':
	state = 1109;
	break;
case '1':
	state = 1110;
	break;
}
break;
case 1067:
switch(s[i]) {
case '0':
	state = 1111;
	break;
case '1':
	state = 1112;
	break;
}
break;
case 1068:
switch(s[i]) {
case '0':
	state = 1113;
	break;
case '1':
	state = 1114;
	break;
}
break;
case 1069:
switch(s[i]) {
case '0':
	state = 1115;
	break;
case '1':
	state = 1116;
	break;
}
break;
case 1070:
switch(s[i]) {
case '0':
	state = 1117;
	break;
case '1':
	state = 1118;
	break;
}
break;
case 1071:
switch(s[i]) {
case '0':
	state = 1119;
	break;
case '1':
	state = 1120;
	break;
}
break;
case 1072:
switch(s[i]) {
case '0':
	state = 1121;
	break;
case '1':
	state = 1122;
	break;
}
break;
case 1073:
switch(s[i]) {
case '0':
	state = 1123;
	break;
case '1':
	state = 1124;
	break;
}
break;
case 1074:
switch(s[i]) {
case '0':
	state = 1125;
	break;
case '1':
	state = 1126;
	break;
}
break;
case 1075:
switch(s[i]) {
case '0':
	state = 1127;
	break;
case '1':
	state = 1128;
	break;
}
break;
case 1076:
switch(s[i]) {
case '0':
	state = 1129;
	break;
case '1':
	state = 1130;
	break;
}
break;
case 1077:
switch(s[i]) {
case '0':
	state = 1131;
	break;
case '1':
	state = 1132;
	break;
}
break;
case 1078:
switch(s[i]) {
case '0':
	state = 1133;
	break;
case '1':
	state = 1134;
	break;
}
break;
case 1079:
switch(s[i]) {
case '0':
	state = 1135;
	break;
case '1':
	state = 1136;
	break;
}
break;
case 1080:
switch(s[i]) {
case '0':
	state = 1137;
	break;
case '1':
	state = 1138;
	break;
}
break;
case 1081:
switch(s[i]) {
case '0':
	state = 1139;
	break;
case '1':
	state = 1140;
	break;
}
break;
case 1082:
switch(s[i]) {
case '0':
	state = 1141;
	break;
case '1':
	state = 1142;
	break;
}
break;
case 1083:
switch(s[i]) {
case '0':
	state = 1143;
	break;
case '1':
	state = 1144;
	break;
}
break;
case 1084:
switch(s[i]) {
case '0':
	state = 1145;
	break;
case '1':
	state = 1146;
	break;
}
break;
case 1085:
switch(s[i]) {
case '0':
	state = 1147;
	break;
case '1':
	state = 1148;
	break;
}
break;
case 1086:
switch(s[i]) {
case '0':
	state = 1149;
	break;
case '1':
	state = 1150;
	break;
}
break;
case 1087:
switch(s[i]) {
case '0':
	state = 1151;
	break;
case '1':
	state = 1152;
	break;
}
break;
case 1088:
switch(s[i]) {
case '0':
	state = 1153;
	break;
case '1':
	state = 1154;
	break;
}
break;
case 1089:
switch(s[i]) {
case '0':
	state = 1155;
	break;
case '1':
	state = 1156;
	break;
}
break;
case 1090:
switch(s[i]) {
case '0':
	state = 1157;
	break;
case '1':
	state = 1158;
	break;
}
break;
case 1091:
switch(s[i]) {
case '0':
	state = 1159;
	break;
case '1':
	state = 1160;
	break;
}
break;
case 1092:
switch(s[i]) {
case '0':
	state = 1161;
	break;
case '1':
	state = 1162;
	break;
}
break;
case 1093:
switch(s[i]) {
case '0':
	state = 1163;
	break;
case '1':
	state = 1164;
	break;
}
break;
case 1094:
switch(s[i]) {
case '0':
	state = 1165;
	break;
case '1':
	state = 1166;
	break;
}
break;
case 1095:
switch(s[i]) {
case '0':
	state = 1167;
	break;
case '1':
	state = 1168;
	break;
}
break;
case 1096:
switch(s[i]) {
case '0':
	state = 1169;
	break;
case '1':
	state = 1170;
	break;
}
break;
case 1097:
switch(s[i]) {
case '0':
	state = 1171;
	break;
case '1':
	state = 1172;
	break;
}
break;
case 1098:
switch(s[i]) {
case '0':
	state = 1173;
	break;
case '1':
	state = 1174;
	break;
}
break;
case 1099:
switch(s[i]) {
case '0':
	state = 1175;
	break;
case '1':
	state = 1176;
	break;
}
break;
case 1100:
switch(s[i]) {
case '0':
	state = 1177;
	break;
case '1':
	state = 1178;
	break;
}
break;
case 1101:
switch(s[i]) {
case '0':
	state = 1179;
	break;
case '1':
	state = 1180;
	break;
}
break;
case 1102:
switch(s[i]) {
case '0':
	state = 1181;
	break;
case '1':
	state = 1182;
	break;
}
break;
case 1103:
switch(s[i]) {
case '0':
	state = 1183;
	break;
case '1':
	state = 1184;
	break;
}
break;
case 1104:
switch(s[i]) {
case '0':
	state = 1185;
	break;
case '1':
	state = 1186;
	break;
}
break;
case 1105:
switch(s[i]) {
case '0':
	state = 1187;
	break;
case '1':
	state = 1188;
	break;
}
break;
case 1106:
switch(s[i]) {
case '0':
	state = 1189;
	break;
case '1':
	state = 1190;
	break;
}
break;
case 1107:
switch(s[i]) {
case '0':
	state = 1191;
	break;
case '1':
	state = 1192;
	break;
}
break;
case 1108:
switch(s[i]) {
case '0':
	state = 1193;
	break;
case '1':
	state = 1194;
	break;
}
break;
case 1109:
switch(s[i]) {
case '0':
	state = 1195;
	break;
case '1':
	state = 1196;
	break;
}
break;
case 1110:
switch(s[i]) {
case '0':
	state = 1197;
	break;
case '1':
	state = 1198;
	break;
}
break;
case 1111:
switch(s[i]) {
case '0':
	state = 1199;
	break;
case '1':
	state = 1200;
	break;
}
break;
case 1112:
switch(s[i]) {
case '0':
	state = 1201;
	break;
case '1':
	state = 1202;
	break;
}
break;
case 1113:
switch(s[i]) {
case '0':
	state = 1203;
	break;
case '1':
	state = 1204;
	break;
}
break;
case 1114:
switch(s[i]) {
case '0':
	state = 1205;
	break;
case '1':
	state = 1206;
	break;
}
break;
case 1115:
switch(s[i]) {
case '0':
	state = 1207;
	break;
case '1':
	state = 1208;
	break;
}
break;
case 1116:
switch(s[i]) {
case '0':
	state = 1209;
	break;
case '1':
	state = 1210;
	break;
}
break;
case 1117:
switch(s[i]) {
case '0':
	state = 1211;
	break;
case '1':
	state = 1212;
	break;
}
break;
case 1118:
switch(s[i]) {
case '0':
	state = 1213;
	break;
case '1':
	state = 1214;
	break;
}
break;
case 1119:
switch(s[i]) {
case '0':
	state = 1215;
	break;
case '1':
	state = 1216;
	break;
}
break;
case 1120:
switch(s[i]) {
case '0':
	state = 1217;
	break;
case '1':
	state = 1218;
	break;
}
break;
case 1121:
switch(s[i]) {
case '0':
	state = 1219;
	break;
case '1':
	state = 1220;
	break;
}
break;
case 1122:
switch(s[i]) {
case '0':
	state = 1221;
	break;
case '1':
	state = 1222;
	break;
}
break;
case 1123:
switch(s[i]) {
case '0':
	state = 1223;
	break;
case '1':
	state = 1224;
	break;
}
break;
case 1124:
switch(s[i]) {
case '0':
	state = 1225;
	break;
case '1':
	state = 1226;
	break;
}
break;
case 1125:
switch(s[i]) {
case '0':
	state = 1227;
	break;
case '1':
	state = 1228;
	break;
}
break;
case 1126:
switch(s[i]) {
case '0':
	state = 1229;
	break;
case '1':
	state = 1230;
	break;
}
break;
case 1127:
switch(s[i]) {
case '0':
	state = 1231;
	break;
case '1':
	state = 1232;
	break;
}
break;
case 1128:
switch(s[i]) {
case '0':
	state = 1233;
	break;
case '1':
	state = 1234;
	break;
}
break;
case 1129:
switch(s[i]) {
case '0':
	state = 1235;
	break;
case '1':
	state = 1236;
	break;
}
break;
case 1130:
switch(s[i]) {
case '0':
	state = 1237;
	break;
case '1':
	state = 1238;
	break;
}
break;
case 1131:
switch(s[i]) {
case '0':
	state = 1239;
	break;
case '1':
	state = 1240;
	break;
}
break;
case 1132:
switch(s[i]) {
case '0':
	state = 1241;
	break;
case '1':
	state = 1242;
	break;
}
break;
case 1133:
switch(s[i]) {
case '0':
	state = 1243;
	break;
case '1':
	state = 1244;
	break;
}
break;
case 1134:
switch(s[i]) {
case '0':
	state = 1245;
	break;
case '1':
	state = 1246;
	break;
}
break;
case 1135:
switch(s[i]) {
case '0':
	state = 1247;
	break;
case '1':
	state = 1248;
	break;
}
break;
case 1136:
switch(s[i]) {
case '0':
	state = 1249;
	break;
case '1':
	state = 1250;
	break;
}
break;
case 1137:
switch(s[i]) {
case '0':
	state = 1251;
	break;
case '1':
	state = 1252;
	break;
}
break;
case 1138:
switch(s[i]) {
case '0':
	state = 1253;
	break;
case '1':
	state = 1254;
	break;
}
break;
case 1139:
switch(s[i]) {
case '0':
	state = 1255;
	break;
case '1':
	state = 1256;
	break;
}
break;
case 1140:
switch(s[i]) {
case '0':
	state = 1257;
	break;
case '1':
	state = 1258;
	break;
}
break;
case 1141:
switch(s[i]) {
case '0':
	state = 1259;
	break;
case '1':
	state = 1260;
	break;
}
break;
case 1142:
switch(s[i]) {
case '0':
	state = 1261;
	break;
case '1':
	state = 1262;
	break;
}
break;
case 1143:
switch(s[i]) {
case '0':
	state = 1263;
	break;
case '1':
	state = 1264;
	break;
}
break;
case 1144:
switch(s[i]) {
case '0':
	state = 1265;
	break;
case '1':
	state = 1266;
	break;
}
break;
case 1145:
switch(s[i]) {
case '0':
	state = 1267;
	break;
case '1':
	state = 1268;
	break;
}
break;
case 1146:
switch(s[i]) {
case '0':
	state = 1269;
	break;
case '1':
	state = 1270;
	break;
}
break;
case 1147:
switch(s[i]) {
case '0':
	state = 1271;
	break;
case '1':
	state = 1272;
	break;
}
break;
case 1148:
switch(s[i]) {
case '0':
	state = 1273;
	break;
case '1':
	state = 1274;
	break;
}
break;
case 1149:
switch(s[i]) {
case '0':
	state = 1275;
	break;
case '1':
	state = 1276;
	break;
}
break;
case 1150:
switch(s[i]) {
case '0':
	state = 1277;
	break;
case '1':
	state = 1278;
	break;
}
break;
case 1151:
switch(s[i]) {
case '0':
	state = 1279;
	break;
case '1':
	state = 1280;
	break;
}
break;
case 1152:
switch(s[i]) {
case '0':
	state = 1281;
	break;
case '1':
	state = 1282;
	break;
}
break;
case 1153:
switch(s[i]) {
case '0':
	state = 1283;
	break;
case '1':
	state = 1284;
	break;
}
break;
case 1154:
switch(s[i]) {
case '0':
	state = 1285;
	break;
case '1':
	state = 1286;
	break;
}
break;
case 1155:
switch(s[i]) {
case '0':
	state = 1287;
	break;
case '1':
	state = 1288;
	break;
}
break;
case 1156:
switch(s[i]) {
case '0':
	state = 1289;
	break;
case '1':
	state = 1290;
	break;
}
break;
case 1157:
switch(s[i]) {
case '0':
	state = 1291;
	break;
case '1':
	state = 1292;
	break;
}
break;
case 1158:
switch(s[i]) {
case '0':
	state = 1293;
	break;
case '1':
	state = 1294;
	break;
}
break;
case 1159:
switch(s[i]) {
case '0':
	state = 1295;
	break;
case '1':
	state = 1296;
	break;
}
break;
case 1160:
switch(s[i]) {
case '0':
	state = 1297;
	break;
case '1':
	state = 1298;
	break;
}
break;
case 1161:
switch(s[i]) {
case '0':
	state = 1299;
	break;
case '1':
	state = 1300;
	break;
}
break;
case 1162:
switch(s[i]) {
case '0':
	state = 1301;
	break;
case '1':
	state = 1302;
	break;
}
break;
case 1163:
switch(s[i]) {
case '0':
	state = 1303;
	break;
case '1':
	state = 1304;
	break;
}
break;
case 1164:
switch(s[i]) {
case '0':
	state = 1305;
	break;
case '1':
	state = 1306;
	break;
}
break;
case 1165:
switch(s[i]) {
case '0':
	state = 1307;
	break;
case '1':
	state = 1308;
	break;
}
break;
case 1166:
switch(s[i]) {
case '0':
	state = 1309;
	break;
case '1':
	state = 1310;
	break;
}
break;
case 1167:
switch(s[i]) {
case '0':
	state = 1311;
	break;
case '1':
	state = 1312;
	break;
}
break;
case 1168:
switch(s[i]) {
case '0':
	state = 1313;
	break;
case '1':
	state = 1314;
	break;
}
break;
case 1169:
switch(s[i]) {
case '0':
	state = 1315;
	break;
case '1':
	state = 1316;
	break;
}
break;
case 1170:
switch(s[i]) {
case '0':
	state = 1317;
	break;
case '1':
	state = 1318;
	break;
}
break;
case 1171:
switch(s[i]) {
case '0':
	state = 1319;
	break;
case '1':
	state = 1320;
	break;
}
break;
case 1172:
switch(s[i]) {
case '0':
	state = 1321;
	break;
case '1':
	state = 1322;
	break;
}
break;
case 1173:
switch(s[i]) {
case '0':
	state = 1323;
	break;
case '1':
	state = 1324;
	break;
}
break;
case 1174:
switch(s[i]) {
case '0':
	state = 1325;
	break;
case '1':
	state = 1326;
	break;
}
break;
case 1175:
switch(s[i]) {
case '0':
	state = 1327;
	break;
case '1':
	state = 1328;
	break;
}
break;
case 1176:
switch(s[i]) {
case '0':
	state = 1329;
	break;
case '1':
	state = 1330;
	break;
}
break;
case 1177:
switch(s[i]) {
case '0':
	state = 1331;
	break;
case '1':
	state = 1332;
	break;
}
break;
case 1178:
switch(s[i]) {
case '0':
	state = 1333;
	break;
case '1':
	state = 1334;
	break;
}
break;
case 1179:
switch(s[i]) {
case '0':
	state = 1335;
	break;
case '1':
	state = 1336;
	break;
}
break;
case 1180:
switch(s[i]) {
case '0':
	state = 1337;
	break;
case '1':
	state = 1338;
	break;
}
break;
case 1181:
switch(s[i]) {
case '0':
	state = 1339;
	break;
case '1':
	state = 1340;
	break;
}
break;
case 1182:
switch(s[i]) {
case '0':
	state = 1341;
	break;
case '1':
	state = 1342;
	break;
}
break;
case 1183:
switch(s[i]) {
case '0':
	state = 1343;
	break;
case '1':
	state = 1344;
	break;
}
break;
case 1184:
switch(s[i]) {
case '0':
	state = 1345;
	break;
case '1':
	state = 1346;
	break;
}
break;
case 1185:
switch(s[i]) {
case '0':
	state = 1347;
	break;
case '1':
	state = 1348;
	break;
}
break;
case 1186:
switch(s[i]) {
case '0':
	state = 1349;
	break;
case '1':
	state = 1350;
	break;
}
break;
case 1187:
switch(s[i]) {
case '0':
	state = 1351;
	break;
case '1':
	state = 1352;
	break;
}
break;
case 1188:
switch(s[i]) {
case '0':
	state = 1353;
	break;
case '1':
	state = 1354;
	break;
}
break;
case 1189:
switch(s[i]) {
case '0':
	state = 1355;
	break;
case '1':
	state = 1356;
	break;
}
break;
case 1190:
switch(s[i]) {
case '0':
	state = 1357;
	break;
case '1':
	state = 1358;
	break;
}
break;
case 1191:
switch(s[i]) {
case '0':
	state = 1359;
	break;
case '1':
	state = 1360;
	break;
}
break;
case 1192:
switch(s[i]) {
case '0':
	state = 1361;
	break;
case '1':
	state = 1362;
	break;
}
break;
case 1193:
switch(s[i]) {
case '0':
	state = 1363;
	break;
case '1':
	state = 1364;
	break;
}
break;
case 1194:
switch(s[i]) {
case '0':
	state = 1365;
	break;
case '1':
	state = 1366;
	break;
}
break;
case 1195:
switch(s[i]) {
case '0':
	state = 1367;
	break;
case '1':
	state = 1368;
	break;
}
break;
case 1196:
switch(s[i]) {
case '0':
	state = 1369;
	break;
case '1':
	state = 1370;
	break;
}
break;
case 1197:
switch(s[i]) {
case '0':
	state = 1371;
	break;
case '1':
	state = 1372;
	break;
}
break;
case 1198:
switch(s[i]) {
case '0':
	state = 1373;
	break;
case '1':
	state = 1374;
	break;
}
break;
case 1199:
switch(s[i]) {
case '0':
	state = 1375;
	break;
case '1':
	state = 1376;
	break;
}
break;
case 1200:
switch(s[i]) {
case '0':
	state = 1377;
	break;
case '1':
	state = 1378;
	break;
}
break;
case 1201:
switch(s[i]) {
case '0':
	state = 1379;
	break;
case '1':
	state = 1380;
	break;
}
break;
case 1202:
switch(s[i]) {
case '0':
	state = 1381;
	break;
case '1':
	state = 1382;
	break;
}
break;
case 1203:
switch(s[i]) {
case '0':
	state = 1383;
	break;
case '1':
	state = 1384;
	break;
}
break;
case 1204:
switch(s[i]) {
case '0':
	state = 1385;
	break;
case '1':
	state = 1386;
	break;
}
break;
case 1205:
switch(s[i]) {
case '0':
	state = 1387;
	break;
case '1':
	state = 1388;
	break;
}
break;
case 1206:
switch(s[i]) {
case '0':
	state = 1389;
	break;
case '1':
	state = 1390;
	break;
}
break;
case 1207:
switch(s[i]) {
case '0':
	state = 1391;
	break;
case '1':
	state = 1392;
	break;
}
break;
case 1208:
switch(s[i]) {
case '0':
	state = 1393;
	break;
case '1':
	state = 1394;
	break;
}
break;
case 1209:
switch(s[i]) {
case '0':
	state = 1395;
	break;
case '1':
	state = 1396;
	break;
}
break;
case 1210:
switch(s[i]) {
case '0':
	state = 1397;
	break;
case '1':
	state = 1398;
	break;
}
break;
case 1211:
switch(s[i]) {
case '0':
	state = 1399;
	break;
case '1':
	state = 1400;
	break;
}
break;
case 1212:
switch(s[i]) {
case '0':
	state = 1401;
	break;
case '1':
	state = 1402;
	break;
}
break;
case 1213:
switch(s[i]) {
case '0':
	state = 1403;
	break;
case '1':
	state = 1404;
	break;
}
break;
case 1214:
switch(s[i]) {
case '0':
	state = 1405;
	break;
case '1':
	state = 1406;
	break;
}
break;
case 1215:
switch(s[i]) {
case '0':
	state = 1407;
	break;
case '1':
	state = 1408;
	break;
}
break;
case 1216:
switch(s[i]) {
case '0':
	state = 1409;
	break;
case '1':
	state = 1410;
	break;
}
break;
case 1217:
switch(s[i]) {
case '0':
	state = 1411;
	break;
case '1':
	state = 1412;
	break;
}
break;
case 1218:
switch(s[i]) {
case '0':
	state = 1413;
	break;
case '1':
	state = 1414;
	break;
}
break;
case 1219:
switch(s[i]) {
case '0':
	state = 1415;
	break;
case '1':
	state = 1416;
	break;
}
break;
case 1220:
switch(s[i]) {
case '0':
	state = 1417;
	break;
case '1':
	state = 1418;
	break;
}
break;
case 1221:
switch(s[i]) {
case '0':
	state = 1419;
	break;
case '1':
	state = 1420;
	break;
}
break;
case 1222:
switch(s[i]) {
case '0':
	state = 1421;
	break;
case '1':
	state = 1422;
	break;
}
break;
case 1223:
switch(s[i]) {
case '0':
	state = 1423;
	break;
case '1':
	state = 1424;
	break;
}
break;
case 1224:
switch(s[i]) {
case '0':
	state = 1425;
	break;
case '1':
	state = 1426;
	break;
}
break;
case 1225:
switch(s[i]) {
case '0':
	state = 1427;
	break;
case '1':
	state = 1428;
	break;
}
break;
case 1226:
switch(s[i]) {
case '0':
	state = 1429;
	break;
case '1':
	state = 1430;
	break;
}
break;
case 1227:
switch(s[i]) {
case '0':
	state = 1431;
	break;
case '1':
	state = 1432;
	break;
}
break;
case 1228:
switch(s[i]) {
case '0':
	state = 1433;
	break;
case '1':
	state = 1434;
	break;
}
break;
case 1229:
switch(s[i]) {
case '0':
	state = 1435;
	break;
case '1':
	state = 1436;
	break;
}
break;
case 1230:
switch(s[i]) {
case '0':
	state = 1437;
	break;
case '1':
	state = 1438;
	break;
}
break;
case 1231:
switch(s[i]) {
case '0':
	state = 1439;
	break;
case '1':
	state = 1440;
	break;
}
break;
case 1232:
switch(s[i]) {
case '0':
	state = 1441;
	break;
case '1':
	state = 1442;
	break;
}
break;
case 1233:
switch(s[i]) {
case '0':
	state = 1443;
	break;
case '1':
	state = 1444;
	break;
}
break;
case 1234:
switch(s[i]) {
case '0':
	state = 1445;
	break;
case '1':
	state = 1446;
	break;
}
break;
case 1235:
switch(s[i]) {
case '0':
	state = 1447;
	break;
case '1':
	state = 1448;
	break;
}
break;
case 1236:
switch(s[i]) {
case '0':
	state = 1449;
	break;
case '1':
	state = 1450;
	break;
}
break;
case 1237:
switch(s[i]) {
case '0':
	state = 1451;
	break;
case '1':
	state = 1452;
	break;
}
break;
case 1238:
switch(s[i]) {
case '0':
	state = 1453;
	break;
case '1':
	state = 1454;
	break;
}
break;
case 1239:
switch(s[i]) {
case '0':
	state = 1455;
	break;
case '1':
	state = 1456;
	break;
}
break;
case 1240:
switch(s[i]) {
case '0':
	state = 1457;
	break;
case '1':
	state = 1458;
	break;
}
break;
case 1241:
switch(s[i]) {
case '0':
	state = 1459;
	break;
case '1':
	state = 1460;
	break;
}
break;
case 1242:
switch(s[i]) {
case '0':
	state = 1461;
	break;
case '1':
	state = 1462;
	break;
}
break;
case 1243:
switch(s[i]) {
case '0':
	state = 1463;
	break;
case '1':
	state = 1464;
	break;
}
break;
case 1244:
switch(s[i]) {
case '0':
	state = 1465;
	break;
case '1':
	state = 1466;
	break;
}
break;
case 1245:
switch(s[i]) {
case '0':
	state = 1467;
	break;
case '1':
	state = 1468;
	break;
}
break;
case 1246:
switch(s[i]) {
case '0':
	state = 1469;
	break;
case '1':
	state = 1470;
	break;
}
break;
case 1247:
switch(s[i]) {
case '0':
	state = 1471;
	break;
case '1':
	state = 1472;
	break;
}
break;
case 1248:
switch(s[i]) {
case '0':
	state = 1473;
	break;
case '1':
	state = 1474;
	break;
}
break;
case 1249:
switch(s[i]) {
case '0':
	state = 1475;
	break;
case '1':
	state = 1476;
	break;
}
break;
case 1250:
switch(s[i]) {
case '0':
	state = 1477;
	break;
case '1':
	state = 1478;
	break;
}
break;
case 1251:
switch(s[i]) {
case '0':
	state = 1479;
	break;
case '1':
	state = 1480;
	break;
}
break;
case 1252:
switch(s[i]) {
case '0':
	state = 1481;
	break;
case '1':
	state = 1482;
	break;
}
break;
case 1253:
switch(s[i]) {
case '0':
	state = 1483;
	break;
case '1':
	state = 1484;
	break;
}
break;
case 1254:
switch(s[i]) {
case '0':
	state = 1485;
	break;
case '1':
	state = 1486;
	break;
}
break;
case 1255:
switch(s[i]) {
case '0':
	state = 1487;
	break;
case '1':
	state = 1488;
	break;
}
break;
case 1256:
switch(s[i]) {
case '0':
	state = 1489;
	break;
case '1':
	state = 1490;
	break;
}
break;
case 1257:
switch(s[i]) {
case '0':
	state = 1491;
	break;
case '1':
	state = 1492;
	break;
}
break;
case 1258:
switch(s[i]) {
case '0':
	state = 1493;
	break;
case '1':
	state = 1494;
	break;
}
break;
case 1259:
switch(s[i]) {
case '0':
	state = 1495;
	break;
case '1':
	state = 1496;
	break;
}
break;
case 1260:
switch(s[i]) {
case '0':
	state = 1497;
	break;
case '1':
	state = 1498;
	break;
}
break;
case 1261:
switch(s[i]) {
case '0':
	state = 1499;
	break;
case '1':
	state = 1500;
	break;
}
break;
case 1262:
switch(s[i]) {
case '0':
	state = 1501;
	break;
case '1':
	state = 1502;
	break;
}
break;
case 1263:
switch(s[i]) {
case '0':
	state = 1503;
	break;
case '1':
	state = 1504;
	break;
}
break;
case 1264:
switch(s[i]) {
case '0':
	state = 1505;
	break;
case '1':
	state = 1506;
	break;
}
break;
case 1265:
switch(s[i]) {
case '0':
	state = 1507;
	break;
case '1':
	state = 1508;
	break;
}
break;
case 1266:
switch(s[i]) {
case '0':
	state = 1509;
	break;
case '1':
	state = 1510;
	break;
}
break;
case 1267:
switch(s[i]) {
case '0':
	state = 1511;
	break;
case '1':
	state = 1512;
	break;
}
break;
case 1268:
switch(s[i]) {
case '0':
	state = 1513;
	break;
case '1':
	state = 1514;
	break;
}
break;
case 1269:
switch(s[i]) {
case '0':
	state = 1515;
	break;
case '1':
	state = 1516;
	break;
}
break;
case 1270:
switch(s[i]) {
case '0':
	state = 1517;
	break;
case '1':
	state = 1518;
	break;
}
break;
case 1271:
switch(s[i]) {
case '0':
	state = 1519;
	break;
case '1':
	state = 1520;
	break;
}
break;
case 1272:
switch(s[i]) {
case '0':
	state = 1521;
	break;
case '1':
	state = 1522;
	break;
}
break;
case 1273:
switch(s[i]) {
case '0':
	state = 1523;
	break;
case '1':
	state = 1524;
	break;
}
break;
case 1274:
switch(s[i]) {
case '0':
	state = 1525;
	break;
case '1':
	state = 1526;
	break;
}
break;
case 1275:
switch(s[i]) {
case '0':
	state = 1527;
	break;
case '1':
	state = 1528;
	break;
}
break;
case 1276:
switch(s[i]) {
case '0':
	state = 1529;
	break;
case '1':
	state = 1530;
	break;
}
break;
case 1277:
switch(s[i]) {
case '0':
	state = 1531;
	break;
case '1':
	state = 1532;
	break;
}
break;
case 1278:
switch(s[i]) {
case '0':
	state = 1533;
	break;
case '1':
	state = 1534;
	break;
}
break;
case 1279:
switch(s[i]) {
case '0':
	state = 1535;
	break;
case '1':
	state = 1536;
	break;
}
break;
case 1280:
switch(s[i]) {
case '0':
	state = 1537;
	break;
case '1':
	state = 1538;
	break;
}
break;
case 1281:
switch(s[i]) {
case '0':
	state = 1539;
	break;
case '1':
	state = 1540;
	break;
}
break;
case 1282:
switch(s[i]) {
case '0':
	state = 1541;
	break;
case '1':
	state = 1542;
	break;
}
break;
case 1283:
switch(s[i]) {
case '0':
	state = 1543;
	break;
case '1':
	state = 1544;
	break;
}
break;
case 1284:
switch(s[i]) {
case '0':
	state = 1545;
	break;
case '1':
	state = 1546;
	break;
}
break;
case 1285:
switch(s[i]) {
case '0':
	state = 1547;
	break;
case '1':
	state = 1548;
	break;
}
break;
case 1286:
switch(s[i]) {
case '0':
	state = 1549;
	break;
case '1':
	state = 1550;
	break;
}
break;
case 1287:
switch(s[i]) {
case '0':
	state = 1551;
	break;
case '1':
	state = 1552;
	break;
}
break;
case 1288:
switch(s[i]) {
case '0':
	state = 1553;
	break;
case '1':
	state = 1554;
	break;
}
break;
case 1289:
switch(s[i]) {
case '0':
	state = 1555;
	break;
case '1':
	state = 1556;
	break;
}
break;
case 1290:
switch(s[i]) {
case '0':
	state = 1557;
	break;
case '1':
	state = 1558;
	break;
}
break;
case 1291:
switch(s[i]) {
case '0':
	state = 1559;
	break;
case '1':
	state = 1560;
	break;
}
break;
case 1292:
switch(s[i]) {
case '0':
	state = 1561;
	break;
case '1':
	state = 1562;
	break;
}
break;
case 1293:
switch(s[i]) {
case '0':
	state = 1563;
	break;
case '1':
	state = 1564;
	break;
}
break;
case 1294:
switch(s[i]) {
case '0':
	state = 1565;
	break;
case '1':
	state = 1566;
	break;
}
break;
case 1295:
switch(s[i]) {
case '0':
	state = 1567;
	break;
case '1':
	state = 1568;
	break;
}
break;
case 1296:
switch(s[i]) {
case '0':
	state = 1569;
	break;
case '1':
	state = 1570;
	break;
}
break;
case 1297:
switch(s[i]) {
case '0':
	state = 1571;
	break;
case '1':
	state = 1572;
	break;
}
break;
case 1298:
switch(s[i]) {
case '0':
	state = 1573;
	break;
case '1':
	state = 1574;
	break;
}
break;
case 1299:
switch(s[i]) {
case '0':
	state = 1575;
	break;
case '1':
	state = 1576;
	break;
}
break;
case 1300:
switch(s[i]) {
case '0':
	state = 1577;
	break;
case '1':
	state = 1578;
	break;
}
break;
case 1301:
switch(s[i]) {
case '0':
	state = 1579;
	break;
case '1':
	state = 1580;
	break;
}
break;
case 1302:
switch(s[i]) {
case '0':
	state = 1581;
	break;
case '1':
	state = 1582;
	break;
}
break;
case 1303:
switch(s[i]) {
case '0':
	state = 1583;
	break;
case '1':
	state = 1584;
	break;
}
break;
case 1304:
switch(s[i]) {
case '0':
	state = 1585;
	break;
case '1':
	state = 1586;
	break;
}
break;
case 1305:
switch(s[i]) {
case '0':
	state = 1587;
	break;
case '1':
	state = 1588;
	break;
}
break;
case 1306:
switch(s[i]) {
case '0':
	state = 1589;
	break;
case '1':
	state = 1590;
	break;
}
break;
case 1307:
switch(s[i]) {
case '0':
	state = 1591;
	break;
case '1':
	state = 1592;
	break;
}
break;
case 1308:
switch(s[i]) {
case '0':
	state = 1593;
	break;
case '1':
	state = 1594;
	break;
}
break;
case 1309:
switch(s[i]) {
case '0':
	state = 1595;
	break;
case '1':
	state = 1596;
	break;
}
break;
case 1310:
switch(s[i]) {
case '0':
	state = 1597;
	break;
case '1':
	state = 1598;
	break;
}
break;
case 1311:
switch(s[i]) {
case '0':
	state = 1599;
	break;
case '1':
	state = 1600;
	break;
}
break;
case 1312:
switch(s[i]) {
case '0':
	state = 1601;
	break;
case '1':
	state = 1602;
	break;
}
break;
case 1313:
switch(s[i]) {
case '0':
	state = 1603;
	break;
case '1':
	state = 1604;
	break;
}
break;
case 1314:
switch(s[i]) {
case '0':
	state = 1605;
	break;
case '1':
	state = 1606;
	break;
}
break;
case 1315:
switch(s[i]) {
case '0':
	state = 1607;
	break;
case '1':
	state = 1608;
	break;
}
break;
case 1316:
switch(s[i]) {
case '0':
	state = 1609;
	break;
case '1':
	state = 1610;
	break;
}
break;
case 1317:
switch(s[i]) {
case '0':
	state = 1611;
	break;
case '1':
	state = 1612;
	break;
}
break;
case 1318:
switch(s[i]) {
case '0':
	state = 1613;
	break;
case '1':
	state = 1614;
	break;
}
break;
case 1319:
switch(s[i]) {
case '0':
	state = 1615;
	break;
case '1':
	state = 1616;
	break;
}
break;
case 1320:
switch(s[i]) {
case '0':
	state = 1617;
	break;
case '1':
	state = 1618;
	break;
}
break;
case 1321:
switch(s[i]) {
case '0':
	state = 1619;
	break;
case '1':
	state = 1620;
	break;
}
break;
case 1322:
switch(s[i]) {
case '0':
	state = 1621;
	break;
case '1':
	state = 1622;
	break;
}
break;
case 1323:
switch(s[i]) {
case '0':
	state = 1623;
	break;
case '1':
	state = 1624;
	break;
}
break;
case 1324:
switch(s[i]) {
case '0':
	state = 1625;
	break;
case '1':
	state = 1626;
	break;
}
break;
case 1325:
switch(s[i]) {
case '0':
	state = 1627;
	break;
case '1':
	state = 1628;
	break;
}
break;
case 1326:
switch(s[i]) {
case '0':
	state = 1629;
	break;
case '1':
	state = 1630;
	break;
}
break;
case 1327:
switch(s[i]) {
case '0':
	state = 1631;
	break;
case '1':
	state = 1632;
	break;
}
break;
case 1328:
switch(s[i]) {
case '0':
	state = 1633;
	break;
case '1':
	state = 1634;
	break;
}
break;
case 1329:
switch(s[i]) {
case '0':
	state = 1635;
	break;
case '1':
	state = 1636;
	break;
}
break;
case 1330:
switch(s[i]) {
case '0':
	state = 1637;
	break;
case '1':
	state = 1638;
	break;
}
break;
case 1331:
switch(s[i]) {
case '0':
	state = 1639;
	break;
case '1':
	state = 1640;
	break;
}
break;
case 1332:
switch(s[i]) {
case '0':
	state = 1641;
	break;
case '1':
	state = 1642;
	break;
}
break;
case 1333:
switch(s[i]) {
case '0':
	state = 1643;
	break;
case '1':
	state = 1644;
	break;
}
break;
case 1334:
switch(s[i]) {
case '0':
	state = 1645;
	break;
case '1':
	state = 1646;
	break;
}
break;
case 1335:
switch(s[i]) {
case '0':
	state = 1647;
	break;
case '1':
	state = 1648;
	break;
}
break;
case 1336:
switch(s[i]) {
case '0':
	state = 1649;
	break;
case '1':
	state = 1650;
	break;
}
break;
case 1337:
switch(s[i]) {
case '0':
	state = 1651;
	break;
case '1':
	state = 1652;
	break;
}
break;
case 1338:
switch(s[i]) {
case '0':
	state = 1653;
	break;
case '1':
	state = 1654;
	break;
}
break;
case 1339:
switch(s[i]) {
case '0':
	state = 1655;
	break;
case '1':
	state = 1656;
	break;
}
break;
case 1340:
switch(s[i]) {
case '0':
	state = 1657;
	break;
case '1':
	state = 1658;
	break;
}
break;
case 1341:
switch(s[i]) {
case '0':
	state = 1659;
	break;
case '1':
	state = 1660;
	break;
}
break;
case 1342:
switch(s[i]) {
case '0':
	state = 1661;
	break;
case '1':
	state = 1662;
	break;
}
break;
case 1343:
switch(s[i]) {
case '0':
	state = 1663;
	break;
case '1':
	state = 1664;
	break;
}
break;
case 1344:
switch(s[i]) {
case '0':
	state = 1665;
	break;
case '1':
	state = 1666;
	break;
}
break;
case 1345:
switch(s[i]) {
case '0':
	state = 1667;
	break;
case '1':
	state = 1668;
	break;
}
break;
case 1346:
switch(s[i]) {
case '0':
	state = 1669;
	break;
case '1':
	state = 1670;
	break;
}
break;
case 1347:
switch(s[i]) {
case '0':
	state = 1671;
	break;
case '1':
	state = 1672;
	break;
}
break;
case 1348:
switch(s[i]) {
case '0':
	state = 1673;
	break;
case '1':
	state = 1674;
	break;
}
break;
case 1349:
switch(s[i]) {
case '0':
	state = 1675;
	break;
case '1':
	state = 1676;
	break;
}
break;
case 1350:
switch(s[i]) {
case '0':
	state = 1677;
	break;
case '1':
	state = 1678;
	break;
}
break;
case 1351:
switch(s[i]) {
case '0':
	state = 1679;
	break;
case '1':
	state = 1680;
	break;
}
break;
case 1352:
switch(s[i]) {
case '0':
	state = 1681;
	break;
case '1':
	state = 1682;
	break;
}
break;
case 1353:
switch(s[i]) {
case '0':
	state = 1683;
	break;
case '1':
	state = 1684;
	break;
}
break;
case 1354:
switch(s[i]) {
case '0':
	state = 1685;
	break;
case '1':
	state = 1686;
	break;
}
break;
case 1355:
switch(s[i]) {
case '0':
	state = 1687;
	break;
case '1':
	state = 1688;
	break;
}
break;
case 1356:
switch(s[i]) {
case '0':
	state = 1689;
	break;
case '1':
	state = 1690;
	break;
}
break;
case 1357:
switch(s[i]) {
case '0':
	state = 1691;
	break;
case '1':
	state = 1692;
	break;
}
break;
case 1358:
switch(s[i]) {
case '0':
	state = 1693;
	break;
case '1':
	state = 1694;
	break;
}
break;
case 1359:
switch(s[i]) {
case '0':
	state = 1695;
	break;
case '1':
	state = 1696;
	break;
}
break;
case 1360:
switch(s[i]) {
case '0':
	state = 1697;
	break;
case '1':
	state = 1698;
	break;
}
break;
case 1361:
switch(s[i]) {
case '0':
	state = 1699;
	break;
case '1':
	state = 1700;
	break;
}
break;
case 1362:
switch(s[i]) {
case '0':
	state = 1701;
	break;
case '1':
	state = 1702;
	break;
}
break;
case 1363:
switch(s[i]) {
case '0':
	state = 1703;
	break;
case '1':
	state = 1704;
	break;
}
break;
case 1364:
switch(s[i]) {
case '0':
	state = 1705;
	break;
case '1':
	state = 1706;
	break;
}
break;
case 1365:
switch(s[i]) {
case '0':
	state = 1707;
	break;
case '1':
	state = 1708;
	break;
}
break;
case 1366:
switch(s[i]) {
case '0':
	state = 1709;
	break;
case '1':
	state = 1710;
	break;
}
break;
case 1367:
switch(s[i]) {
case '0':
	state = 1711;
	break;
case '1':
	state = 1712;
	break;
}
break;
case 1368:
switch(s[i]) {
case '0':
	state = 1713;
	break;
case '1':
	state = 1714;
	break;
}
break;
case 1369:
switch(s[i]) {
case '0':
	state = 1715;
	break;
case '1':
	state = 1716;
	break;
}
break;
case 1370:
switch(s[i]) {
case '0':
	state = 1717;
	break;
case '1':
	state = 1718;
	break;
}
break;
case 1371:
switch(s[i]) {
case '0':
	state = 1719;
	break;
case '1':
	state = 1720;
	break;
}
break;
case 1372:
switch(s[i]) {
case '0':
	state = 1721;
	break;
case '1':
	state = 1722;
	break;
}
break;
case 1373:
switch(s[i]) {
case '0':
	state = 1723;
	break;
case '1':
	state = 1724;
	break;
}
break;
case 1374:
switch(s[i]) {
case '0':
	state = 1725;
	break;
case '1':
	state = 1726;
	break;
}
break;
case 1375:
switch(s[i]) {
case '0':
	state = 1727;
	break;
case '1':
	state = 1728;
	break;
}
break;
case 1376:
switch(s[i]) {
case '0':
	state = 1729;
	break;
case '1':
	state = 1730;
	break;
}
break;
case 1377:
switch(s[i]) {
case '0':
	state = 1731;
	break;
case '1':
	state = 1732;
	break;
}
break;
case 1378:
switch(s[i]) {
case '0':
	state = 1733;
	break;
case '1':
	state = 1734;
	break;
}
break;
case 1379:
switch(s[i]) {
case '0':
	state = 1735;
	break;
case '1':
	state = 1736;
	break;
}
break;
case 1380:
switch(s[i]) {
case '0':
	state = 1737;
	break;
case '1':
	state = 1738;
	break;
}
break;
case 1381:
switch(s[i]) {
case '0':
	state = 1739;
	break;
case '1':
	state = 1740;
	break;
}
break;
case 1382:
switch(s[i]) {
case '0':
	state = 1741;
	break;
case '1':
	state = 1742;
	break;
}
break;
case 1383:
switch(s[i]) {
case '0':
	state = 1743;
	break;
case '1':
	state = 1744;
	break;
}
break;
case 1384:
switch(s[i]) {
case '0':
	state = 1745;
	break;
case '1':
	state = 1746;
	break;
}
break;
case 1385:
switch(s[i]) {
case '0':
	state = 1747;
	break;
case '1':
	state = 1748;
	break;
}
break;
case 1386:
switch(s[i]) {
case '0':
	state = 1749;
	break;
case '1':
	state = 1750;
	break;
}
break;
case 1387:
switch(s[i]) {
case '0':
	state = 1751;
	break;
case '1':
	state = 1752;
	break;
}
break;
case 1388:
switch(s[i]) {
case '0':
	state = 1753;
	break;
case '1':
	state = 1754;
	break;
}
break;
case 1389:
switch(s[i]) {
case '0':
	state = 1755;
	break;
case '1':
	state = 1756;
	break;
}
break;
case 1390:
switch(s[i]) {
case '0':
	state = 1757;
	break;
case '1':
	state = 1758;
	break;
}
break;
case 1391:
switch(s[i]) {
case '0':
	state = 1759;
	break;
case '1':
	state = 1760;
	break;
}
break;
case 1392:
switch(s[i]) {
case '0':
	state = 1761;
	break;
case '1':
	state = 1762;
	break;
}
break;
case 1393:
switch(s[i]) {
case '0':
	state = 1763;
	break;
case '1':
	state = 1764;
	break;
}
break;
case 1394:
switch(s[i]) {
case '0':
	state = 1765;
	break;
case '1':
	state = 1766;
	break;
}
break;
case 1395:
switch(s[i]) {
case '0':
	state = 1767;
	break;
case '1':
	state = 1768;
	break;
}
break;
case 1396:
switch(s[i]) {
case '0':
	state = 1769;
	break;
case '1':
	state = 1770;
	break;
}
break;
case 1397:
switch(s[i]) {
case '0':
	state = 1771;
	break;
case '1':
	state = 1772;
	break;
}
break;
case 1398:
switch(s[i]) {
case '0':
	state = 1773;
	break;
case '1':
	state = 1774;
	break;
}
break;
case 1399:
switch(s[i]) {
case '0':
	state = 1775;
	break;
case '1':
	state = 1776;
	break;
}
break;
case 1400:
switch(s[i]) {
case '0':
	state = 1777;
	break;
case '1':
	state = 1778;
	break;
}
break;
case 1401:
switch(s[i]) {
case '0':
	state = 1779;
	break;
case '1':
	state = 1780;
	break;
}
break;
case 1402:
switch(s[i]) {
case '0':
	state = 1781;
	break;
case '1':
	state = 1782;
	break;
}
break;
case 1403:
switch(s[i]) {
case '0':
	state = 1783;
	break;
case '1':
	state = 1784;
	break;
}
break;
case 1404:
switch(s[i]) {
case '0':
	state = 1785;
	break;
case '1':
	state = 1786;
	break;
}
break;
case 1405:
switch(s[i]) {
case '0':
	state = 1787;
	break;
case '1':
	state = 1788;
	break;
}
break;
case 1406:
switch(s[i]) {
case '0':
	state = 1789;
	break;
case '1':
	state = 1790;
	break;
}
break;
case 1407:
switch(s[i]) {
case '0':
	state = 1791;
	break;
case '1':
	state = 1792;
	break;
}
break;
case 1408:
switch(s[i]) {
case '0':
	state = 1793;
	break;
case '1':
	state = 1794;
	break;
}
break;
case 1409:
switch(s[i]) {
case '0':
	state = 1795;
	break;
case '1':
	state = 1796;
	break;
}
break;
case 1410:
switch(s[i]) {
case '0':
	state = 1797;
	break;
case '1':
	state = 1798;
	break;
}
break;
case 1411:
switch(s[i]) {
case '0':
	state = 1799;
	break;
case '1':
	state = 1800;
	break;
}
break;
case 1412:
switch(s[i]) {
case '0':
	state = 1801;
	break;
case '1':
	state = 1802;
	break;
}
break;
case 1413:
switch(s[i]) {
case '0':
	state = 1803;
	break;
case '1':
	state = 1804;
	break;
}
break;
case 1414:
switch(s[i]) {
case '0':
	state = 1805;
	break;
case '1':
	state = 1806;
	break;
}
break;
case 1415:
switch(s[i]) {
case '0':
	state = 1807;
	break;
case '1':
	state = 1808;
	break;
}
break;
case 1416:
switch(s[i]) {
case '0':
	state = 1809;
	break;
case '1':
	state = 1810;
	break;
}
break;
case 1417:
switch(s[i]) {
case '0':
	state = 1811;
	break;
case '1':
	state = 1812;
	break;
}
break;
case 1418:
switch(s[i]) {
case '0':
	state = 1813;
	break;
case '1':
	state = 1814;
	break;
}
break;
case 1419:
switch(s[i]) {
case '0':
	state = 1815;
	break;
case '1':
	state = 1816;
	break;
}
break;
case 1420:
switch(s[i]) {
case '0':
	state = 1817;
	break;
case '1':
	state = 1818;
	break;
}
break;
case 1421:
switch(s[i]) {
case '0':
	state = 1819;
	break;
case '1':
	state = 1820;
	break;
}
break;
case 1422:
switch(s[i]) {
case '0':
	state = 1821;
	break;
case '1':
	state = 1822;
	break;
}
break;
case 1423:
switch(s[i]) {
case '0':
	state = 1823;
	break;
case '1':
	state = 1824;
	break;
}
break;
case 1424:
switch(s[i]) {
case '0':
	state = 1825;
	break;
case '1':
	state = 1826;
	break;
}
break;
case 1425:
switch(s[i]) {
case '0':
	state = 1827;
	break;
case '1':
	state = 1828;
	break;
}
break;
case 1426:
switch(s[i]) {
case '0':
	state = 1829;
	break;
case '1':
	state = 1830;
	break;
}
break;
case 1427:
switch(s[i]) {
case '0':
	state = 1831;
	break;
case '1':
	state = 1832;
	break;
}
break;
case 1428:
switch(s[i]) {
case '0':
	state = 1833;
	break;
case '1':
	state = 1834;
	break;
}
break;
case 1429:
switch(s[i]) {
case '0':
	state = 1835;
	break;
case '1':
	state = 1836;
	break;
}
break;
case 1430:
switch(s[i]) {
case '0':
	state = 1837;
	break;
case '1':
	state = 1838;
	break;
}
break;
case 1431:
switch(s[i]) {
case '0':
	state = 1839;
	break;
case '1':
	state = 1840;
	break;
}
break;
case 1432:
switch(s[i]) {
case '0':
	state = 1841;
	break;
case '1':
	state = 1842;
	break;
}
break;
case 1433:
switch(s[i]) {
case '0':
	state = 1843;
	break;
case '1':
	state = 1844;
	break;
}
break;
case 1434:
switch(s[i]) {
case '0':
	state = 1845;
	break;
case '1':
	state = 1846;
	break;
}
break;
case 1435:
switch(s[i]) {
case '0':
	state = 1847;
	break;
case '1':
	state = 1848;
	break;
}
break;
case 1436:
switch(s[i]) {
case '0':
	state = 1849;
	break;
case '1':
	state = 1850;
	break;
}
break;
case 1437:
switch(s[i]) {
case '0':
	state = 1851;
	break;
case '1':
	state = 1852;
	break;
}
break;
case 1438:
switch(s[i]) {
case '0':
	state = 1853;
	break;
case '1':
	state = 1854;
	break;
}
break;
case 1439:
switch(s[i]) {
case '0':
	state = 1855;
	break;
case '1':
	state = 1856;
	break;
}
break;
case 1440:
switch(s[i]) {
case '0':
	state = 1857;
	break;
case '1':
	state = 1858;
	break;
}
break;
case 1441:
switch(s[i]) {
case '0':
	state = 1859;
	break;
case '1':
	state = 1860;
	break;
}
break;
case 1442:
switch(s[i]) {
case '0':
	state = 1861;
	break;
case '1':
	state = 1862;
	break;
}
break;
case 1443:
switch(s[i]) {
case '0':
	state = 1863;
	break;
case '1':
	state = 1864;
	break;
}
break;
case 1444:
switch(s[i]) {
case '0':
	state = 1865;
	break;
case '1':
	state = 1866;
	break;
}
break;
case 1445:
switch(s[i]) {
case '0':
	state = 1867;
	break;
case '1':
	state = 1868;
	break;
}
break;
case 1446:
switch(s[i]) {
case '0':
	state = 1869;
	break;
case '1':
	state = 1870;
	break;
}
break;
case 1447:
switch(s[i]) {
case '0':
	state = 1871;
	break;
case '1':
	state = 1872;
	break;
}
break;
case 1448:
switch(s[i]) {
case '0':
	state = 1873;
	break;
case '1':
	state = 1874;
	break;
}
break;
case 1449:
switch(s[i]) {
case '0':
	state = 1875;
	break;
case '1':
	state = 1876;
	break;
}
break;
case 1450:
switch(s[i]) {
case '0':
	state = 1877;
	break;
case '1':
	state = 1878;
	break;
}
break;
case 1451:
switch(s[i]) {
case '0':
	state = 1879;
	break;
case '1':
	state = 1880;
	break;
}
break;
case 1452:
switch(s[i]) {
case '0':
	state = 1881;
	break;
case '1':
	state = 1882;
	break;
}
break;
case 1453:
switch(s[i]) {
case '0':
	state = 1883;
	break;
case '1':
	state = 1884;
	break;
}
break;
case 1454:
switch(s[i]) {
case '0':
	state = 1885;
	break;
case '1':
	state = 1886;
	break;
}
break;
case 1455:
switch(s[i]) {
case '0':
	state = 1887;
	break;
case '1':
	state = 1888;
	break;
}
break;
case 1456:
switch(s[i]) {
case '0':
	state = 1889;
	break;
case '1':
	state = 1890;
	break;
}
break;
case 1457:
switch(s[i]) {
case '0':
	state = 1891;
	break;
case '1':
	state = 1892;
	break;
}
break;
case 1458:
switch(s[i]) {
case '0':
	state = 1893;
	break;
case '1':
	state = 1894;
	break;
}
break;
case 1459:
switch(s[i]) {
case '0':
	state = 1895;
	break;
case '1':
	state = 1896;
	break;
}
break;
case 1460:
switch(s[i]) {
case '0':
	state = 1897;
	break;
case '1':
	state = 1898;
	break;
}
break;
case 1461:
switch(s[i]) {
case '0':
	state = 1899;
	break;
case '1':
	state = 1900;
	break;
}
break;
case 1462:
switch(s[i]) {
case '0':
	state = 1901;
	break;
case '1':
	state = 1902;
	break;
}
break;
case 1463:
switch(s[i]) {
case '0':
	state = 1903;
	break;
case '1':
	state = 1904;
	break;
}
break;
case 1464:
switch(s[i]) {
case '0':
	state = 1905;
	break;
case '1':
	state = 1906;
	break;
}
break;
case 1465:
switch(s[i]) {
case '0':
	state = 1907;
	break;
case '1':
	state = 1908;
	break;
}
break;
case 1466:
switch(s[i]) {
case '0':
	state = 1909;
	break;
case '1':
	state = 1910;
	break;
}
break;
case 1467:
switch(s[i]) {
case '0':
	state = 1911;
	break;
case '1':
	state = 1912;
	break;
}
break;
case 1468:
switch(s[i]) {
case '0':
	state = 1913;
	break;
case '1':
	state = 1914;
	break;
}
break;
case 1469:
switch(s[i]) {
case '0':
	state = 1915;
	break;
case '1':
	state = 1916;
	break;
}
break;
case 1470:
switch(s[i]) {
case '0':
	state = 1917;
	break;
case '1':
	state = 1918;
	break;
}
break;
case 1471:
switch(s[i]) {
case '0':
	state = 1919;
	break;
case '1':
	state = 1920;
	break;
}
break;
case 1472:
switch(s[i]) {
case '0':
	state = 1921;
	break;
case '1':
	state = 1922;
	break;
}
break;
case 1473:
switch(s[i]) {
case '0':
	state = 1923;
	break;
case '1':
	state = 1924;
	break;
}
break;
case 1474:
switch(s[i]) {
case '0':
	state = 1925;
	break;
case '1':
	state = 1926;
	break;
}
break;
case 1475:
switch(s[i]) {
case '0':
	state = 1927;
	break;
case '1':
	state = 1928;
	break;
}
break;
case 1476:
switch(s[i]) {
case '0':
	state = 1929;
	break;
case '1':
	state = 1930;
	break;
}
break;
case 1477:
switch(s[i]) {
case '0':
	state = 1931;
	break;
case '1':
	state = 1932;
	break;
}
break;
case 1478:
switch(s[i]) {
case '0':
	state = 1933;
	break;
case '1':
	state = 1934;
	break;
}
break;
case 1479:
switch(s[i]) {
case '0':
	state = 1935;
	break;
case '1':
	state = 1936;
	break;
}
break;
case 1480:
switch(s[i]) {
case '0':
	state = 1937;
	break;
case '1':
	state = 1938;
	break;
}
break;
case 1481:
switch(s[i]) {
case '0':
	state = 1939;
	break;
case '1':
	state = 1940;
	break;
}
break;
case 1482:
switch(s[i]) {
case '0':
	state = 1941;
	break;
case '1':
	state = 1942;
	break;
}
break;
case 1483:
switch(s[i]) {
case '0':
	state = 1943;
	break;
case '1':
	state = 1944;
	break;
}
break;
case 1484:
switch(s[i]) {
case '0':
	state = 1945;
	break;
case '1':
	state = 1946;
	break;
}
break;
case 1485:
switch(s[i]) {
case '0':
	state = 1947;
	break;
case '1':
	state = 1948;
	break;
}
break;
case 1486:
switch(s[i]) {
case '0':
	state = 1949;
	break;
case '1':
	state = 1950;
	break;
}
break;
case 1487:
switch(s[i]) {
case '0':
	state = 1951;
	break;
case '1':
	state = 1952;
	break;
}
break;
case 1488:
switch(s[i]) {
case '0':
	state = 1953;
	break;
case '1':
	state = 1954;
	break;
}
break;
case 1489:
switch(s[i]) {
case '0':
	state = 1955;
	break;
case '1':
	state = 1956;
	break;
}
break;
case 1490:
switch(s[i]) {
case '0':
	state = 1957;
	break;
case '1':
	state = 1958;
	break;
}
break;
case 1491:
switch(s[i]) {
case '0':
	state = 1959;
	break;
case '1':
	state = 1960;
	break;
}
break;
case 1492:
switch(s[i]) {
case '0':
	state = 1961;
	break;
case '1':
	state = 1962;
	break;
}
break;
case 1493:
switch(s[i]) {
case '0':
	state = 1963;
	break;
case '1':
	state = 1964;
	break;
}
break;
case 1494:
switch(s[i]) {
case '0':
	state = 1965;
	break;
case '1':
	state = 1966;
	break;
}
break;
case 1495:
switch(s[i]) {
case '0':
	state = 1967;
	break;
case '1':
	state = 1968;
	break;
}
break;
case 1496:
switch(s[i]) {
case '0':
	state = 1969;
	break;
case '1':
	state = 1970;
	break;
}
break;
case 1497:
switch(s[i]) {
case '0':
	state = 1971;
	break;
case '1':
	state = 1972;
	break;
}
break;
case 1498:
switch(s[i]) {
case '0':
	state = 1973;
	break;
case '1':
	state = 1974;
	break;
}
break;
case 1499:
switch(s[i]) {
case '0':
	state = 1975;
	break;
case '1':
	state = 1976;
	break;
}
break;
case 1500:
switch(s[i]) {
case '0':
	state = 1977;
	break;
case '1':
	state = 1978;
	break;
}
break;
case 1501:
switch(s[i]) {
case '0':
	state = 1979;
	break;
case '1':
	state = 1980;
	break;
}
break;
case 1502:
switch(s[i]) {
case '0':
	state = 1981;
	break;
case '1':
	state = 1982;
	break;
}
break;
case 1503:
switch(s[i]) {
case '0':
	state = 1983;
	break;
case '1':
	state = 1984;
	break;
}
break;
case 1504:
switch(s[i]) {
case '0':
	state = 1985;
	break;
case '1':
	state = 1986;
	break;
}
break;
case 1505:
switch(s[i]) {
case '0':
	state = 1987;
	break;
case '1':
	state = 1988;
	break;
}
break;
case 1506:
switch(s[i]) {
case '0':
	state = 1989;
	break;
case '1':
	state = 1990;
	break;
}
break;
case 1507:
switch(s[i]) {
case '0':
	state = 1991;
	break;
case '1':
	state = 1992;
	break;
}
break;
case 1508:
switch(s[i]) {
case '0':
	state = 1993;
	break;
case '1':
	state = 1994;
	break;
}
break;
case 1509:
switch(s[i]) {
case '0':
	state = 1995;
	break;
case '1':
	state = 1996;
	break;
}
break;
case 1510:
switch(s[i]) {
case '0':
	state = 1997;
	break;
case '1':
	state = 1998;
	break;
}
break;
case 1511:
switch(s[i]) {
case '0':
	state = 1999;
	break;
case '1':
	state = 2000;
	break;
}
break;
case 1512:
switch(s[i]) {
case '0':
	state = 2001;
	break;
case '1':
	state = 2002;
	break;
}
break;
case 1513:
switch(s[i]) {
case '0':
	state = 2003;
	break;
case '1':
	state = 2004;
	break;
}
break;
case 1514:
switch(s[i]) {
case '0':
	state = 2005;
	break;
case '1':
	state = 2006;
	break;
}
break;
case 1515:
switch(s[i]) {
case '0':
	state = 2007;
	break;
case '1':
	state = 2008;
	break;
}
break;
case 1516:
switch(s[i]) {
case '0':
	state = 2009;
	break;
case '1':
	state = 2010;
	break;
}
break;
case 1517:
switch(s[i]) {
case '0':
	state = 2011;
	break;
case '1':
	state = 2012;
	break;
}
break;
case 1518:
switch(s[i]) {
case '0':
	state = 2013;
	break;
case '1':
	state = 2014;
	break;
}
break;
case 1519:
switch(s[i]) {
case '0':
	state = 2015;
	break;
case '1':
	state = 2016;
	break;
}
break;
case 1520:
switch(s[i]) {
case '0':
	state = 2017;
	break;
case '1':
	state = 2018;
	break;
}
break;
case 1521:
switch(s[i]) {
case '0':
	state = 2019;
	break;
case '1':
	state = 2020;
	break;
}
break;
case 1522:
switch(s[i]) {
case '0':
	state = 2021;
	break;
case '1':
	state = 2022;
	break;
}
break;
case 1523:
switch(s[i]) {
case '0':
	state = 2023;
	break;
case '1':
	state = 2024;
	break;
}
break;
case 1524:
switch(s[i]) {
case '0':
	state = 2025;
	break;
case '1':
	state = 2026;
	break;
}
break;
case 1525:
switch(s[i]) {
case '0':
	state = 2027;
	break;
case '1':
	state = 2028;
	break;
}
break;
case 1526:
switch(s[i]) {
case '0':
	state = 2029;
	break;
case '1':
	state = 2030;
	break;
}
break;
case 1527:
switch(s[i]) {
case '0':
	state = 2031;
	break;
case '1':
	state = 2032;
	break;
}
break;
case 1528:
switch(s[i]) {
case '0':
	state = 2033;
	break;
case '1':
	state = 2034;
	break;
}
break;
case 1529:
switch(s[i]) {
case '0':
	state = 2035;
	break;
case '1':
	state = 2036;
	break;
}
break;
case 1530:
switch(s[i]) {
case '0':
	state = 2037;
	break;
case '1':
	state = 2038;
	break;
}
break;
case 1531:
switch(s[i]) {
case '0':
	state = 2039;
	break;
case '1':
	state = 2040;
	break;
}
break;
case 1532:
switch(s[i]) {
case '0':
	state = 2041;
	break;
case '1':
	state = 2042;
	break;
}
break;
case 1533:
switch(s[i]) {
case '0':
	state = 2043;
	break;
case '1':
	state = 2044;
	break;
}
break;
case 1534:
switch(s[i]) {
case '0':
	state = 2045;
	break;
case '1':
	state = 2046;
	break;
}
break;
case 1535:
switch(s[i]) {
case '0':
	state = 1023;
	break;
case '1':
	state = 1024;
	break;
}
break;
case 1536:
switch(s[i]) {
case '0':
	state = 1025;
	break;
case '1':
	state = 1026;
	break;
}
break;
case 1537:
switch(s[i]) {
case '0':
	state = 1027;
	break;
case '1':
	state = 1028;
	break;
}
break;
case 1538:
switch(s[i]) {
case '0':
	state = 1029;
	break;
case '1':
	state = 1030;
	break;
}
break;
case 1539:
switch(s[i]) {
case '0':
	state = 1031;
	break;
case '1':
	state = 1032;
	break;
}
break;
case 1540:
switch(s[i]) {
case '0':
	state = 1033;
	break;
case '1':
	state = 1034;
	break;
}
break;
case 1541:
switch(s[i]) {
case '0':
	state = 1035;
	break;
case '1':
	state = 1036;
	break;
}
break;
case 1542:
switch(s[i]) {
case '0':
	state = 1037;
	break;
case '1':
	state = 1038;
	break;
}
break;
case 1543:
switch(s[i]) {
case '0':
	state = 1039;
	break;
case '1':
	state = 1040;
	break;
}
break;
case 1544:
switch(s[i]) {
case '0':
	state = 1041;
	break;
case '1':
	state = 1042;
	break;
}
break;
case 1545:
switch(s[i]) {
case '0':
	state = 1043;
	break;
case '1':
	state = 1044;
	break;
}
break;
case 1546:
switch(s[i]) {
case '0':
	state = 1045;
	break;
case '1':
	state = 1046;
	break;
}
break;
case 1547:
switch(s[i]) {
case '0':
	state = 1047;
	break;
case '1':
	state = 1048;
	break;
}
break;
case 1548:
switch(s[i]) {
case '0':
	state = 1049;
	break;
case '1':
	state = 1050;
	break;
}
break;
case 1549:
switch(s[i]) {
case '0':
	state = 1051;
	break;
case '1':
	state = 1052;
	break;
}
break;
case 1550:
switch(s[i]) {
case '0':
	state = 1053;
	break;
case '1':
	state = 1054;
	break;
}
break;
case 1551:
switch(s[i]) {
case '0':
	state = 1055;
	break;
case '1':
	state = 1056;
	break;
}
break;
case 1552:
switch(s[i]) {
case '0':
	state = 1057;
	break;
case '1':
	state = 1058;
	break;
}
break;
case 1553:
switch(s[i]) {
case '0':
	state = 1059;
	break;
case '1':
	state = 1060;
	break;
}
break;
case 1554:
switch(s[i]) {
case '0':
	state = 1061;
	break;
case '1':
	state = 1062;
	break;
}
break;
case 1555:
switch(s[i]) {
case '0':
	state = 1063;
	break;
case '1':
	state = 1064;
	break;
}
break;
case 1556:
switch(s[i]) {
case '0':
	state = 1065;
	break;
case '1':
	state = 1066;
	break;
}
break;
case 1557:
switch(s[i]) {
case '0':
	state = 1067;
	break;
case '1':
	state = 1068;
	break;
}
break;
case 1558:
switch(s[i]) {
case '0':
	state = 1069;
	break;
case '1':
	state = 1070;
	break;
}
break;
case 1559:
switch(s[i]) {
case '0':
	state = 1071;
	break;
case '1':
	state = 1072;
	break;
}
break;
case 1560:
switch(s[i]) {
case '0':
	state = 1073;
	break;
case '1':
	state = 1074;
	break;
}
break;
case 1561:
switch(s[i]) {
case '0':
	state = 1075;
	break;
case '1':
	state = 1076;
	break;
}
break;
case 1562:
switch(s[i]) {
case '0':
	state = 1077;
	break;
case '1':
	state = 1078;
	break;
}
break;
case 1563:
switch(s[i]) {
case '0':
	state = 1079;
	break;
case '1':
	state = 1080;
	break;
}
break;
case 1564:
switch(s[i]) {
case '0':
	state = 1081;
	break;
case '1':
	state = 1082;
	break;
}
break;
case 1565:
switch(s[i]) {
case '0':
	state = 1083;
	break;
case '1':
	state = 1084;
	break;
}
break;
case 1566:
switch(s[i]) {
case '0':
	state = 1085;
	break;
case '1':
	state = 1086;
	break;
}
break;
case 1567:
switch(s[i]) {
case '0':
	state = 1087;
	break;
case '1':
	state = 1088;
	break;
}
break;
case 1568:
switch(s[i]) {
case '0':
	state = 1089;
	break;
case '1':
	state = 1090;
	break;
}
break;
case 1569:
switch(s[i]) {
case '0':
	state = 1091;
	break;
case '1':
	state = 1092;
	break;
}
break;
case 1570:
switch(s[i]) {
case '0':
	state = 1093;
	break;
case '1':
	state = 1094;
	break;
}
break;
case 1571:
switch(s[i]) {
case '0':
	state = 1095;
	break;
case '1':
	state = 1096;
	break;
}
break;
case 1572:
switch(s[i]) {
case '0':
	state = 1097;
	break;
case '1':
	state = 1098;
	break;
}
break;
case 1573:
switch(s[i]) {
case '0':
	state = 1099;
	break;
case '1':
	state = 1100;
	break;
}
break;
case 1574:
switch(s[i]) {
case '0':
	state = 1101;
	break;
case '1':
	state = 1102;
	break;
}
break;
case 1575:
switch(s[i]) {
case '0':
	state = 1103;
	break;
case '1':
	state = 1104;
	break;
}
break;
case 1576:
switch(s[i]) {
case '0':
	state = 1105;
	break;
case '1':
	state = 1106;
	break;
}
break;
case 1577:
switch(s[i]) {
case '0':
	state = 1107;
	break;
case '1':
	state = 1108;
	break;
}
break;
case 1578:
switch(s[i]) {
case '0':
	state = 1109;
	break;
case '1':
	state = 1110;
	break;
}
break;
case 1579:
switch(s[i]) {
case '0':
	state = 1111;
	break;
case '1':
	state = 1112;
	break;
}
break;
case 1580:
switch(s[i]) {
case '0':
	state = 1113;
	break;
case '1':
	state = 1114;
	break;
}
break;
case 1581:
switch(s[i]) {
case '0':
	state = 1115;
	break;
case '1':
	state = 1116;
	break;
}
break;
case 1582:
switch(s[i]) {
case '0':
	state = 1117;
	break;
case '1':
	state = 1118;
	break;
}
break;
case 1583:
switch(s[i]) {
case '0':
	state = 1119;
	break;
case '1':
	state = 1120;
	break;
}
break;
case 1584:
switch(s[i]) {
case '0':
	state = 1121;
	break;
case '1':
	state = 1122;
	break;
}
break;
case 1585:
switch(s[i]) {
case '0':
	state = 1123;
	break;
case '1':
	state = 1124;
	break;
}
break;
case 1586:
switch(s[i]) {
case '0':
	state = 1125;
	break;
case '1':
	state = 1126;
	break;
}
break;
case 1587:
switch(s[i]) {
case '0':
	state = 1127;
	break;
case '1':
	state = 1128;
	break;
}
break;
case 1588:
switch(s[i]) {
case '0':
	state = 1129;
	break;
case '1':
	state = 1130;
	break;
}
break;
case 1589:
switch(s[i]) {
case '0':
	state = 1131;
	break;
case '1':
	state = 1132;
	break;
}
break;
case 1590:
switch(s[i]) {
case '0':
	state = 1133;
	break;
case '1':
	state = 1134;
	break;
}
break;
case 1591:
switch(s[i]) {
case '0':
	state = 1135;
	break;
case '1':
	state = 1136;
	break;
}
break;
case 1592:
switch(s[i]) {
case '0':
	state = 1137;
	break;
case '1':
	state = 1138;
	break;
}
break;
case 1593:
switch(s[i]) {
case '0':
	state = 1139;
	break;
case '1':
	state = 1140;
	break;
}
break;
case 1594:
switch(s[i]) {
case '0':
	state = 1141;
	break;
case '1':
	state = 1142;
	break;
}
break;
case 1595:
switch(s[i]) {
case '0':
	state = 1143;
	break;
case '1':
	state = 1144;
	break;
}
break;
case 1596:
switch(s[i]) {
case '0':
	state = 1145;
	break;
case '1':
	state = 1146;
	break;
}
break;
case 1597:
switch(s[i]) {
case '0':
	state = 1147;
	break;
case '1':
	state = 1148;
	break;
}
break;
case 1598:
switch(s[i]) {
case '0':
	state = 1149;
	break;
case '1':
	state = 1150;
	break;
}
break;
case 1599:
switch(s[i]) {
case '0':
	state = 1151;
	break;
case '1':
	state = 1152;
	break;
}
break;
case 1600:
switch(s[i]) {
case '0':
	state = 1153;
	break;
case '1':
	state = 1154;
	break;
}
break;
case 1601:
switch(s[i]) {
case '0':
	state = 1155;
	break;
case '1':
	state = 1156;
	break;
}
break;
case 1602:
switch(s[i]) {
case '0':
	state = 1157;
	break;
case '1':
	state = 1158;
	break;
}
break;
case 1603:
switch(s[i]) {
case '0':
	state = 1159;
	break;
case '1':
	state = 1160;
	break;
}
break;
case 1604:
switch(s[i]) {
case '0':
	state = 1161;
	break;
case '1':
	state = 1162;
	break;
}
break;
case 1605:
switch(s[i]) {
case '0':
	state = 1163;
	break;
case '1':
	state = 1164;
	break;
}
break;
case 1606:
switch(s[i]) {
case '0':
	state = 1165;
	break;
case '1':
	state = 1166;
	break;
}
break;
case 1607:
switch(s[i]) {
case '0':
	state = 1167;
	break;
case '1':
	state = 1168;
	break;
}
break;
case 1608:
switch(s[i]) {
case '0':
	state = 1169;
	break;
case '1':
	state = 1170;
	break;
}
break;
case 1609:
switch(s[i]) {
case '0':
	state = 1171;
	break;
case '1':
	state = 1172;
	break;
}
break;
case 1610:
switch(s[i]) {
case '0':
	state = 1173;
	break;
case '1':
	state = 1174;
	break;
}
break;
case 1611:
switch(s[i]) {
case '0':
	state = 1175;
	break;
case '1':
	state = 1176;
	break;
}
break;
case 1612:
switch(s[i]) {
case '0':
	state = 1177;
	break;
case '1':
	state = 1178;
	break;
}
break;
case 1613:
switch(s[i]) {
case '0':
	state = 1179;
	break;
case '1':
	state = 1180;
	break;
}
break;
case 1614:
switch(s[i]) {
case '0':
	state = 1181;
	break;
case '1':
	state = 1182;
	break;
}
break;
case 1615:
switch(s[i]) {
case '0':
	state = 1183;
	break;
case '1':
	state = 1184;
	break;
}
break;
case 1616:
switch(s[i]) {
case '0':
	state = 1185;
	break;
case '1':
	state = 1186;
	break;
}
break;
case 1617:
switch(s[i]) {
case '0':
	state = 1187;
	break;
case '1':
	state = 1188;
	break;
}
break;
case 1618:
switch(s[i]) {
case '0':
	state = 1189;
	break;
case '1':
	state = 1190;
	break;
}
break;
case 1619:
switch(s[i]) {
case '0':
	state = 1191;
	break;
case '1':
	state = 1192;
	break;
}
break;
case 1620:
switch(s[i]) {
case '0':
	state = 1193;
	break;
case '1':
	state = 1194;
	break;
}
break;
case 1621:
switch(s[i]) {
case '0':
	state = 1195;
	break;
case '1':
	state = 1196;
	break;
}
break;
case 1622:
switch(s[i]) {
case '0':
	state = 1197;
	break;
case '1':
	state = 1198;
	break;
}
break;
case 1623:
switch(s[i]) {
case '0':
	state = 1199;
	break;
case '1':
	state = 1200;
	break;
}
break;
case 1624:
switch(s[i]) {
case '0':
	state = 1201;
	break;
case '1':
	state = 1202;
	break;
}
break;
case 1625:
switch(s[i]) {
case '0':
	state = 1203;
	break;
case '1':
	state = 1204;
	break;
}
break;
case 1626:
switch(s[i]) {
case '0':
	state = 1205;
	break;
case '1':
	state = 1206;
	break;
}
break;
case 1627:
switch(s[i]) {
case '0':
	state = 1207;
	break;
case '1':
	state = 1208;
	break;
}
break;
case 1628:
switch(s[i]) {
case '0':
	state = 1209;
	break;
case '1':
	state = 1210;
	break;
}
break;
case 1629:
switch(s[i]) {
case '0':
	state = 1211;
	break;
case '1':
	state = 1212;
	break;
}
break;
case 1630:
switch(s[i]) {
case '0':
	state = 1213;
	break;
case '1':
	state = 1214;
	break;
}
break;
case 1631:
switch(s[i]) {
case '0':
	state = 1215;
	break;
case '1':
	state = 1216;
	break;
}
break;
case 1632:
switch(s[i]) {
case '0':
	state = 1217;
	break;
case '1':
	state = 1218;
	break;
}
break;
case 1633:
switch(s[i]) {
case '0':
	state = 1219;
	break;
case '1':
	state = 1220;
	break;
}
break;
case 1634:
switch(s[i]) {
case '0':
	state = 1221;
	break;
case '1':
	state = 1222;
	break;
}
break;
case 1635:
switch(s[i]) {
case '0':
	state = 1223;
	break;
case '1':
	state = 1224;
	break;
}
break;
case 1636:
switch(s[i]) {
case '0':
	state = 1225;
	break;
case '1':
	state = 1226;
	break;
}
break;
case 1637:
switch(s[i]) {
case '0':
	state = 1227;
	break;
case '1':
	state = 1228;
	break;
}
break;
case 1638:
switch(s[i]) {
case '0':
	state = 1229;
	break;
case '1':
	state = 1230;
	break;
}
break;
case 1639:
switch(s[i]) {
case '0':
	state = 1231;
	break;
case '1':
	state = 1232;
	break;
}
break;
case 1640:
switch(s[i]) {
case '0':
	state = 1233;
	break;
case '1':
	state = 1234;
	break;
}
break;
case 1641:
switch(s[i]) {
case '0':
	state = 1235;
	break;
case '1':
	state = 1236;
	break;
}
break;
case 1642:
switch(s[i]) {
case '0':
	state = 1237;
	break;
case '1':
	state = 1238;
	break;
}
break;
case 1643:
switch(s[i]) {
case '0':
	state = 1239;
	break;
case '1':
	state = 1240;
	break;
}
break;
case 1644:
switch(s[i]) {
case '0':
	state = 1241;
	break;
case '1':
	state = 1242;
	break;
}
break;
case 1645:
switch(s[i]) {
case '0':
	state = 1243;
	break;
case '1':
	state = 1244;
	break;
}
break;
case 1646:
switch(s[i]) {
case '0':
	state = 1245;
	break;
case '1':
	state = 1246;
	break;
}
break;
case 1647:
switch(s[i]) {
case '0':
	state = 1247;
	break;
case '1':
	state = 1248;
	break;
}
break;
case 1648:
switch(s[i]) {
case '0':
	state = 1249;
	break;
case '1':
	state = 1250;
	break;
}
break;
case 1649:
switch(s[i]) {
case '0':
	state = 1251;
	break;
case '1':
	state = 1252;
	break;
}
break;
case 1650:
switch(s[i]) {
case '0':
	state = 1253;
	break;
case '1':
	state = 1254;
	break;
}
break;
case 1651:
switch(s[i]) {
case '0':
	state = 1255;
	break;
case '1':
	state = 1256;
	break;
}
break;
case 1652:
switch(s[i]) {
case '0':
	state = 1257;
	break;
case '1':
	state = 1258;
	break;
}
break;
case 1653:
switch(s[i]) {
case '0':
	state = 1259;
	break;
case '1':
	state = 1260;
	break;
}
break;
case 1654:
switch(s[i]) {
case '0':
	state = 1261;
	break;
case '1':
	state = 1262;
	break;
}
break;
case 1655:
switch(s[i]) {
case '0':
	state = 1263;
	break;
case '1':
	state = 1264;
	break;
}
break;
case 1656:
switch(s[i]) {
case '0':
	state = 1265;
	break;
case '1':
	state = 1266;
	break;
}
break;
case 1657:
switch(s[i]) {
case '0':
	state = 1267;
	break;
case '1':
	state = 1268;
	break;
}
break;
case 1658:
switch(s[i]) {
case '0':
	state = 1269;
	break;
case '1':
	state = 1270;
	break;
}
break;
case 1659:
switch(s[i]) {
case '0':
	state = 1271;
	break;
case '1':
	state = 1272;
	break;
}
break;
case 1660:
switch(s[i]) {
case '0':
	state = 1273;
	break;
case '1':
	state = 1274;
	break;
}
break;
case 1661:
switch(s[i]) {
case '0':
	state = 1275;
	break;
case '1':
	state = 1276;
	break;
}
break;
case 1662:
switch(s[i]) {
case '0':
	state = 1277;
	break;
case '1':
	state = 1278;
	break;
}
break;
case 1663:
switch(s[i]) {
case '0':
	state = 1279;
	break;
case '1':
	state = 1280;
	break;
}
break;
case 1664:
switch(s[i]) {
case '0':
	state = 1281;
	break;
case '1':
	state = 1282;
	break;
}
break;
case 1665:
switch(s[i]) {
case '0':
	state = 1283;
	break;
case '1':
	state = 1284;
	break;
}
break;
case 1666:
switch(s[i]) {
case '0':
	state = 1285;
	break;
case '1':
	state = 1286;
	break;
}
break;
case 1667:
switch(s[i]) {
case '0':
	state = 1287;
	break;
case '1':
	state = 1288;
	break;
}
break;
case 1668:
switch(s[i]) {
case '0':
	state = 1289;
	break;
case '1':
	state = 1290;
	break;
}
break;
case 1669:
switch(s[i]) {
case '0':
	state = 1291;
	break;
case '1':
	state = 1292;
	break;
}
break;
case 1670:
switch(s[i]) {
case '0':
	state = 1293;
	break;
case '1':
	state = 1294;
	break;
}
break;
case 1671:
switch(s[i]) {
case '0':
	state = 1295;
	break;
case '1':
	state = 1296;
	break;
}
break;
case 1672:
switch(s[i]) {
case '0':
	state = 1297;
	break;
case '1':
	state = 1298;
	break;
}
break;
case 1673:
switch(s[i]) {
case '0':
	state = 1299;
	break;
case '1':
	state = 1300;
	break;
}
break;
case 1674:
switch(s[i]) {
case '0':
	state = 1301;
	break;
case '1':
	state = 1302;
	break;
}
break;
case 1675:
switch(s[i]) {
case '0':
	state = 1303;
	break;
case '1':
	state = 1304;
	break;
}
break;
case 1676:
switch(s[i]) {
case '0':
	state = 1305;
	break;
case '1':
	state = 1306;
	break;
}
break;
case 1677:
switch(s[i]) {
case '0':
	state = 1307;
	break;
case '1':
	state = 1308;
	break;
}
break;
case 1678:
switch(s[i]) {
case '0':
	state = 1309;
	break;
case '1':
	state = 1310;
	break;
}
break;
case 1679:
switch(s[i]) {
case '0':
	state = 1311;
	break;
case '1':
	state = 1312;
	break;
}
break;
case 1680:
switch(s[i]) {
case '0':
	state = 1313;
	break;
case '1':
	state = 1314;
	break;
}
break;
case 1681:
switch(s[i]) {
case '0':
	state = 1315;
	break;
case '1':
	state = 1316;
	break;
}
break;
case 1682:
switch(s[i]) {
case '0':
	state = 1317;
	break;
case '1':
	state = 1318;
	break;
}
break;
case 1683:
switch(s[i]) {
case '0':
	state = 1319;
	break;
case '1':
	state = 1320;
	break;
}
break;
case 1684:
switch(s[i]) {
case '0':
	state = 1321;
	break;
case '1':
	state = 1322;
	break;
}
break;
case 1685:
switch(s[i]) {
case '0':
	state = 1323;
	break;
case '1':
	state = 1324;
	break;
}
break;
case 1686:
switch(s[i]) {
case '0':
	state = 1325;
	break;
case '1':
	state = 1326;
	break;
}
break;
case 1687:
switch(s[i]) {
case '0':
	state = 1327;
	break;
case '1':
	state = 1328;
	break;
}
break;
case 1688:
switch(s[i]) {
case '0':
	state = 1329;
	break;
case '1':
	state = 1330;
	break;
}
break;
case 1689:
switch(s[i]) {
case '0':
	state = 1331;
	break;
case '1':
	state = 1332;
	break;
}
break;
case 1690:
switch(s[i]) {
case '0':
	state = 1333;
	break;
case '1':
	state = 1334;
	break;
}
break;
case 1691:
switch(s[i]) {
case '0':
	state = 1335;
	break;
case '1':
	state = 1336;
	break;
}
break;
case 1692:
switch(s[i]) {
case '0':
	state = 1337;
	break;
case '1':
	state = 1338;
	break;
}
break;
case 1693:
switch(s[i]) {
case '0':
	state = 1339;
	break;
case '1':
	state = 1340;
	break;
}
break;
case 1694:
switch(s[i]) {
case '0':
	state = 1341;
	break;
case '1':
	state = 1342;
	break;
}
break;
case 1695:
switch(s[i]) {
case '0':
	state = 1343;
	break;
case '1':
	state = 1344;
	break;
}
break;
case 1696:
switch(s[i]) {
case '0':
	state = 1345;
	break;
case '1':
	state = 1346;
	break;
}
break;
case 1697:
switch(s[i]) {
case '0':
	state = 1347;
	break;
case '1':
	state = 1348;
	break;
}
break;
case 1698:
switch(s[i]) {
case '0':
	state = 1349;
	break;
case '1':
	state = 1350;
	break;
}
break;
case 1699:
switch(s[i]) {
case '0':
	state = 1351;
	break;
case '1':
	state = 1352;
	break;
}
break;
case 1700:
switch(s[i]) {
case '0':
	state = 1353;
	break;
case '1':
	state = 1354;
	break;
}
break;
case 1701:
switch(s[i]) {
case '0':
	state = 1355;
	break;
case '1':
	state = 1356;
	break;
}
break;
case 1702:
switch(s[i]) {
case '0':
	state = 1357;
	break;
case '1':
	state = 1358;
	break;
}
break;
case 1703:
switch(s[i]) {
case '0':
	state = 1359;
	break;
case '1':
	state = 1360;
	break;
}
break;
case 1704:
switch(s[i]) {
case '0':
	state = 1361;
	break;
case '1':
	state = 1362;
	break;
}
break;
case 1705:
switch(s[i]) {
case '0':
	state = 1363;
	break;
case '1':
	state = 1364;
	break;
}
break;
case 1706:
switch(s[i]) {
case '0':
	state = 1365;
	break;
case '1':
	state = 1366;
	break;
}
break;
case 1707:
switch(s[i]) {
case '0':
	state = 1367;
	break;
case '1':
	state = 1368;
	break;
}
break;
case 1708:
switch(s[i]) {
case '0':
	state = 1369;
	break;
case '1':
	state = 1370;
	break;
}
break;
case 1709:
switch(s[i]) {
case '0':
	state = 1371;
	break;
case '1':
	state = 1372;
	break;
}
break;
case 1710:
switch(s[i]) {
case '0':
	state = 1373;
	break;
case '1':
	state = 1374;
	break;
}
break;
case 1711:
switch(s[i]) {
case '0':
	state = 1375;
	break;
case '1':
	state = 1376;
	break;
}
break;
case 1712:
switch(s[i]) {
case '0':
	state = 1377;
	break;
case '1':
	state = 1378;
	break;
}
break;
case 1713:
switch(s[i]) {
case '0':
	state = 1379;
	break;
case '1':
	state = 1380;
	break;
}
break;
case 1714:
switch(s[i]) {
case '0':
	state = 1381;
	break;
case '1':
	state = 1382;
	break;
}
break;
case 1715:
switch(s[i]) {
case '0':
	state = 1383;
	break;
case '1':
	state = 1384;
	break;
}
break;
case 1716:
switch(s[i]) {
case '0':
	state = 1385;
	break;
case '1':
	state = 1386;
	break;
}
break;
case 1717:
switch(s[i]) {
case '0':
	state = 1387;
	break;
case '1':
	state = 1388;
	break;
}
break;
case 1718:
switch(s[i]) {
case '0':
	state = 1389;
	break;
case '1':
	state = 1390;
	break;
}
break;
case 1719:
switch(s[i]) {
case '0':
	state = 1391;
	break;
case '1':
	state = 1392;
	break;
}
break;
case 1720:
switch(s[i]) {
case '0':
	state = 1393;
	break;
case '1':
	state = 1394;
	break;
}
break;
case 1721:
switch(s[i]) {
case '0':
	state = 1395;
	break;
case '1':
	state = 1396;
	break;
}
break;
case 1722:
switch(s[i]) {
case '0':
	state = 1397;
	break;
case '1':
	state = 1398;
	break;
}
break;
case 1723:
switch(s[i]) {
case '0':
	state = 1399;
	break;
case '1':
	state = 1400;
	break;
}
break;
case 1724:
switch(s[i]) {
case '0':
	state = 1401;
	break;
case '1':
	state = 1402;
	break;
}
break;
case 1725:
switch(s[i]) {
case '0':
	state = 1403;
	break;
case '1':
	state = 1404;
	break;
}
break;
case 1726:
switch(s[i]) {
case '0':
	state = 1405;
	break;
case '1':
	state = 1406;
	break;
}
break;
case 1727:
switch(s[i]) {
case '0':
	state = 1407;
	break;
case '1':
	state = 1408;
	break;
}
break;
case 1728:
switch(s[i]) {
case '0':
	state = 1409;
	break;
case '1':
	state = 1410;
	break;
}
break;
case 1729:
switch(s[i]) {
case '0':
	state = 1411;
	break;
case '1':
	state = 1412;
	break;
}
break;
case 1730:
switch(s[i]) {
case '0':
	state = 1413;
	break;
case '1':
	state = 1414;
	break;
}
break;
case 1731:
switch(s[i]) {
case '0':
	state = 1415;
	break;
case '1':
	state = 1416;
	break;
}
break;
case 1732:
switch(s[i]) {
case '0':
	state = 1417;
	break;
case '1':
	state = 1418;
	break;
}
break;
case 1733:
switch(s[i]) {
case '0':
	state = 1419;
	break;
case '1':
	state = 1420;
	break;
}
break;
case 1734:
switch(s[i]) {
case '0':
	state = 1421;
	break;
case '1':
	state = 1422;
	break;
}
break;
case 1735:
switch(s[i]) {
case '0':
	state = 1423;
	break;
case '1':
	state = 1424;
	break;
}
break;
case 1736:
switch(s[i]) {
case '0':
	state = 1425;
	break;
case '1':
	state = 1426;
	break;
}
break;
case 1737:
switch(s[i]) {
case '0':
	state = 1427;
	break;
case '1':
	state = 1428;
	break;
}
break;
case 1738:
switch(s[i]) {
case '0':
	state = 1429;
	break;
case '1':
	state = 1430;
	break;
}
break;
case 1739:
switch(s[i]) {
case '0':
	state = 1431;
	break;
case '1':
	state = 1432;
	break;
}
break;
case 1740:
switch(s[i]) {
case '0':
	state = 1433;
	break;
case '1':
	state = 1434;
	break;
}
break;
case 1741:
switch(s[i]) {
case '0':
	state = 1435;
	break;
case '1':
	state = 1436;
	break;
}
break;
case 1742:
switch(s[i]) {
case '0':
	state = 1437;
	break;
case '1':
	state = 1438;
	break;
}
break;
case 1743:
switch(s[i]) {
case '0':
	state = 1439;
	break;
case '1':
	state = 1440;
	break;
}
break;
case 1744:
switch(s[i]) {
case '0':
	state = 1441;
	break;
case '1':
	state = 1442;
	break;
}
break;
case 1745:
switch(s[i]) {
case '0':
	state = 1443;
	break;
case '1':
	state = 1444;
	break;
}
break;
case 1746:
switch(s[i]) {
case '0':
	state = 1445;
	break;
case '1':
	state = 1446;
	break;
}
break;
case 1747:
switch(s[i]) {
case '0':
	state = 1447;
	break;
case '1':
	state = 1448;
	break;
}
break;
case 1748:
switch(s[i]) {
case '0':
	state = 1449;
	break;
case '1':
	state = 1450;
	break;
}
break;
case 1749:
switch(s[i]) {
case '0':
	state = 1451;
	break;
case '1':
	state = 1452;
	break;
}
break;
case 1750:
switch(s[i]) {
case '0':
	state = 1453;
	break;
case '1':
	state = 1454;
	break;
}
break;
case 1751:
switch(s[i]) {
case '0':
	state = 1455;
	break;
case '1':
	state = 1456;
	break;
}
break;
case 1752:
switch(s[i]) {
case '0':
	state = 1457;
	break;
case '1':
	state = 1458;
	break;
}
break;
case 1753:
switch(s[i]) {
case '0':
	state = 1459;
	break;
case '1':
	state = 1460;
	break;
}
break;
case 1754:
switch(s[i]) {
case '0':
	state = 1461;
	break;
case '1':
	state = 1462;
	break;
}
break;
case 1755:
switch(s[i]) {
case '0':
	state = 1463;
	break;
case '1':
	state = 1464;
	break;
}
break;
case 1756:
switch(s[i]) {
case '0':
	state = 1465;
	break;
case '1':
	state = 1466;
	break;
}
break;
case 1757:
switch(s[i]) {
case '0':
	state = 1467;
	break;
case '1':
	state = 1468;
	break;
}
break;
case 1758:
switch(s[i]) {
case '0':
	state = 1469;
	break;
case '1':
	state = 1470;
	break;
}
break;
case 1759:
switch(s[i]) {
case '0':
	state = 1471;
	break;
case '1':
	state = 1472;
	break;
}
break;
case 1760:
switch(s[i]) {
case '0':
	state = 1473;
	break;
case '1':
	state = 1474;
	break;
}
break;
case 1761:
switch(s[i]) {
case '0':
	state = 1475;
	break;
case '1':
	state = 1476;
	break;
}
break;
case 1762:
switch(s[i]) {
case '0':
	state = 1477;
	break;
case '1':
	state = 1478;
	break;
}
break;
case 1763:
switch(s[i]) {
case '0':
	state = 1479;
	break;
case '1':
	state = 1480;
	break;
}
break;
case 1764:
switch(s[i]) {
case '0':
	state = 1481;
	break;
case '1':
	state = 1482;
	break;
}
break;
case 1765:
switch(s[i]) {
case '0':
	state = 1483;
	break;
case '1':
	state = 1484;
	break;
}
break;
case 1766:
switch(s[i]) {
case '0':
	state = 1485;
	break;
case '1':
	state = 1486;
	break;
}
break;
case 1767:
switch(s[i]) {
case '0':
	state = 1487;
	break;
case '1':
	state = 1488;
	break;
}
break;
case 1768:
switch(s[i]) {
case '0':
	state = 1489;
	break;
case '1':
	state = 1490;
	break;
}
break;
case 1769:
switch(s[i]) {
case '0':
	state = 1491;
	break;
case '1':
	state = 1492;
	break;
}
break;
case 1770:
switch(s[i]) {
case '0':
	state = 1493;
	break;
case '1':
	state = 1494;
	break;
}
break;
case 1771:
switch(s[i]) {
case '0':
	state = 1495;
	break;
case '1':
	state = 1496;
	break;
}
break;
case 1772:
switch(s[i]) {
case '0':
	state = 1497;
	break;
case '1':
	state = 1498;
	break;
}
break;
case 1773:
switch(s[i]) {
case '0':
	state = 1499;
	break;
case '1':
	state = 1500;
	break;
}
break;
case 1774:
switch(s[i]) {
case '0':
	state = 1501;
	break;
case '1':
	state = 1502;
	break;
}
break;
case 1775:
switch(s[i]) {
case '0':
	state = 1503;
	break;
case '1':
	state = 1504;
	break;
}
break;
case 1776:
switch(s[i]) {
case '0':
	state = 1505;
	break;
case '1':
	state = 1506;
	break;
}
break;
case 1777:
switch(s[i]) {
case '0':
	state = 1507;
	break;
case '1':
	state = 1508;
	break;
}
break;
case 1778:
switch(s[i]) {
case '0':
	state = 1509;
	break;
case '1':
	state = 1510;
	break;
}
break;
case 1779:
switch(s[i]) {
case '0':
	state = 1511;
	break;
case '1':
	state = 1512;
	break;
}
break;
case 1780:
switch(s[i]) {
case '0':
	state = 1513;
	break;
case '1':
	state = 1514;
	break;
}
break;
case 1781:
switch(s[i]) {
case '0':
	state = 1515;
	break;
case '1':
	state = 1516;
	break;
}
break;
case 1782:
switch(s[i]) {
case '0':
	state = 1517;
	break;
case '1':
	state = 1518;
	break;
}
break;
case 1783:
switch(s[i]) {
case '0':
	state = 1519;
	break;
case '1':
	state = 1520;
	break;
}
break;
case 1784:
switch(s[i]) {
case '0':
	state = 1521;
	break;
case '1':
	state = 1522;
	break;
}
break;
case 1785:
switch(s[i]) {
case '0':
	state = 1523;
	break;
case '1':
	state = 1524;
	break;
}
break;
case 1786:
switch(s[i]) {
case '0':
	state = 1525;
	break;
case '1':
	state = 1526;
	break;
}
break;
case 1787:
switch(s[i]) {
case '0':
	state = 1527;
	break;
case '1':
	state = 1528;
	break;
}
break;
case 1788:
switch(s[i]) {
case '0':
	state = 1529;
	break;
case '1':
	state = 1530;
	break;
}
break;
case 1789:
switch(s[i]) {
case '0':
	state = 1531;
	break;
case '1':
	state = 1532;
	break;
}
break;
case 1790:
switch(s[i]) {
case '0':
	state = 1533;
	break;
case '1':
	state = 1534;
	break;
}
break;
case 1791:
switch(s[i]) {
case '0':
	state = 1535;
	break;
case '1':
	state = 1536;
	break;
}
break;
case 1792:
switch(s[i]) {
case '0':
	state = 1537;
	break;
case '1':
	state = 1538;
	break;
}
break;
case 1793:
switch(s[i]) {
case '0':
	state = 1539;
	break;
case '1':
	state = 1540;
	break;
}
break;
case 1794:
switch(s[i]) {
case '0':
	state = 1541;
	break;
case '1':
	state = 1542;
	break;
}
break;
case 1795:
switch(s[i]) {
case '0':
	state = 1543;
	break;
case '1':
	state = 1544;
	break;
}
break;
case 1796:
switch(s[i]) {
case '0':
	state = 1545;
	break;
case '1':
	state = 1546;
	break;
}
break;
case 1797:
switch(s[i]) {
case '0':
	state = 1547;
	break;
case '1':
	state = 1548;
	break;
}
break;
case 1798:
switch(s[i]) {
case '0':
	state = 1549;
	break;
case '1':
	state = 1550;
	break;
}
break;
case 1799:
switch(s[i]) {
case '0':
	state = 1551;
	break;
case '1':
	state = 1552;
	break;
}
break;
case 1800:
switch(s[i]) {
case '0':
	state = 1553;
	break;
case '1':
	state = 1554;
	break;
}
break;
case 1801:
switch(s[i]) {
case '0':
	state = 1555;
	break;
case '1':
	state = 1556;
	break;
}
break;
case 1802:
switch(s[i]) {
case '0':
	state = 1557;
	break;
case '1':
	state = 1558;
	break;
}
break;
case 1803:
switch(s[i]) {
case '0':
	state = 1559;
	break;
case '1':
	state = 1560;
	break;
}
break;
case 1804:
switch(s[i]) {
case '0':
	state = 1561;
	break;
case '1':
	state = 1562;
	break;
}
break;
case 1805:
switch(s[i]) {
case '0':
	state = 1563;
	break;
case '1':
	state = 1564;
	break;
}
break;
case 1806:
switch(s[i]) {
case '0':
	state = 1565;
	break;
case '1':
	state = 1566;
	break;
}
break;
case 1807:
switch(s[i]) {
case '0':
	state = 1567;
	break;
case '1':
	state = 1568;
	break;
}
break;
case 1808:
switch(s[i]) {
case '0':
	state = 1569;
	break;
case '1':
	state = 1570;
	break;
}
break;
case 1809:
switch(s[i]) {
case '0':
	state = 1571;
	break;
case '1':
	state = 1572;
	break;
}
break;
case 1810:
switch(s[i]) {
case '0':
	state = 1573;
	break;
case '1':
	state = 1574;
	break;
}
break;
case 1811:
switch(s[i]) {
case '0':
	state = 1575;
	break;
case '1':
	state = 1576;
	break;
}
break;
case 1812:
switch(s[i]) {
case '0':
	state = 1577;
	break;
case '1':
	state = 1578;
	break;
}
break;
case 1813:
switch(s[i]) {
case '0':
	state = 1579;
	break;
case '1':
	state = 1580;
	break;
}
break;
case 1814:
switch(s[i]) {
case '0':
	state = 1581;
	break;
case '1':
	state = 1582;
	break;
}
break;
case 1815:
switch(s[i]) {
case '0':
	state = 1583;
	break;
case '1':
	state = 1584;
	break;
}
break;
case 1816:
switch(s[i]) {
case '0':
	state = 1585;
	break;
case '1':
	state = 1586;
	break;
}
break;
case 1817:
switch(s[i]) {
case '0':
	state = 1587;
	break;
case '1':
	state = 1588;
	break;
}
break;
case 1818:
switch(s[i]) {
case '0':
	state = 1589;
	break;
case '1':
	state = 1590;
	break;
}
break;
case 1819:
switch(s[i]) {
case '0':
	state = 1591;
	break;
case '1':
	state = 1592;
	break;
}
break;
case 1820:
switch(s[i]) {
case '0':
	state = 1593;
	break;
case '1':
	state = 1594;
	break;
}
break;
case 1821:
switch(s[i]) {
case '0':
	state = 1595;
	break;
case '1':
	state = 1596;
	break;
}
break;
case 1822:
switch(s[i]) {
case '0':
	state = 1597;
	break;
case '1':
	state = 1598;
	break;
}
break;
case 1823:
switch(s[i]) {
case '0':
	state = 1599;
	break;
case '1':
	state = 1600;
	break;
}
break;
case 1824:
switch(s[i]) {
case '0':
	state = 1601;
	break;
case '1':
	state = 1602;
	break;
}
break;
case 1825:
switch(s[i]) {
case '0':
	state = 1603;
	break;
case '1':
	state = 1604;
	break;
}
break;
case 1826:
switch(s[i]) {
case '0':
	state = 1605;
	break;
case '1':
	state = 1606;
	break;
}
break;
case 1827:
switch(s[i]) {
case '0':
	state = 1607;
	break;
case '1':
	state = 1608;
	break;
}
break;
case 1828:
switch(s[i]) {
case '0':
	state = 1609;
	break;
case '1':
	state = 1610;
	break;
}
break;
case 1829:
switch(s[i]) {
case '0':
	state = 1611;
	break;
case '1':
	state = 1612;
	break;
}
break;
case 1830:
switch(s[i]) {
case '0':
	state = 1613;
	break;
case '1':
	state = 1614;
	break;
}
break;
case 1831:
switch(s[i]) {
case '0':
	state = 1615;
	break;
case '1':
	state = 1616;
	break;
}
break;
case 1832:
switch(s[i]) {
case '0':
	state = 1617;
	break;
case '1':
	state = 1618;
	break;
}
break;
case 1833:
switch(s[i]) {
case '0':
	state = 1619;
	break;
case '1':
	state = 1620;
	break;
}
break;
case 1834:
switch(s[i]) {
case '0':
	state = 1621;
	break;
case '1':
	state = 1622;
	break;
}
break;
case 1835:
switch(s[i]) {
case '0':
	state = 1623;
	break;
case '1':
	state = 1624;
	break;
}
break;
case 1836:
switch(s[i]) {
case '0':
	state = 1625;
	break;
case '1':
	state = 1626;
	break;
}
break;
case 1837:
switch(s[i]) {
case '0':
	state = 1627;
	break;
case '1':
	state = 1628;
	break;
}
break;
case 1838:
switch(s[i]) {
case '0':
	state = 1629;
	break;
case '1':
	state = 1630;
	break;
}
break;
case 1839:
switch(s[i]) {
case '0':
	state = 1631;
	break;
case '1':
	state = 1632;
	break;
}
break;
case 1840:
switch(s[i]) {
case '0':
	state = 1633;
	break;
case '1':
	state = 1634;
	break;
}
break;
case 1841:
switch(s[i]) {
case '0':
	state = 1635;
	break;
case '1':
	state = 1636;
	break;
}
break;
case 1842:
switch(s[i]) {
case '0':
	state = 1637;
	break;
case '1':
	state = 1638;
	break;
}
break;
case 1843:
switch(s[i]) {
case '0':
	state = 1639;
	break;
case '1':
	state = 1640;
	break;
}
break;
case 1844:
switch(s[i]) {
case '0':
	state = 1641;
	break;
case '1':
	state = 1642;
	break;
}
break;
case 1845:
switch(s[i]) {
case '0':
	state = 1643;
	break;
case '1':
	state = 1644;
	break;
}
break;
case 1846:
switch(s[i]) {
case '0':
	state = 1645;
	break;
case '1':
	state = 1646;
	break;
}
break;
case 1847:
switch(s[i]) {
case '0':
	state = 1647;
	break;
case '1':
	state = 1648;
	break;
}
break;
case 1848:
switch(s[i]) {
case '0':
	state = 1649;
	break;
case '1':
	state = 1650;
	break;
}
break;
case 1849:
switch(s[i]) {
case '0':
	state = 1651;
	break;
case '1':
	state = 1652;
	break;
}
break;
case 1850:
switch(s[i]) {
case '0':
	state = 1653;
	break;
case '1':
	state = 1654;
	break;
}
break;
case 1851:
switch(s[i]) {
case '0':
	state = 1655;
	break;
case '1':
	state = 1656;
	break;
}
break;
case 1852:
switch(s[i]) {
case '0':
	state = 1657;
	break;
case '1':
	state = 1658;
	break;
}
break;
case 1853:
switch(s[i]) {
case '0':
	state = 1659;
	break;
case '1':
	state = 1660;
	break;
}
break;
case 1854:
switch(s[i]) {
case '0':
	state = 1661;
	break;
case '1':
	state = 1662;
	break;
}
break;
case 1855:
switch(s[i]) {
case '0':
	state = 1663;
	break;
case '1':
	state = 1664;
	break;
}
break;
case 1856:
switch(s[i]) {
case '0':
	state = 1665;
	break;
case '1':
	state = 1666;
	break;
}
break;
case 1857:
switch(s[i]) {
case '0':
	state = 1667;
	break;
case '1':
	state = 1668;
	break;
}
break;
case 1858:
switch(s[i]) {
case '0':
	state = 1669;
	break;
case '1':
	state = 1670;
	break;
}
break;
case 1859:
switch(s[i]) {
case '0':
	state = 1671;
	break;
case '1':
	state = 1672;
	break;
}
break;
case 1860:
switch(s[i]) {
case '0':
	state = 1673;
	break;
case '1':
	state = 1674;
	break;
}
break;
case 1861:
switch(s[i]) {
case '0':
	state = 1675;
	break;
case '1':
	state = 1676;
	break;
}
break;
case 1862:
switch(s[i]) {
case '0':
	state = 1677;
	break;
case '1':
	state = 1678;
	break;
}
break;
case 1863:
switch(s[i]) {
case '0':
	state = 1679;
	break;
case '1':
	state = 1680;
	break;
}
break;
case 1864:
switch(s[i]) {
case '0':
	state = 1681;
	break;
case '1':
	state = 1682;
	break;
}
break;
case 1865:
switch(s[i]) {
case '0':
	state = 1683;
	break;
case '1':
	state = 1684;
	break;
}
break;
case 1866:
switch(s[i]) {
case '0':
	state = 1685;
	break;
case '1':
	state = 1686;
	break;
}
break;
case 1867:
switch(s[i]) {
case '0':
	state = 1687;
	break;
case '1':
	state = 1688;
	break;
}
break;
case 1868:
switch(s[i]) {
case '0':
	state = 1689;
	break;
case '1':
	state = 1690;
	break;
}
break;
case 1869:
switch(s[i]) {
case '0':
	state = 1691;
	break;
case '1':
	state = 1692;
	break;
}
break;
case 1870:
switch(s[i]) {
case '0':
	state = 1693;
	break;
case '1':
	state = 1694;
	break;
}
break;
case 1871:
switch(s[i]) {
case '0':
	state = 1695;
	break;
case '1':
	state = 1696;
	break;
}
break;
case 1872:
switch(s[i]) {
case '0':
	state = 1697;
	break;
case '1':
	state = 1698;
	break;
}
break;
case 1873:
switch(s[i]) {
case '0':
	state = 1699;
	break;
case '1':
	state = 1700;
	break;
}
break;
case 1874:
switch(s[i]) {
case '0':
	state = 1701;
	break;
case '1':
	state = 1702;
	break;
}
break;
case 1875:
switch(s[i]) {
case '0':
	state = 1703;
	break;
case '1':
	state = 1704;
	break;
}
break;
case 1876:
switch(s[i]) {
case '0':
	state = 1705;
	break;
case '1':
	state = 1706;
	break;
}
break;
case 1877:
switch(s[i]) {
case '0':
	state = 1707;
	break;
case '1':
	state = 1708;
	break;
}
break;
case 1878:
switch(s[i]) {
case '0':
	state = 1709;
	break;
case '1':
	state = 1710;
	break;
}
break;
case 1879:
switch(s[i]) {
case '0':
	state = 1711;
	break;
case '1':
	state = 1712;
	break;
}
break;
case 1880:
switch(s[i]) {
case '0':
	state = 1713;
	break;
case '1':
	state = 1714;
	break;
}
break;
case 1881:
switch(s[i]) {
case '0':
	state = 1715;
	break;
case '1':
	state = 1716;
	break;
}
break;
case 1882:
switch(s[i]) {
case '0':
	state = 1717;
	break;
case '1':
	state = 1718;
	break;
}
break;
case 1883:
switch(s[i]) {
case '0':
	state = 1719;
	break;
case '1':
	state = 1720;
	break;
}
break;
case 1884:
switch(s[i]) {
case '0':
	state = 1721;
	break;
case '1':
	state = 1722;
	break;
}
break;
case 1885:
switch(s[i]) {
case '0':
	state = 1723;
	break;
case '1':
	state = 1724;
	break;
}
break;
case 1886:
switch(s[i]) {
case '0':
	state = 1725;
	break;
case '1':
	state = 1726;
	break;
}
break;
case 1887:
switch(s[i]) {
case '0':
	state = 1727;
	break;
case '1':
	state = 1728;
	break;
}
break;
case 1888:
switch(s[i]) {
case '0':
	state = 1729;
	break;
case '1':
	state = 1730;
	break;
}
break;
case 1889:
switch(s[i]) {
case '0':
	state = 1731;
	break;
case '1':
	state = 1732;
	break;
}
break;
case 1890:
switch(s[i]) {
case '0':
	state = 1733;
	break;
case '1':
	state = 1734;
	break;
}
break;
case 1891:
switch(s[i]) {
case '0':
	state = 1735;
	break;
case '1':
	state = 1736;
	break;
}
break;
case 1892:
switch(s[i]) {
case '0':
	state = 1737;
	break;
case '1':
	state = 1738;
	break;
}
break;
case 1893:
switch(s[i]) {
case '0':
	state = 1739;
	break;
case '1':
	state = 1740;
	break;
}
break;
case 1894:
switch(s[i]) {
case '0':
	state = 1741;
	break;
case '1':
	state = 1742;
	break;
}
break;
case 1895:
switch(s[i]) {
case '0':
	state = 1743;
	break;
case '1':
	state = 1744;
	break;
}
break;
case 1896:
switch(s[i]) {
case '0':
	state = 1745;
	break;
case '1':
	state = 1746;
	break;
}
break;
case 1897:
switch(s[i]) {
case '0':
	state = 1747;
	break;
case '1':
	state = 1748;
	break;
}
break;
case 1898:
switch(s[i]) {
case '0':
	state = 1749;
	break;
case '1':
	state = 1750;
	break;
}
break;
case 1899:
switch(s[i]) {
case '0':
	state = 1751;
	break;
case '1':
	state = 1752;
	break;
}
break;
case 1900:
switch(s[i]) {
case '0':
	state = 1753;
	break;
case '1':
	state = 1754;
	break;
}
break;
case 1901:
switch(s[i]) {
case '0':
	state = 1755;
	break;
case '1':
	state = 1756;
	break;
}
break;
case 1902:
switch(s[i]) {
case '0':
	state = 1757;
	break;
case '1':
	state = 1758;
	break;
}
break;
case 1903:
switch(s[i]) {
case '0':
	state = 1759;
	break;
case '1':
	state = 1760;
	break;
}
break;
case 1904:
switch(s[i]) {
case '0':
	state = 1761;
	break;
case '1':
	state = 1762;
	break;
}
break;
case 1905:
switch(s[i]) {
case '0':
	state = 1763;
	break;
case '1':
	state = 1764;
	break;
}
break;
case 1906:
switch(s[i]) {
case '0':
	state = 1765;
	break;
case '1':
	state = 1766;
	break;
}
break;
case 1907:
switch(s[i]) {
case '0':
	state = 1767;
	break;
case '1':
	state = 1768;
	break;
}
break;
case 1908:
switch(s[i]) {
case '0':
	state = 1769;
	break;
case '1':
	state = 1770;
	break;
}
break;
case 1909:
switch(s[i]) {
case '0':
	state = 1771;
	break;
case '1':
	state = 1772;
	break;
}
break;
case 1910:
switch(s[i]) {
case '0':
	state = 1773;
	break;
case '1':
	state = 1774;
	break;
}
break;
case 1911:
switch(s[i]) {
case '0':
	state = 1775;
	break;
case '1':
	state = 1776;
	break;
}
break;
case 1912:
switch(s[i]) {
case '0':
	state = 1777;
	break;
case '1':
	state = 1778;
	break;
}
break;
case 1913:
switch(s[i]) {
case '0':
	state = 1779;
	break;
case '1':
	state = 1780;
	break;
}
break;
case 1914:
switch(s[i]) {
case '0':
	state = 1781;
	break;
case '1':
	state = 1782;
	break;
}
break;
case 1915:
switch(s[i]) {
case '0':
	state = 1783;
	break;
case '1':
	state = 1784;
	break;
}
break;
case 1916:
switch(s[i]) {
case '0':
	state = 1785;
	break;
case '1':
	state = 1786;
	break;
}
break;
case 1917:
switch(s[i]) {
case '0':
	state = 1787;
	break;
case '1':
	state = 1788;
	break;
}
break;
case 1918:
switch(s[i]) {
case '0':
	state = 1789;
	break;
case '1':
	state = 1790;
	break;
}
break;
case 1919:
switch(s[i]) {
case '0':
	state = 1791;
	break;
case '1':
	state = 1792;
	break;
}
break;
case 1920:
switch(s[i]) {
case '0':
	state = 1793;
	break;
case '1':
	state = 1794;
	break;
}
break;
case 1921:
switch(s[i]) {
case '0':
	state = 1795;
	break;
case '1':
	state = 1796;
	break;
}
break;
case 1922:
switch(s[i]) {
case '0':
	state = 1797;
	break;
case '1':
	state = 1798;
	break;
}
break;
case 1923:
switch(s[i]) {
case '0':
	state = 1799;
	break;
case '1':
	state = 1800;
	break;
}
break;
case 1924:
switch(s[i]) {
case '0':
	state = 1801;
	break;
case '1':
	state = 1802;
	break;
}
break;
case 1925:
switch(s[i]) {
case '0':
	state = 1803;
	break;
case '1':
	state = 1804;
	break;
}
break;
case 1926:
switch(s[i]) {
case '0':
	state = 1805;
	break;
case '1':
	state = 1806;
	break;
}
break;
case 1927:
switch(s[i]) {
case '0':
	state = 1807;
	break;
case '1':
	state = 1808;
	break;
}
break;
case 1928:
switch(s[i]) {
case '0':
	state = 1809;
	break;
case '1':
	state = 1810;
	break;
}
break;
case 1929:
switch(s[i]) {
case '0':
	state = 1811;
	break;
case '1':
	state = 1812;
	break;
}
break;
case 1930:
switch(s[i]) {
case '0':
	state = 1813;
	break;
case '1':
	state = 1814;
	break;
}
break;
case 1931:
switch(s[i]) {
case '0':
	state = 1815;
	break;
case '1':
	state = 1816;
	break;
}
break;
case 1932:
switch(s[i]) {
case '0':
	state = 1817;
	break;
case '1':
	state = 1818;
	break;
}
break;
case 1933:
switch(s[i]) {
case '0':
	state = 1819;
	break;
case '1':
	state = 1820;
	break;
}
break;
case 1934:
switch(s[i]) {
case '0':
	state = 1821;
	break;
case '1':
	state = 1822;
	break;
}
break;
case 1935:
switch(s[i]) {
case '0':
	state = 1823;
	break;
case '1':
	state = 1824;
	break;
}
break;
case 1936:
switch(s[i]) {
case '0':
	state = 1825;
	break;
case '1':
	state = 1826;
	break;
}
break;
case 1937:
switch(s[i]) {
case '0':
	state = 1827;
	break;
case '1':
	state = 1828;
	break;
}
break;
case 1938:
switch(s[i]) {
case '0':
	state = 1829;
	break;
case '1':
	state = 1830;
	break;
}
break;
case 1939:
switch(s[i]) {
case '0':
	state = 1831;
	break;
case '1':
	state = 1832;
	break;
}
break;
case 1940:
switch(s[i]) {
case '0':
	state = 1833;
	break;
case '1':
	state = 1834;
	break;
}
break;
case 1941:
switch(s[i]) {
case '0':
	state = 1835;
	break;
case '1':
	state = 1836;
	break;
}
break;
case 1942:
switch(s[i]) {
case '0':
	state = 1837;
	break;
case '1':
	state = 1838;
	break;
}
break;
case 1943:
switch(s[i]) {
case '0':
	state = 1839;
	break;
case '1':
	state = 1840;
	break;
}
break;
case 1944:
switch(s[i]) {
case '0':
	state = 1841;
	break;
case '1':
	state = 1842;
	break;
}
break;
case 1945:
switch(s[i]) {
case '0':
	state = 1843;
	break;
case '1':
	state = 1844;
	break;
}
break;
case 1946:
switch(s[i]) {
case '0':
	state = 1845;
	break;
case '1':
	state = 1846;
	break;
}
break;
case 1947:
switch(s[i]) {
case '0':
	state = 1847;
	break;
case '1':
	state = 1848;
	break;
}
break;
case 1948:
switch(s[i]) {
case '0':
	state = 1849;
	break;
case '1':
	state = 1850;
	break;
}
break;
case 1949:
switch(s[i]) {
case '0':
	state = 1851;
	break;
case '1':
	state = 1852;
	break;
}
break;
case 1950:
switch(s[i]) {
case '0':
	state = 1853;
	break;
case '1':
	state = 1854;
	break;
}
break;
case 1951:
switch(s[i]) {
case '0':
	state = 1855;
	break;
case '1':
	state = 1856;
	break;
}
break;
case 1952:
switch(s[i]) {
case '0':
	state = 1857;
	break;
case '1':
	state = 1858;
	break;
}
break;
case 1953:
switch(s[i]) {
case '0':
	state = 1859;
	break;
case '1':
	state = 1860;
	break;
}
break;
case 1954:
switch(s[i]) {
case '0':
	state = 1861;
	break;
case '1':
	state = 1862;
	break;
}
break;
case 1955:
switch(s[i]) {
case '0':
	state = 1863;
	break;
case '1':
	state = 1864;
	break;
}
break;
case 1956:
switch(s[i]) {
case '0':
	state = 1865;
	break;
case '1':
	state = 1866;
	break;
}
break;
case 1957:
switch(s[i]) {
case '0':
	state = 1867;
	break;
case '1':
	state = 1868;
	break;
}
break;
case 1958:
switch(s[i]) {
case '0':
	state = 1869;
	break;
case '1':
	state = 1870;
	break;
}
break;
case 1959:
switch(s[i]) {
case '0':
	state = 1871;
	break;
case '1':
	state = 1872;
	break;
}
break;
case 1960:
switch(s[i]) {
case '0':
	state = 1873;
	break;
case '1':
	state = 1874;
	break;
}
break;
case 1961:
switch(s[i]) {
case '0':
	state = 1875;
	break;
case '1':
	state = 1876;
	break;
}
break;
case 1962:
switch(s[i]) {
case '0':
	state = 1877;
	break;
case '1':
	state = 1878;
	break;
}
break;
case 1963:
switch(s[i]) {
case '0':
	state = 1879;
	break;
case '1':
	state = 1880;
	break;
}
break;
case 1964:
switch(s[i]) {
case '0':
	state = 1881;
	break;
case '1':
	state = 1882;
	break;
}
break;
case 1965:
switch(s[i]) {
case '0':
	state = 1883;
	break;
case '1':
	state = 1884;
	break;
}
break;
case 1966:
switch(s[i]) {
case '0':
	state = 1885;
	break;
case '1':
	state = 1886;
	break;
}
break;
case 1967:
switch(s[i]) {
case '0':
	state = 1887;
	break;
case '1':
	state = 1888;
	break;
}
break;
case 1968:
switch(s[i]) {
case '0':
	state = 1889;
	break;
case '1':
	state = 1890;
	break;
}
break;
case 1969:
switch(s[i]) {
case '0':
	state = 1891;
	break;
case '1':
	state = 1892;
	break;
}
break;
case 1970:
switch(s[i]) {
case '0':
	state = 1893;
	break;
case '1':
	state = 1894;
	break;
}
break;
case 1971:
switch(s[i]) {
case '0':
	state = 1895;
	break;
case '1':
	state = 1896;
	break;
}
break;
case 1972:
switch(s[i]) {
case '0':
	state = 1897;
	break;
case '1':
	state = 1898;
	break;
}
break;
case 1973:
switch(s[i]) {
case '0':
	state = 1899;
	break;
case '1':
	state = 1900;
	break;
}
break;
case 1974:
switch(s[i]) {
case '0':
	state = 1901;
	break;
case '1':
	state = 1902;
	break;
}
break;
case 1975:
switch(s[i]) {
case '0':
	state = 1903;
	break;
case '1':
	state = 1904;
	break;
}
break;
case 1976:
switch(s[i]) {
case '0':
	state = 1905;
	break;
case '1':
	state = 1906;
	break;
}
break;
case 1977:
switch(s[i]) {
case '0':
	state = 1907;
	break;
case '1':
	state = 1908;
	break;
}
break;
case 1978:
switch(s[i]) {
case '0':
	state = 1909;
	break;
case '1':
	state = 1910;
	break;
}
break;
case 1979:
switch(s[i]) {
case '0':
	state = 1911;
	break;
case '1':
	state = 1912;
	break;
}
break;
case 1980:
switch(s[i]) {
case '0':
	state = 1913;
	break;
case '1':
	state = 1914;
	break;
}
break;
case 1981:
switch(s[i]) {
case '0':
	state = 1915;
	break;
case '1':
	state = 1916;
	break;
}
break;
case 1982:
switch(s[i]) {
case '0':
	state = 1917;
	break;
case '1':
	state = 1918;
	break;
}
break;
case 1983:
switch(s[i]) {
case '0':
	state = 1919;
	break;
case '1':
	state = 1920;
	break;
}
break;
case 1984:
switch(s[i]) {
case '0':
	state = 1921;
	break;
case '1':
	state = 1922;
	break;
}
break;
case 1985:
switch(s[i]) {
case '0':
	state = 1923;
	break;
case '1':
	state = 1924;
	break;
}
break;
case 1986:
switch(s[i]) {
case '0':
	state = 1925;
	break;
case '1':
	state = 1926;
	break;
}
break;
case 1987:
switch(s[i]) {
case '0':
	state = 1927;
	break;
case '1':
	state = 1928;
	break;
}
break;
case 1988:
switch(s[i]) {
case '0':
	state = 1929;
	break;
case '1':
	state = 1930;
	break;
}
break;
case 1989:
switch(s[i]) {
case '0':
	state = 1931;
	break;
case '1':
	state = 1932;
	break;
}
break;
case 1990:
switch(s[i]) {
case '0':
	state = 1933;
	break;
case '1':
	state = 1934;
	break;
}
break;
case 1991:
switch(s[i]) {
case '0':
	state = 1935;
	break;
case '1':
	state = 1936;
	break;
}
break;
case 1992:
switch(s[i]) {
case '0':
	state = 1937;
	break;
case '1':
	state = 1938;
	break;
}
break;
case 1993:
switch(s[i]) {
case '0':
	state = 1939;
	break;
case '1':
	state = 1940;
	break;
}
break;
case 1994:
switch(s[i]) {
case '0':
	state = 1941;
	break;
case '1':
	state = 1942;
	break;
}
break;
case 1995:
switch(s[i]) {
case '0':
	state = 1943;
	break;
case '1':
	state = 1944;
	break;
}
break;
case 1996:
switch(s[i]) {
case '0':
	state = 1945;
	break;
case '1':
	state = 1946;
	break;
}
break;
case 1997:
switch(s[i]) {
case '0':
	state = 1947;
	break;
case '1':
	state = 1948;
	break;
}
break;
case 1998:
switch(s[i]) {
case '0':
	state = 1949;
	break;
case '1':
	state = 1950;
	break;
}
break;
case 1999:
switch(s[i]) {
case '0':
	state = 1951;
	break;
case '1':
	state = 1952;
	break;
}
break;
case 2000:
switch(s[i]) {
case '0':
	state = 1953;
	break;
case '1':
	state = 1954;
	break;
}
break;
case 2001:
switch(s[i]) {
case '0':
	state = 1955;
	break;
case '1':
	state = 1956;
	break;
}
break;
case 2002:
switch(s[i]) {
case '0':
	state = 1957;
	break;
case '1':
	state = 1958;
	break;
}
break;
case 2003:
switch(s[i]) {
case '0':
	state = 1959;
	break;
case '1':
	state = 1960;
	break;
}
break;
case 2004:
switch(s[i]) {
case '0':
	state = 1961;
	break;
case '1':
	state = 1962;
	break;
}
break;
case 2005:
switch(s[i]) {
case '0':
	state = 1963;
	break;
case '1':
	state = 1964;
	break;
}
break;
case 2006:
switch(s[i]) {
case '0':
	state = 1965;
	break;
case '1':
	state = 1966;
	break;
}
break;
case 2007:
switch(s[i]) {
case '0':
	state = 1967;
	break;
case '1':
	state = 1968;
	break;
}
break;
case 2008:
switch(s[i]) {
case '0':
	state = 1969;
	break;
case '1':
	state = 1970;
	break;
}
break;
case 2009:
switch(s[i]) {
case '0':
	state = 1971;
	break;
case '1':
	state = 1972;
	break;
}
break;
case 2010:
switch(s[i]) {
case '0':
	state = 1973;
	break;
case '1':
	state = 1974;
	break;
}
break;
case 2011:
switch(s[i]) {
case '0':
	state = 1975;
	break;
case '1':
	state = 1976;
	break;
}
break;
case 2012:
switch(s[i]) {
case '0':
	state = 1977;
	break;
case '1':
	state = 1978;
	break;
}
break;
case 2013:
switch(s[i]) {
case '0':
	state = 1979;
	break;
case '1':
	state = 1980;
	break;
}
break;
case 2014:
switch(s[i]) {
case '0':
	state = 1981;
	break;
case '1':
	state = 1982;
	break;
}
break;
case 2015:
switch(s[i]) {
case '0':
	state = 1983;
	break;
case '1':
	state = 1984;
	break;
}
break;
case 2016:
switch(s[i]) {
case '0':
	state = 1985;
	break;
case '1':
	state = 1986;
	break;
}
break;
case 2017:
switch(s[i]) {
case '0':
	state = 1987;
	break;
case '1':
	state = 1988;
	break;
}
break;
case 2018:
switch(s[i]) {
case '0':
	state = 1989;
	break;
case '1':
	state = 1990;
	break;
}
break;
case 2019:
switch(s[i]) {
case '0':
	state = 1991;
	break;
case '1':
	state = 1992;
	break;
}
break;
case 2020:
switch(s[i]) {
case '0':
	state = 1993;
	break;
case '1':
	state = 1994;
	break;
}
break;
case 2021:
switch(s[i]) {
case '0':
	state = 1995;
	break;
case '1':
	state = 1996;
	break;
}
break;
case 2022:
switch(s[i]) {
case '0':
	state = 1997;
	break;
case '1':
	state = 1998;
	break;
}
break;
case 2023:
switch(s[i]) {
case '0':
	state = 1999;
	break;
case '1':
	state = 2000;
	break;
}
break;
case 2024:
switch(s[i]) {
case '0':
	state = 2001;
	break;
case '1':
	state = 2002;
	break;
}
break;
case 2025:
switch(s[i]) {
case '0':
	state = 2003;
	break;
case '1':
	state = 2004;
	break;
}
break;
case 2026:
switch(s[i]) {
case '0':
	state = 2005;
	break;
case '1':
	state = 2006;
	break;
}
break;
case 2027:
switch(s[i]) {
case '0':
	state = 2007;
	break;
case '1':
	state = 2008;
	break;
}
break;
case 2028:
switch(s[i]) {
case '0':
	state = 2009;
	break;
case '1':
	state = 2010;
	break;
}
break;
case 2029:
switch(s[i]) {
case '0':
	state = 2011;
	break;
case '1':
	state = 2012;
	break;
}
break;
case 2030:
switch(s[i]) {
case '0':
	state = 2013;
	break;
case '1':
	state = 2014;
	break;
}
break;
case 2031:
switch(s[i]) {
case '0':
	state = 2015;
	break;
case '1':
	state = 2016;
	break;
}
break;
case 2032:
switch(s[i]) {
case '0':
	state = 2017;
	break;
case '1':
	state = 2018;
	break;
}
break;
case 2033:
switch(s[i]) {
case '0':
	state = 2019;
	break;
case '1':
	state = 2020;
	break;
}
break;
case 2034:
switch(s[i]) {
case '0':
	state = 2021;
	break;
case '1':
	state = 2022;
	break;
}
break;
case 2035:
switch(s[i]) {
case '0':
	state = 2023;
	break;
case '1':
	state = 2024;
	break;
}
break;
case 2036:
switch(s[i]) {
case '0':
	state = 2025;
	break;
case '1':
	state = 2026;
	break;
}
break;
case 2037:
switch(s[i]) {
case '0':
	state = 2027;
	break;
case '1':
	state = 2028;
	break;
}
break;
case 2038:
switch(s[i]) {
case '0':
	state = 2029;
	break;
case '1':
	state = 2030;
	break;
}
break;
case 2039:
switch(s[i]) {
case '0':
	state = 2031;
	break;
case '1':
	state = 2032;
	break;
}
break;
case 2040:
switch(s[i]) {
case '0':
	state = 2033;
	break;
case '1':
	state = 2034;
	break;
}
break;
case 2041:
switch(s[i]) {
case '0':
	state = 2035;
	break;
case '1':
	state = 2036;
	break;
}
break;
case 2042:
switch(s[i]) {
case '0':
	state = 2037;
	break;
case '1':
	state = 2038;
	break;
}
break;
case 2043:
switch(s[i]) {
case '0':
	state = 2039;
	break;
case '1':
	state = 2040;
	break;
}
break;
case 2044:
switch(s[i]) {
case '0':
	state = 2041;
	break;
case '1':
	state = 2042;
	break;
}
break;
case 2045:
switch(s[i]) {
case '0':
	state = 2043;
	break;
case '1':
	state = 2044;
	break;
}
break;
case 2046:
switch(s[i]) {
case '0':
	state = 2045;
	break;
case '1':
	state = 2046;
	break;
}
break;

            }
    }
    cout << bitset<16>(max(state - (int) pow(2, 10),0) + 1) << endl;
    return (max(state - (int) pow(2, 10),0) + 1) >= pow(2, 9);
}

int main() {
    string str;
    cin >> str;
    while (str != "a") {
        cout << f4(str) << endl;
        cin >> str;
    }
}