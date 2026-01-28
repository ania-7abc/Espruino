/*
 * This file is part of Espruino, a JavaScript interpreter for Microcontrollers
 *
 * Copyright (C) 2014 Gordon Williams <gw@pur3.co.uk>
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * ----------------------------------------------------------------------------
 * This file is designed to be parsed during the build process
 *
 * Iskra JS-specific pin namings
 * ----------------------------------------------------------------------------
 */

#include "jswrap_iskra_js.h"

/*JSON{"type":"variable","name":"P0","generate_full":"(Pin)(JSH_PORTB_OFFSET+11)","return":["pin","B11"]
}*/
/*JSON{"type":"variable","name":"P1","generate_full":"(Pin)(JSH_PORTB_OFFSET+10)","return":["pin","B10"]
}*/
/*JSON{"type":"variable","name":"P2","generate_full":"(Pin)(JSH_PORTA_OFFSET+6)","return":["pin","A6"]
}*/
/*JSON{"type":"variable","name":"P3","generate_full":"(Pin)(JSH_PORTA_OFFSET+7)","return":["pin","A7"]
}*/
/*JSON{"type":"variable","name":"P4","generate_full":"(Pin)(JSH_PORTC_OFFSET+3)","return":["pin","C3"]
}*/
/*JSON{"type":"variable","name":"P5","generate_full":"(Pin)(JSH_PORTB_OFFSET+1)","return":["pin","B1"]
}*/
/*JSON{"type":"variable","name":"P6","generate_full":"(Pin)(JSH_PORTB_OFFSET+0)","return":["pin","B0"]
}*/
/*JSON{"type":"variable","name":"P7","generate_full":"(Pin)(JSH_PORTC_OFFSET+2)","return":["pin","C2"]
}*/
/*JSON{"type":"variable","name":"P8","generate_full":"(Pin)(JSH_PORTC_OFFSET+6)","return":["pin","C6"]
}*/
/*JSON{"type":"variable","name":"P9","generate_full":"(Pin)(JSH_PORTC_OFFSET+7)","return":["pin","C7"]
}*/
/*JSON{"type":"variable","name":"P10","generate_full":"(Pin)(JSH_PORTC_OFFSET+8)","return":["pin","C8"]
}*/
/*JSON{"type":"variable","name":"P11","generate_full":"(Pin)(JSH_PORTC_OFFSET+9)","return":["pin","C9"]
}*/
/*JSON{"type":"variable","name":"P12","generate_full":"(Pin)(JSH_PORTA_OFFSET+8)","return":["pin","A8"]
}*/
/*JSON{"type":"variable","name":"P13","generate_full":"(Pin)(JSH_PORTA_OFFSET+10)","return":["pin","A10"]
}*/
/*JSON{"type":"variable","name":"SDA","generate_full":"(Pin)(JSH_PORTB_OFFSET+9)","return":["pin","B9"]
}*/
/*JSON{"type":"variable","name":"SCL","generate_full":"(Pin)(JSH_PORTB_OFFSET+8)","return":["pin","B8"]
}*/

/*JSON{"type":"variable","name":"PrimaryI2C","generate_full":"jswFindBuiltInFunction(0,\"I2C1\")","return":["JsVar","An primary I2C interface"]
}*/
/*JSON{"type":"variable","name":"PrimarySPI","generate_full":"jswFindBuiltInFunction(0,\"SPI2\")","return":["JsVar","An primary SPI interface"]
}*/
/*JSON{"type":"variable","name":"PrimarySerial","generate_full":"jswFindBuiltInFunction(0,\"Serial3\")","return":["JsVar","An primary USART interface"]
}*/
