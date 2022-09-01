#pragma once
#include "quantum.h"


/* This a shortcut to help you visually see your layout.
*
* The first section contains all of the arguments representing the physical
* layout of the board and position of the K4ys.
*
* The second converts the arguments into a two-dimensional array which
* represents the switch matrix.
*/
#define LAYOUT_84_ansi( \
    K00, K01,K02,K03,K04, K05,K06,K07,K08, K09,K010,K011,K012,          K013,   \
                                                                                \
    K10,K11,K12,K13,K14,K15,K16,K17,K18,K19,K110,K111,K112,  K113  ,    K313,   \
    K20  ,K21,K22,K23,K24,K25,K26,K27,K28,K29,K210,K211,K212, K213 ,    K413,   \
    K30   ,K31,K32,K33,K34,K35,K36,K37,K38,K39,K310,K311,   K312   ,    K513,   \
    K40     ,K41,K42,K43,K44,K45,K46,K47,K48,K49,K410,   K411  , K412,          \
    K50 ,K51,K52 , K53,K54    ,    K55,K56, K57 ,K58,K59 , K510, K511, K512     \
) \
{ \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K010, K011, K012, K013 }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K110, K111, K112, K113 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K210, K211, K212, K213 }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K310, K311, K312, K313 }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K410, K411, K412, K413 }, \
    { K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K510, K511, K512, K513 }  \
}
