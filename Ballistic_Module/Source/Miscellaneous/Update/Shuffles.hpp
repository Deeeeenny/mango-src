#pragma once

#define LUAU_COMMA_SEP ,
#define LUAU_SEMICOLON_SEP ;

#define LUAU_SHUFFLE3(s, a1, a2, a3) a3 s a1 s a2
#define LUAU_SHUFFLE4(s, a1, a2, a3, a4) a3 s a1 s a2 s a4
#define LUAU_SHUFFLE5(s, a1, a2, a3, a4, a5) a4 s a3 s a2 s a5 s a1
#define LUAU_SHUFFLE6(s, a1, a2, a3, a4, a5, a6) a4 s a1 s a6 s a5 s a3 s a2
#define LUAU_SHUFFLE7(s, a1, a2, a3, a4, a5, a6, a7) a4 s a5 s a1 s a7 s a2 s a3 s a6
#define LUAU_SHUFFLE8(s, a1, a2, a3, a4, a5, a6, a7, a8) a4 s a3 s a2 s a7 s a6 s a5 s a8 s a1
#define LUAU_SHUFFLE9(s, a1, a2, a3, a4, a5, a6, a7, a8, a9) a7 s a4 s a6 s a9 s a1 s a8 s a2 s a5 s a3
