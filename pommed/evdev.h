/*
 * pommed - evdev.h
 */

#ifndef __EVDEV_H__
#define __EVDEV_H__


/****** ADB Devices ******/

#define ADB_PRODUCT_ID_KEYBOARD_ANSI  0x22c3
#define ADB_PRODUCT_ID_KEYBOARD_ISO   0x22c4
#define ADB_PRODUCT_ID_KEYBOARD_JIS   0x22c5
/* Special PowerBook buttons */
#define ADB_PRODUCT_ID_PBBUTTONS      0x771f


/****** USB Devices ******/

#define USB_VENDOR_ID_APPLE           0x05ac

/* Fountain & Geyser devices : AppleUSBTopCase.kext/Contents/PlugIns/AppleUSBTrackpad.kext */

/* Apple Fountain keyboard + trackpad */
#define USB_PRODUCT_ID_FOUNTAIN_ANSI  0x020e
#define USB_PRODUCT_ID_FOUNTAIN_ISO   0x020f
#define USB_PRODUCT_ID_FOUNTAIN_JIS   0x0210

/* Apple Geyser keyboard + trackpad */
#define USB_PRODUCT_ID_GEYSER_ANSI   0x0214
#define USB_PRODUCT_ID_GEYSER_ISO    0x0215
#define USB_PRODUCT_ID_GEYSER_JIS    0x0216

/* Apple Geyser III keyboard + trackpad */
#define USB_PRODUCT_ID_GEYSER3_ANSI   0x0217
#define USB_PRODUCT_ID_GEYSER3_ISO    0x0218
#define USB_PRODUCT_ID_GEYSER3_JIS    0x0219

/* Apple Geyser IV keyboard + trackpad */
#define USB_PRODUCT_ID_GEYSER4_ANSI   0x021a
#define USB_PRODUCT_ID_GEYSER4_ISO    0x021b
#define USB_PRODUCT_ID_GEYSER4_JIS    0x021c

/* Apple Geyser IV-HF keyboard + trackpad */
#define USB_PRODUCT_ID_GEYSER4_HF_ANSI   0x0229
#define USB_PRODUCT_ID_GEYSER4_HF_ISO    0x022a
#define USB_PRODUCT_ID_GEYSER4_HF_JIS    0x022b

/* Apple Fountain or Geyser trackpad only */
#define USB_PRODUCT_ID_FOUNTAIN_TP_ONLY   0x030a
#define USB_PRODUCT_ID_GEYSER1_TP_ONLY    0x030b

/* WellSpring devices : AppleUSBMultitouch.kext */

/* Apple WellSpring keyboard + trackpad */
#define USB_PRODUCT_ID_WELLSPRING_ANSI   0x0223
#define USB_PRODUCT_ID_WELLSPRING_ISO    0x0224
#define USB_PRODUCT_ID_WELLSPRING_JIS    0x0225

/* Apple WellSpring II keyboard + trackpad */
#define USB_PRODUCT_ID_WELLSPRING2_ANSI   0x0230
#define USB_PRODUCT_ID_WELLSPRING2_ISO    0x0231
#define USB_PRODUCT_ID_WELLSPRING2_JIS    0x0232

/* Apple WellSpring III keyboard + trackpad */
#define USB_PRODUCT_ID_WELLSPRING3_ANSI   0x0236
#define USB_PRODUCT_ID_WELLSPRING3_ISO    0x0237
#define USB_PRODUCT_ID_WELLSPRING3_JIS    0x0238

/* Apple WellSpring IV keyboard + trackpad */
#define USB_PRODUCT_ID_WELLSPRING4_ANSI   0x023f
#define USB_PRODUCT_ID_WELLSPRING4_ISO    0x0240
#define USB_PRODUCT_ID_WELLSPRING4_JIS    0x0241

/* Apple WellSpring IVa keyboard + trackpad */
#define USB_PRODUCT_ID_WELLSPRING4A_ANSI  0x0242
#define USB_PRODUCT_ID_WELLSPRING4A_ISO   0x0243
#define USB_PRODUCT_ID_WELLSPRING4A_JIS   0x0244

/* Apple WellSpring V keyboard + trackpad */
#define USB_PRODUCT_ID_WELLSPRING5_ANSI   0x0245
#define USB_PRODUCT_ID_WELLSPRING5_ISO    0x0246
#define USB_PRODUCT_ID_WELLSPRING5_JIS    0x0247

/* Apple WellSpring Va keyboard + trackpad */
#define USB_PRODUCT_ID_WELLSPRING5A_ANSI  0x0252
#define USB_PRODUCT_ID_WELLSPRING5A_ISO   0x0253
#define USB_PRODUCT_ID_WELLSPRING5A_JIS   0x0254

