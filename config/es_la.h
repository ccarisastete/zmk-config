#ifndef ES_LA_H
#define ES_LA_H

#include <dt-bindings/zmk/keys.h>

// ZMK aliases for Windows Spanish (Latin America) layout.
// These aliases send HID keycodes; the OS must use ES-LA.

// Letras
#define ES_A    A // a
#define ES_B    B // b
#define ES_C    C // c
#define ES_D    D // d
#define ES_E    E // e
#define ES_F    F // f
#define ES_G    G // g
#define ES_H    H // h
#define ES_I    I // i
#define ES_J    J // j
#define ES_K    K // k
#define ES_L    L // l
#define ES_M    M // m
#define ES_N    N // n
#define ES_NTIL SEMI // ñ
#define ES_O    O // o
#define ES_P    P // p
#define ES_Q    Q // q
#define ES_R    R // r
#define ES_S    S // s
#define ES_T    T // t
#define ES_U    U // u
#define ES_V    V // v
#define ES_W    W // w
#define ES_X    X // x
#define ES_Y    Y // y 
#define ES_Z    Z // z

// Números
#define ES_1    N1 // 1
#define ES_2    N2 // 2
#define ES_3    N3 // 3
#define ES_4    N4 // 4
#define ES_5    N5 // 5
#define ES_6    N6 // 6
#define ES_7    N7 // 7
#define ES_8    N8 // 8
#define ES_9    N9 // 9
#define ES_0    N0 // 0

// Símbolos con Shift
#define ES_EXCL     LS(N1) // !
#define ES_DQUO     LS(N2) // "
#define ES_HASH     LS(N3) // #
#define ES_DLR      LS(N4) // $
#define ES_PERC     LS(N5) // %
#define ES_AMPR     LS(N6) // &
#define ES_SLSH     LS(N7) // /
#define ES_LPRN     LS(N8) // (
#define ES_RPRN     LS(N9) // )
#define ES_EQL      LS(N0) // =

// Puntuación
#define ES_APOS     MINUS // '
#define ES_QUES     LS(MINUS) // ?
#define ES_IEXCL    LS(EQUAL) // ¡
#define ES_IQUES    EQUAL // ¿
#define ES_COMM     COMMA // ,
#define ES_DOT      DOT // .
#define ES_SCLN     LS(COMMA) // ;
#define ES_COLN     LS(DOT) // :
#define ES_MINS     SLASH // -
#define ES_UNDS     LS(SLASH) // _

// Acentos (teclas muertas)
#define ES_TILD     LBKT // ´ (acento agudo)
#define ES_ACUT     LBKT // ´ (acento agudo)
#define ES_DIAE     LS(LBKT) // ¨ (diéresis)

// Llaves y corchetes
#define ES_PLUS     RBKT // +
#define ES_ASTR     LS(RBKT) // *
#define ES_LBRC     APOS // {
#define ES_RBRC     BSLH // }
#define ES_LBKT     LS(ES_LBRC) // [
#define ES_RBKT     LS(ES_RBRC) // ]

// Otros símbolos
#define ES_PIPE     GRAVE // |
#define ES_DEGR     LS(GRAVE) // °
#define ES_NOT      RA(GRAVE) // ¬
#define ES_LABK     NUBS // <
#define ES_RABK     LS(NUBS) // >

// AltGr
#define ES_AT       RA(Q) // @
#define ES_BSLS     RA(MINUS) // "\"
#define ES_TILDE    RA(RBKT) // ~
#define ES_CIRC     RA(LBKT) // ^ (tecla muerta)
#define ES_GRV      RA(BSLH) // ` (tecla muerta)

// Control
#define ES_ESC      ESC // Escape
#define ES_TAB      TAB // Tabulador
#define ES_CAPS     CAPS // Bloq Mayús
#define ES_ENTER    RET // Enter
#define ES_SPACE    SPACE // Espacio
#define ES_BSPC     BSPC // Retroceso
#define ES_DEL      DEL // Suprimir
#define ES_INS      INS // Insertar

// Navegación
#define ES_LEFT     LEFT // Flecha izquierda
#define ES_RIGHT    RIGHT // Flecha derecha
#define ES_UP       UP // Flecha arriba
#define ES_DOWN     DOWN // Flecha abajo
#define ES_HOME     HOME // Inicio
#define ES_END      END // Fin
#define ES_PGUP     PG_UP // Página arriba
#define ES_PGDN     PG_DN // Página abajo

// Modificadores
#define ES_LSHIFT   LSHIFT // Shift izquierdo
#define ES_RSHIFT   RSHIFT // Shift derecho
#define ES_LCTRL    LCTRL // Ctrl izquierdo
#define ES_RCTRL    RCTRL // Ctrl derecho
#define ES_LALT     LALT // Alt izquierdo
#define ES_RALT     RALT // Alt derecho / AltGr
#define ES_LGUI     LGUI // Windows izquierdo
#define ES_RGUI     RGUI // Windows derecho

// Funciones
#define ES_F1   F1 // F1
#define ES_F2   F2 // F2
#define ES_F3   F3 // F3
#define ES_F4   F4 // F4
#define ES_F5   F5 // F5
#define ES_F6   F6 // F6
#define ES_F7   F7 // F7
#define ES_F8   F8 // F8
#define ES_F9   F9 // F9
#define ES_F10  F10 // F10
#define ES_F11  F11 // F11
#define ES_F12  F12 // F12

#endif // ES_LA_H
