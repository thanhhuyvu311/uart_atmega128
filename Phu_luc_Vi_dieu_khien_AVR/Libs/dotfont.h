#include <avr/pgmspace.h>
unsigned char *const font7x5[] PROGMEM= {///////ASCII
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 32
	0x00, 0x00, 0x7d, 0x00, 0x00  ,// 33
	0x00, 0x70, 0x00, 0x70, 0x00  ,// 34
	0x14, 0x7f, 0x14, 0x7f, 0x14  ,// 35
	0x12, 0x2a, 0x7f, 0x2a, 0x24  ,// 36
	0x62, 0x64, 0x08, 0x13, 0x23  ,// 37
	0x36, 0x49, 0x55, 0x22, 0x05  ,// 38
	0x00, 0x50, 0x60, 0x00, 0x00  ,// 39
	0x00, 0x1c, 0x22, 0x41, 0x00  ,// 40
	0x00, 0x41, 0x22, 0x1c, 0x00  ,// 41
	0x14, 0x08, 0x3e, 0x08, 0x14  ,// 42
	0x08, 0x08, 0x3e, 0x08, 0x08  ,// 43
	0x00, 0x05, 0x06, 0x00, 0x00  ,// 44
	0x08, 0x08, 0x08, 0x08, 0x08  ,// 45
	0x00, 0x03, 0x03, 0x00, 0x00  ,// 46
	0x02, 0x04, 0x08, 0x10, 0x20  ,// 47
	0x3e, 0x45, 0x49, 0x51, 0x3e  ,// 48: '0'
	0x00, 0x21, 0x7f, 0x01, 0x00  ,// 49: '1'
	0x21, 0x43, 0x45, 0x49, 0x31  ,// 50: '2'
	0x42, 0x41, 0x51, 0x69, 0x46  ,// 51: '3'
	0x0c, 0x14, 0x24, 0x7f, 0x04  ,// 52: '4'
	0x72, 0x51, 0x51, 0x51, 0x4e  ,// 53  '5'
	0x1e, 0x29, 0x49, 0x49, 0x06  ,// 54  '6'
	0x40, 0x47, 0x48, 0x50, 0x60  ,// 55  '7'
	0x36, 0x49, 0x49, 0x49, 0x36  ,// 56  '8'
	0x30, 0x49, 0x49, 0x4a, 0x3c  ,// 57: '9'
	0x00, 0x36, 0x36, 0x00, 0x00  ,// 58
	0x00, 0x35, 0x36, 0x00, 0x00  ,// 59
	0x08, 0x14, 0x22, 0x41, 0x00  ,// 60
	0x14, 0x14, 0x14, 0x14, 0x14  ,// 61
	0x41, 0x22, 0x14, 0x08, 0x00  ,// 62
	0x20, 0x40, 0x45, 0x48, 0x30  ,// 63
	0x26, 0x49, 0x4f, 0x41, 0x3e  ,// 64
	0x3f, 0x44, 0x44, 0x44, 0x3f  ,// 65  'A'
	0x7f, 0x49, 0x49, 0x49, 0x36  ,// 66  'B'
	0x3e, 0x41, 0x41, 0x41, 0x22  ,// 67  'C'
	0x7f, 0x41, 0x41, 0x41, 0x3e  ,// 68  'D'
	0x7f, 0x49, 0x49, 0x49, 0x41  ,// 69  'E'
	0x7f, 0x48, 0x48, 0x48, 0x40  ,// 70  'F'
	0x3e, 0x41, 0x49, 0x49, 0x2f  ,// 71
	0x7f, 0x08, 0x08, 0x08, 0x7f  ,// 72
	0x00, 0x41, 0x7f, 0x41, 0x00  ,// 73
	0x02, 0x01, 0x41, 0x7e, 0x40  ,// 74
	0x7f, 0x08, 0x14, 0x22, 0x41  ,// 75
	0x7f, 0x01, 0x01, 0x01, 0x01  ,// 76
	0x7f, 0x40, 0x20, 0x40, 0x7f  ,// 77
	0x7f, 0x10, 0x08, 0x04, 0x7f  ,// 78
	0x3e, 0x41, 0x41, 0x41, 0x3e  ,// 79
	0x7f, 0x48, 0x48, 0x48, 0x30  ,// 80
	0x3e, 0x41, 0x45, 0x42, 0x3d  ,// 81
	0x7f, 0x48, 0x4c, 0x4a, 0x31  ,// 82
	0x31, 0x49, 0x49, 0x49, 0x46  ,// 83
	0x40, 0x40, 0x7f, 0x40, 0x40  ,// 84
	0x7e, 0x01, 0x01, 0x01, 0x7e  ,// 85
	0x7c, 0x02, 0x01, 0x02, 0x7c  ,// 86
	0x7e, 0x01, 0x0e, 0x01, 0x7e  ,// 87
	0x63, 0x14, 0x08, 0x14, 0x63  ,// 88
	0x70, 0x08, 0x07, 0x08, 0x70  ,// 89
	0x43, 0x45, 0x49, 0x51, 0x61  ,// 90
	0x00, 0x7f, 0x41, 0x41, 0x00  ,// 91
	0x54, 0x34, 0x1f, 0x34, 0x54  ,// 92
	0x00, 0x41, 0x41, 0x7f, 0x00  ,// 93
	0x10, 0x20, 0x40, 0x20, 0x10  ,// 94
	0x01, 0x01, 0x01, 0x01, 0x01  ,// 95
	0x00, 0x40, 0x20, 0x10, 0x00  ,// 96
	0x02, 0x15, 0x15, 0x15, 0x0f  ,// 97  'a'
	0x7f, 0x09, 0x11, 0x11, 0x0e  ,// 98
	0x0e, 0x11, 0x11, 0x11, 0x02  ,// 99
	0x0e, 0x11, 0x11, 0x09, 0x7f  ,// 100
	0x0e, 0x15, 0x15, 0x15, 0x0c  ,// 101
	0x08, 0x3f, 0x48, 0x40, 0x20  ,// 102
	0x30, 0x49, 0x49, 0x49, 0x7e  ,// 103
	0x7f, 0x08, 0x10, 0x10, 0x0f  ,// 104
	0x00, 0x11, 0x5f, 0x01, 0x00  ,// 105
	0x02, 0x01, 0x21, 0x7e, 0x00  ,// 106
	0x7f, 0x04, 0x0a, 0x11, 0x00  ,// 107
	0x00, 0x41, 0x7f, 0x01, 0x00  ,// 108
	0x1f, 0x10, 0x0c, 0x10, 0x0f  ,// 109
	0x1f, 0x08, 0x10, 0x10, 0x0f  ,// 110
	0x0e, 0x11, 0x11, 0x11, 0x0e  ,// 111
	0x1f, 0x14, 0x14, 0x14, 0x08  ,// 112
	0x08, 0x14, 0x14, 0x0c, 0x1f  ,// 113
	0x1f, 0x08, 0x10, 0x10, 0x08  ,// 114
	0x09, 0x15, 0x15, 0x15, 0x12  ,// 115
	0x20, 0x7e, 0x21, 0x01, 0x02  ,// 116
	0x1e, 0x01, 0x01, 0x02, 0x1f  ,// 117
	0x1c, 0x02, 0x01, 0x02, 0x1c  ,// 118
	0x1e, 0x01, 0x06, 0x01, 0x1e  ,// 119
	0x11, 0x0a, 0x04, 0x0a, 0x11  ,// 120
	0x18, 0x05, 0x05, 0x05, 0x1e  ,// 121
	0x11, 0x13, 0x15, 0x19, 0x11  ,// 122
	0x00, 0x08, 0x36, 0x41, 0x00  ,// 123
	0x00, 0x00, 0x7f, 0x00, 0x00  ,// 124
	0x00, 0x41, 0x36, 0x08, 0x00  ,// 125
	0x08, 0x08, 0x2a, 0x1c, 0x08  ,// 126
	0x08, 0x1c, 0x2a, 0x08, 0x08  ,// 127
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 128
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 129
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 130
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 131
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 132
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 133
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 134
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 135
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 136
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 137
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 138
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 139
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 140
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 141
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 142
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 143
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 144
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 145
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 146
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 147
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 148
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 149
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 150
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 151
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 152
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 153
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 154
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 155
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 156
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 157
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 158
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 159
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 160
	0x07, 0x05, 0x07, 0x00, 0x00  ,// 161
	0x00, 0x00, 0x78, 0x40, 0x40  ,// 162
	0x01, 0x01, 0x0f, 0x00, 0x00  ,// 163
	0x04, 0x02, 0x01, 0x00, 0x00  ,// 164
	0x00, 0x0c, 0x0c, 0x00, 0x00  ,// 165
	0x28, 0x28, 0x29, 0x2a, 0x3c  ,// 166
	0x10, 0x11, 0x16, 0x14, 0x18  ,// 167
	0x02, 0x04, 0x0f, 0x10, 0x00  ,// 168
	0x0c, 0x08, 0x19, 0x09, 0x0e  ,// 169
	0x09, 0x09, 0x0f, 0x09, 0x09  ,// 170
	0x09, 0x0a, 0x0c, 0x1f, 0x08  ,// 171
	0x08, 0x1f, 0x08, 0x0a, 0x0c  ,// 172
	0x01, 0x09, 0x09, 0x0f, 0x01  ,// 173
	0x15, 0x15, 0x15, 0x1f, 0x00  ,// 174
	0x0c, 0x00, 0x0d, 0x01, 0x0e  ,// 175
	0x04, 0x04, 0x04, 0x04, 0x04  ,// 176
	0x40, 0x41, 0x5e, 0x48, 0x70  ,// 177
	0x04, 0x08, 0x1f, 0x20, 0x40  ,// 178
	0x38, 0x20, 0x61, 0x22, 0x3c  ,// 179
	0x11, 0x11, 0x1f, 0x11, 0x11  ,// 180
	0x22, 0x24, 0x28, 0x7f, 0x20  ,// 181
	0x21, 0x7e, 0x20, 0x21, 0x3e  ,// 182
	0x28, 0x28, 0x7f, 0x28, 0x28  ,// 183
	0x08, 0x31, 0x21, 0x22, 0x3c  ,// 184
	0x10, 0x60, 0x21, 0x3e, 0x20  ,// 185
	0x21, 0x21, 0x21, 0x21, 0x3f  ,// 186
	0x20, 0x79, 0x22, 0x7c, 0x20  ,// 187
	0x29, 0x29, 0x01, 0x02, 0x1c  ,// 188
	0x21, 0x22, 0x24, 0x2a, 0x31  ,// 189
	0x20, 0x7e, 0x21, 0x29, 0x31  ,// 190
	0x30, 0x09, 0x01, 0x02, 0x3c  ,// 191
	0x08, 0x31, 0x29, 0x26, 0x3c  ,// 192
	0x28, 0x29, 0x3e, 0x48, 0x08  ,// 193
	0x30, 0x00, 0x31, 0x02, 0x3c  ,// 194
	0x10, 0x51, 0x5e, 0x50, 0x10  ,// 195
	0x00, 0x7f, 0x08, 0x04, 0x00  ,// 196
	0x11, 0x12, 0x7c, 0x10, 0x10  ,// 197
	0x01, 0x21, 0x21, 0x21, 0x01  ,// 198
	0x21, 0x2a, 0x24, 0x2a, 0x30  ,// 199
	0x22, 0x24, 0x6f, 0x34, 0x22  ,// 200
	0x00, 0x01, 0x02, 0x7c, 0x00  ,// 201
	0x0f, 0x00, 0x20, 0x10, 0x0f  ,// 202
	0x7e, 0x11, 0x11, 0x11, 0x11  ,// 203
	0x20, 0x21, 0x21, 0x22, 0x3c  ,// 204
	0x10, 0x20, 0x10, 0x08, 0x06  ,// 205
	0x26, 0x20, 0x7f, 0x20, 0x26  ,// 206
	0x20, 0x24, 0x22, 0x25, 0x38  ,// 207
	0x00, 0x2a, 0x2a, 0x2a, 0x01  ,// 208
	0x0e, 0x12, 0x22, 0x02, 0x07  ,// 209
	0x01, 0x0a, 0x04, 0x0a, 0x30  ,// 210
	0x28, 0x3e, 0x29, 0x29, 0x29  ,// 211
	0x10, 0x7f, 0x10, 0x14, 0x18  ,// 212
	0x01, 0x21, 0x21, 0x3f, 0x01  ,// 213
	0x29, 0x29, 0x29, 0x29, 0x3f  ,// 214
	0x10, 0x50, 0x51, 0x52, 0x1c  ,// 215
	0x78, 0x01, 0x02, 0x7c, 0x00  ,// 216
	0x1f, 0x00, 0x3f, 0x01, 0x06  ,// 217
	0x3f, 0x01, 0x02, 0x04, 0x08  ,// 218
	0x3f, 0x21, 0x21, 0x21, 0x3f  ,// 219
	0x38, 0x20, 0x21, 0x22, 0x3c  ,// 220
	0x21, 0x21, 0x01, 0x02, 0x0c  ,// 221
	0x20, 0x10, 0x40, 0x20, 0x00  ,// 222
	0x70, 0x50, 0x70, 0x00, 0x00  ,// 223
	0x0e, 0x11, 0x09, 0x06, 0x19  ,// 224
	0x02, 0x55, 0x15, 0x55, 0x0f  ,// 225
	0x1f, 0x2a, 0x2a, 0x2a, 0x14  ,// 226
	0x0a, 0x15, 0x15, 0x11, 0x02  ,// 227
	0x3f, 0x02, 0x02, 0x04, 0x3e  ,// 228
	0x0e, 0x11, 0x19, 0x15, 0x12  ,// 229
	0x0f, 0x12, 0x22, 0x22, 0x1c  ,// 230
	0x1c, 0x22, 0x22, 0x22, 0x3f  ,// 231
	0x02, 0x01, 0x1e, 0x10, 0x10  ,// 232
	0x20, 0x20, 0x00, 0x70, 0x00  ,// 233
	0x00, 0x00, 0x10, 0x5f, 0x00  ,// 234
	0x28, 0x10, 0x28, 0x00, 0x00  ,// 235
	0x18, 0x24, 0x7e, 0x24, 0x08  ,// 236
	0x14, 0x7f, 0x15, 0x01, 0x01  ,// 237
	0x1f, 0x48, 0x50, 0x50, 0x0f  ,// 238
	0x0e, 0x51, 0x11, 0x51, 0x0e  ,// 239
	0x3f, 0x12, 0x22, 0x22, 0x1c  ,// 240
	0x1c, 0x22, 0x22, 0x12, 0x3f  ,// 241
	0x3c, 0x52, 0x52, 0x52, 0x3c  ,// 242
	0x03, 0x05, 0x02, 0x05, 0x06  ,// 243
	0x1a, 0x26, 0x20, 0x26, 0x1a  ,// 244
	0x1e, 0x41, 0x01, 0x42, 0x1f  ,// 245
	0x63, 0x55, 0x49, 0x41, 0x41  ,// 246
	0x22, 0x3c, 0x20, 0x3e, 0x22  ,// 247
	0x51, 0x4a, 0x44, 0x4a, 0x51  ,// 248
	0x3c, 0x02, 0x02, 0x02, 0x3f  ,// 249
	0x28, 0x28, 0x3e, 0x28, 0x48  ,// 250
	0x22, 0x3c, 0x28, 0x28, 0x2e  ,// 251
	0x3e, 0x28, 0x38, 0x28, 0x3e  ,// 252
	0x04, 0x04, 0x15, 0x04, 0x04  ,// 253
	0x00, 0x00, 0x00, 0x00, 0x00  ,// 254
	0x7f, 0x7f, 0x7f, 0x7f, 0x7f   // 255
};