/* Apple WellSpring VI keyboard + trackpad */
#define USB_PRODUCT_ID_WELLSPRING6_ANSI    0x024c
#define USB_PRODUCT_ID_WELLSPRING6_ISO     0x024d
#define USB_PRODUCT_ID_WELLSPRING6_JIS     0x024e

/* Apple WellSpring VIa keyboard + trackpad */
#define USB_PRODUCT_ID_WELLSPRING6A_ANSI   0x0249
#define USB_PRODUCT_ID_WELLSPRING6A_ISO    0x024a
#define USB_PRODUCT_ID_WELLSPRING6A_JIS    0x024b

 /* Apple WellSpring VII keyboard + trackpad */
#define USB_PRODUCT_ID_WELLSPRING7_ANSI  0x0262
#define USB_PRODUCT_ID_WELLSPRING7_ISO   0x0263
#define USB_PRODUCT_ID_WELLSPRING7_JIS   0x0264

 /* Apple WellSpring VIIa keyboard + trackpad */
#define USB_PRODUCT_ID_WELLSPRING7A_ANSI   0x0259
#define USB_PRODUCT_ID_WELLSPRING7A_ISO    0x025a
#define USB_PRODUCT_ID_WELLSPRING7A_JIS    0x025b

 /* Apple WellSpring VIII keyboard + trackpad */
#define USB_PRODUCT_ID_WELLSPRING8_ANSI    0x0290
#define USB_PRODUCT_ID_WELLSPRING8_ISO     0x0291
#define USB_PRODUCT_ID_WELLSPRING8_JIS     0x0292

/* Apple external USB keyboard, white */
#define USB_PRODUCT_ID_EXTKBD_WHITE   0x020c

/* Apple external USB mini keyboard, aluminium */
#define USB_PRODUCT_ID_EXTKBD_ALU_MINI_ANSI 0x021d
#define USB_PRODUCT_ID_EXTKBD_ALU_MINI_ISO  0x021e
#define USB_PRODUCT_ID_EXTKBD_ALU_MINI_JIS  0x021f

/* Apple external USB keyboard, aluminium */
#define USB_PRODUCT_ID_EXTKBD_ALU_ANSI 0x0220
#define USB_PRODUCT_ID_EXTKBD_ALU_ISO  0x0221
#define USB_PRODUCT_ID_EXTKBD_ALU_JIS  0x0222

/* Apple external USB keyboard, aluminium, newer model */
#define USB_PRODUCT_ID_EXTKBD_ALU_REVB_ANSI 0x024f
#define USB_PRODUCT_ID_EXTKBD_ALU_REVB_ISO  0x0250
#define USB_PRODUCT_ID_EXTKBD_ALU_REVB_JIS  0x0251

/* Apple external wireless keyboard, aluminium */
#define USB_PRODUCT_ID_EXTKBD_ALU_WL_ANSI 0x022c
#define USB_PRODUCT_ID_EXTKBD_ALU_WL_ISO  0x022d
#define USB_PRODUCT_ID_EXTKBD_ALU_WL_JIS  0x022e

/* Apple external wireless keyboard, aluminium, 2009 model */
#define USB_PRODUCT_ID_EXTKBD_ALU_WL_2009_ANSI 0x0239
#define USB_PRODUCT_ID_EXTKBD_ALU_WL_2009_ISO  0x023a
#define USB_PRODUCT_ID_EXTKBD_ALU_WL_2009_JIS  0x023b

/* Apple external wireless keyboard, aluminium, 2011 model */
#define USB_PRODUCT_ID_EXTKBD_ALU_WL_2011_ANSI 0x0255
#define USB_PRODUCT_ID_EXTKBD_ALU_WL_2011_ISO  0x0256
#define USB_PRODUCT_ID_EXTKBD_ALU_WL_2011_JIS  0x0257

/* Apple Remote IR Receiver */
#define USB_PRODUCT_ID_APPLEIR        0x8240
#define USB_PRODUCT_ID_APPLEIR_2      0x1440
#define USB_PRODUCT_ID_APPLEIR_3      0x8241
#define USB_PRODUCT_ID_APPLEIR_4      0x8242
#define USB_PRODUCT_ID_APPLEIR_5      0x8243

#define EVDEV_DIR               "/dev/input"
#define EVDEV_BASE              "/dev/input/event"
#define EVDEV_MAX               32


int
evdev_init(void);

void
evdev_cleanup(void);

#endif /* !__EVDEV_H__ */
