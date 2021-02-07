#pragma once

#define EXPAND(x)     x

#define _SELECT_AT_INDEX(x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,VAL, ... ) VAL

//-------------------------------------------------------------------------------------------------
// NARGSX is used to count how many arguments are in a set.
// The number represents how many arguments are used per iteration. So NARGS2, each pair consists one element
//-------------------------------------------------------------------------------------------------
#define NARGS1(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0))
#define NARGS2(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,30,30,29,29,28,28,27,27,26,26,25,25,24,24,23,23,22,22,21,21,20,20,19,19,18,18,17,17,16,16,15,15,14,14,13,13,12,12,11,11,10,10,9,9,8,8,7,7,6,6,5,5,4,4,3,3,2,2,1,1,0))
#define NARGS3(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,20,20,20,19,19,19,18,18,18,17,17,17,16,16,16,15,15,15,14,14,14,13,13,13,12,12,12,11,11,11,10,10,10,9,9,9,8,8,8,7,7,7,6,6,6,5,5,5,4,4,4,3,3,3,2,2,2,1,1,1,0))
#define NARGS4(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,15,15,15,15,14,14,14,14,13,13,13,13,12,12,12,12,11,11,11,11,10,10,10,10,9,9,9,9,8,8,8,8,7,7,7,7,6,6,6,6,5,5,5,5,4,4,4,4,3,3,3,3,2,2,2,2,1,1,1,1,0))
#define NARGS5(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,12,12,12,12,12,11,11,11,11,11,10,10,10,10,10,9,9,9,9,9,8,8,8,8,8,7,7,7,7,7,6,6,6,6,6,5,5,5,5,5,4,4,4,4,4,3,3,3,3,3,2,2,2,2,2,1,1,1,1,1,0))
#define NARGS6(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,10,10,10,10,10,10,9,9,9,9,9,9,8,8,8,8,8,8,7,7,7,7,7,7,6,6,6,6,6,6,5,5,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,1,1,1,1,1,1,0))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_1(what,x0) EXPAND(what(x0))
#define _FOR_EACH_2(what,x0,...) EXPAND(what(x0) _FOR_EACH_1(what,__VA_ARGS__))
#define _FOR_EACH_3(what,x0,...) EXPAND(what(x0) _FOR_EACH_2(what,__VA_ARGS__))
#define _FOR_EACH_4(what,x0,...) EXPAND(what(x0) _FOR_EACH_3(what,__VA_ARGS__))
#define _FOR_EACH_5(what,x0,...) EXPAND(what(x0) _FOR_EACH_4(what,__VA_ARGS__))
#define _FOR_EACH_6(what,x0,...) EXPAND(what(x0) _FOR_EACH_5(what,__VA_ARGS__))
#define _FOR_EACH_7(what,x0,...) EXPAND(what(x0) _FOR_EACH_6(what,__VA_ARGS__))
#define _FOR_EACH_8(what,x0,...) EXPAND(what(x0) _FOR_EACH_7(what,__VA_ARGS__))
#define _FOR_EACH_9(what,x0,...) EXPAND(what(x0) _FOR_EACH_8(what,__VA_ARGS__))
#define _FOR_EACH_10(what,x0,...) EXPAND(what(x0) _FOR_EACH_9(what,__VA_ARGS__))
#define _FOR_EACH_11(what,x0,...) EXPAND(what(x0) _FOR_EACH_10(what,__VA_ARGS__))
#define _FOR_EACH_12(what,x0,...) EXPAND(what(x0) _FOR_EACH_11(what,__VA_ARGS__))
#define _FOR_EACH_13(what,x0,...) EXPAND(what(x0) _FOR_EACH_12(what,__VA_ARGS__))
#define _FOR_EACH_14(what,x0,...) EXPAND(what(x0) _FOR_EACH_13(what,__VA_ARGS__))
#define _FOR_EACH_15(what,x0,...) EXPAND(what(x0) _FOR_EACH_14(what,__VA_ARGS__))
#define _FOR_EACH_16(what,x0,...) EXPAND(what(x0) _FOR_EACH_15(what,__VA_ARGS__))
#define _FOR_EACH_17(what,x0,...) EXPAND(what(x0) _FOR_EACH_16(what,__VA_ARGS__))
#define _FOR_EACH_18(what,x0,...) EXPAND(what(x0) _FOR_EACH_17(what,__VA_ARGS__))
#define _FOR_EACH_19(what,x0,...) EXPAND(what(x0) _FOR_EACH_18(what,__VA_ARGS__))
#define _FOR_EACH_20(what,x0,...) EXPAND(what(x0) _FOR_EACH_19(what,__VA_ARGS__))
#define _FOR_EACH_21(what,x0,...) EXPAND(what(x0) _FOR_EACH_20(what,__VA_ARGS__))
#define _FOR_EACH_22(what,x0,...) EXPAND(what(x0) _FOR_EACH_21(what,__VA_ARGS__))
#define _FOR_EACH_23(what,x0,...) EXPAND(what(x0) _FOR_EACH_22(what,__VA_ARGS__))
#define _FOR_EACH_24(what,x0,...) EXPAND(what(x0) _FOR_EACH_23(what,__VA_ARGS__))
#define _FOR_EACH_25(what,x0,...) EXPAND(what(x0) _FOR_EACH_24(what,__VA_ARGS__))
#define _FOR_EACH_26(what,x0,...) EXPAND(what(x0) _FOR_EACH_25(what,__VA_ARGS__))
#define _FOR_EACH_27(what,x0,...) EXPAND(what(x0) _FOR_EACH_26(what,__VA_ARGS__))
#define _FOR_EACH_28(what,x0,...) EXPAND(what(x0) _FOR_EACH_27(what,__VA_ARGS__))
#define _FOR_EACH_29(what,x0,...) EXPAND(what(x0) _FOR_EACH_28(what,__VA_ARGS__))
#define _FOR_EACH_30(what,x0,...) EXPAND(what(x0) _FOR_EACH_29(what,__VA_ARGS__))
#define _FOR_EACH_31(what,x0,...) EXPAND(what(x0) _FOR_EACH_30(what,__VA_ARGS__))
#define _FOR_EACH_32(what,x0,...) EXPAND(what(x0) _FOR_EACH_31(what,__VA_ARGS__))
#define _FOR_EACH_33(what,x0,...) EXPAND(what(x0) _FOR_EACH_32(what,__VA_ARGS__))
#define _FOR_EACH_34(what,x0,...) EXPAND(what(x0) _FOR_EACH_33(what,__VA_ARGS__))
#define _FOR_EACH_35(what,x0,...) EXPAND(what(x0) _FOR_EACH_34(what,__VA_ARGS__))
#define _FOR_EACH_36(what,x0,...) EXPAND(what(x0) _FOR_EACH_35(what,__VA_ARGS__))
#define _FOR_EACH_37(what,x0,...) EXPAND(what(x0) _FOR_EACH_36(what,__VA_ARGS__))
#define _FOR_EACH_38(what,x0,...) EXPAND(what(x0) _FOR_EACH_37(what,__VA_ARGS__))
#define _FOR_EACH_39(what,x0,...) EXPAND(what(x0) _FOR_EACH_38(what,__VA_ARGS__))
#define _FOR_EACH_40(what,x0,...) EXPAND(what(x0) _FOR_EACH_39(what,__VA_ARGS__))
#define _FOR_EACH_41(what,x0,...) EXPAND(what(x0) _FOR_EACH_40(what,__VA_ARGS__))
#define _FOR_EACH_42(what,x0,...) EXPAND(what(x0) _FOR_EACH_41(what,__VA_ARGS__))
#define _FOR_EACH_43(what,x0,...) EXPAND(what(x0) _FOR_EACH_42(what,__VA_ARGS__))
#define _FOR_EACH_44(what,x0,...) EXPAND(what(x0) _FOR_EACH_43(what,__VA_ARGS__))
#define _FOR_EACH_45(what,x0,...) EXPAND(what(x0) _FOR_EACH_44(what,__VA_ARGS__))
#define _FOR_EACH_46(what,x0,...) EXPAND(what(x0) _FOR_EACH_45(what,__VA_ARGS__))
#define _FOR_EACH_47(what,x0,...) EXPAND(what(x0) _FOR_EACH_46(what,__VA_ARGS__))
#define _FOR_EACH_48(what,x0,...) EXPAND(what(x0) _FOR_EACH_47(what,__VA_ARGS__))
#define _FOR_EACH_49(what,x0,...) EXPAND(what(x0) _FOR_EACH_48(what,__VA_ARGS__))
#define _FOR_EACH_50(what,x0,...) EXPAND(what(x0) _FOR_EACH_49(what,__VA_ARGS__))
#define _FOR_EACH_51(what,x0,...) EXPAND(what(x0) _FOR_EACH_50(what,__VA_ARGS__))
#define _FOR_EACH_52(what,x0,...) EXPAND(what(x0) _FOR_EACH_51(what,__VA_ARGS__))
#define _FOR_EACH_53(what,x0,...) EXPAND(what(x0) _FOR_EACH_52(what,__VA_ARGS__))
#define _FOR_EACH_54(what,x0,...) EXPAND(what(x0) _FOR_EACH_53(what,__VA_ARGS__))
#define _FOR_EACH_55(what,x0,...) EXPAND(what(x0) _FOR_EACH_54(what,__VA_ARGS__))
#define _FOR_EACH_56(what,x0,...) EXPAND(what(x0) _FOR_EACH_55(what,__VA_ARGS__))
#define _FOR_EACH_57(what,x0,...) EXPAND(what(x0) _FOR_EACH_56(what,__VA_ARGS__))
#define _FOR_EACH_58(what,x0,...) EXPAND(what(x0) _FOR_EACH_57(what,__VA_ARGS__))
#define _FOR_EACH_59(what,x0,...) EXPAND(what(x0) _FOR_EACH_58(what,__VA_ARGS__))
#define _FOR_EACH_60(what,x0,...) EXPAND(what(x0) _FOR_EACH_59(what,__VA_ARGS__))
#define _FOR_EACH_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_60,_FOR_EACH_59,_FOR_EACH_58,_FOR_EACH_57,_FOR_EACH_56,_FOR_EACH_55,_FOR_EACH_54,_FOR_EACH_53,_FOR_EACH_52,_FOR_EACH_51,_FOR_EACH_50,_FOR_EACH_49,_FOR_EACH_48,_FOR_EACH_47,_FOR_EACH_46,_FOR_EACH_45,_FOR_EACH_44,_FOR_EACH_43,_FOR_EACH_42,_FOR_EACH_41,_FOR_EACH_40,_FOR_EACH_39,_FOR_EACH_38,_FOR_EACH_37,_FOR_EACH_36,_FOR_EACH_35,_FOR_EACH_34,_FOR_EACH_33,_FOR_EACH_32,_FOR_EACH_31,_FOR_EACH_30,_FOR_EACH_29,_FOR_EACH_28,_FOR_EACH_27,_FOR_EACH_26,_FOR_EACH_25,_FOR_EACH_24,_FOR_EACH_23,_FOR_EACH_22,_FOR_EACH_21,_FOR_EACH_20,_FOR_EACH_19,_FOR_EACH_18,_FOR_EACH_17,_FOR_EACH_16,_FOR_EACH_15,_FOR_EACH_14,_FOR_EACH_13,_FOR_EACH_12,_FOR_EACH_11,_FOR_EACH_10,_FOR_EACH_9,_FOR_EACH_8,_FOR_EACH_7,_FOR_EACH_6,_FOR_EACH_5,_FOR_EACH_4,_FOR_EACH_3,_FOR_EACH_2,_FOR_EACH_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH: Apply the action 'what' to a sequence of elements.
//   Loop: Each iteration processes 1 argument
//-------------------------------------------------------------------------------------------------
#define FOR_EACH(what,...) EXPAND(_FOR_EACH_SELECT(__VA_ARGS__)(what,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_COUNT_1(what,i,x0) EXPAND(what(i,x0))
#define _FOR_EACH_COUNT_2(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_1(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_3(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_2(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_4(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_3(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_5(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_4(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_6(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_5(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_7(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_6(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_8(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_7(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_9(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_8(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_10(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_9(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_11(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_10(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_12(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_11(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_13(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_12(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_14(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_13(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_15(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_14(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_16(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_15(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_17(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_16(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_18(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_17(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_19(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_18(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_20(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_19(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_21(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_20(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_22(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_21(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_23(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_22(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_24(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_23(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_25(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_24(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_26(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_25(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_27(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_26(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_28(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_27(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_29(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_28(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_30(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_29(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_31(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_30(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_32(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_31(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_33(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_32(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_34(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_33(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_35(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_34(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_36(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_35(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_37(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_36(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_38(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_37(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_39(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_38(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_40(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_39(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_41(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_40(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_42(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_41(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_43(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_42(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_44(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_43(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_45(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_44(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_46(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_45(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_47(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_46(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_48(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_47(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_49(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_48(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_50(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_49(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_51(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_50(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_52(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_51(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_53(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_52(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_54(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_53(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_55(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_54(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_56(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_55(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_57(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_56(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_58(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_57(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_59(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_58(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_60(what,i,x0,...) EXPAND(what(i,x0) _FOR_EACH_COUNT_59(what,i+1,__VA_ARGS__))
#define _FOR_EACH_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_COUNT_60,_FOR_EACH_COUNT_59,_FOR_EACH_COUNT_58,_FOR_EACH_COUNT_57,_FOR_EACH_COUNT_56,_FOR_EACH_COUNT_55,_FOR_EACH_COUNT_54,_FOR_EACH_COUNT_53,_FOR_EACH_COUNT_52,_FOR_EACH_COUNT_51,_FOR_EACH_COUNT_50,_FOR_EACH_COUNT_49,_FOR_EACH_COUNT_48,_FOR_EACH_COUNT_47,_FOR_EACH_COUNT_46,_FOR_EACH_COUNT_45,_FOR_EACH_COUNT_44,_FOR_EACH_COUNT_43,_FOR_EACH_COUNT_42,_FOR_EACH_COUNT_41,_FOR_EACH_COUNT_40,_FOR_EACH_COUNT_39,_FOR_EACH_COUNT_38,_FOR_EACH_COUNT_37,_FOR_EACH_COUNT_36,_FOR_EACH_COUNT_35,_FOR_EACH_COUNT_34,_FOR_EACH_COUNT_33,_FOR_EACH_COUNT_32,_FOR_EACH_COUNT_31,_FOR_EACH_COUNT_30,_FOR_EACH_COUNT_29,_FOR_EACH_COUNT_28,_FOR_EACH_COUNT_27,_FOR_EACH_COUNT_26,_FOR_EACH_COUNT_25,_FOR_EACH_COUNT_24,_FOR_EACH_COUNT_23,_FOR_EACH_COUNT_22,_FOR_EACH_COUNT_21,_FOR_EACH_COUNT_20,_FOR_EACH_COUNT_19,_FOR_EACH_COUNT_18,_FOR_EACH_COUNT_17,_FOR_EACH_COUNT_16,_FOR_EACH_COUNT_15,_FOR_EACH_COUNT_14,_FOR_EACH_COUNT_13,_FOR_EACH_COUNT_12,_FOR_EACH_COUNT_11,_FOR_EACH_COUNT_10,_FOR_EACH_COUNT_9,_FOR_EACH_COUNT_8,_FOR_EACH_COUNT_7,_FOR_EACH_COUNT_6,_FOR_EACH_COUNT_5,_FOR_EACH_COUNT_4,_FOR_EACH_COUNT_3,_FOR_EACH_COUNT_2,_FOR_EACH_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   Loop: Each iteration processes 1 argument
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_COUNT(what,...) EXPAND(_FOR_EACH_COUNT_SELECT(__VA_ARGS__)(what,0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_1ARG_1(what,a0,x0) EXPAND(what(a0,x0))
#define _FOR_EACH_1ARG_2(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_1(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_2(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_3(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_4(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_5(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_7(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_6(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_8(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_7(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_9(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_8(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_10(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_9(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_11(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_10(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_12(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_11(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_13(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_12(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_14(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_13(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_15(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_14(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_16(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_15(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_17(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_16(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_18(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_17(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_19(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_18(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_20(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_19(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_21(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_20(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_22(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_21(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_23(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_22(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_24(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_23(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_25(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_24(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_26(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_25(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_27(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_26(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_28(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_27(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_29(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_28(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_30(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_29(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_31(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_30(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_32(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_31(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_33(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_32(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_34(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_33(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_35(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_34(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_36(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_35(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_37(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_36(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_38(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_37(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_39(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_38(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_40(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_39(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_41(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_40(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_42(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_41(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_43(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_42(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_44(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_43(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_45(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_44(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_46(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_45(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_47(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_46(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_48(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_47(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_49(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_48(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_50(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_49(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_51(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_50(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_52(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_51(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_53(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_52(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_54(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_53(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_55(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_54(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_56(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_55(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_57(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_56(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_58(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_57(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_59(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_58(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_60(what,a0,x0,...) EXPAND(what(a0,x0) _FOR_EACH_1ARG_59(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_1ARG_60,_FOR_EACH_1ARG_59,_FOR_EACH_1ARG_58,_FOR_EACH_1ARG_57,_FOR_EACH_1ARG_56,_FOR_EACH_1ARG_55,_FOR_EACH_1ARG_54,_FOR_EACH_1ARG_53,_FOR_EACH_1ARG_52,_FOR_EACH_1ARG_51,_FOR_EACH_1ARG_50,_FOR_EACH_1ARG_49,_FOR_EACH_1ARG_48,_FOR_EACH_1ARG_47,_FOR_EACH_1ARG_46,_FOR_EACH_1ARG_45,_FOR_EACH_1ARG_44,_FOR_EACH_1ARG_43,_FOR_EACH_1ARG_42,_FOR_EACH_1ARG_41,_FOR_EACH_1ARG_40,_FOR_EACH_1ARG_39,_FOR_EACH_1ARG_38,_FOR_EACH_1ARG_37,_FOR_EACH_1ARG_36,_FOR_EACH_1ARG_35,_FOR_EACH_1ARG_34,_FOR_EACH_1ARG_33,_FOR_EACH_1ARG_32,_FOR_EACH_1ARG_31,_FOR_EACH_1ARG_30,_FOR_EACH_1ARG_29,_FOR_EACH_1ARG_28,_FOR_EACH_1ARG_27,_FOR_EACH_1ARG_26,_FOR_EACH_1ARG_25,_FOR_EACH_1ARG_24,_FOR_EACH_1ARG_23,_FOR_EACH_1ARG_22,_FOR_EACH_1ARG_21,_FOR_EACH_1ARG_20,_FOR_EACH_1ARG_19,_FOR_EACH_1ARG_18,_FOR_EACH_1ARG_17,_FOR_EACH_1ARG_16,_FOR_EACH_1ARG_15,_FOR_EACH_1ARG_14,_FOR_EACH_1ARG_13,_FOR_EACH_1ARG_12,_FOR_EACH_1ARG_11,_FOR_EACH_1ARG_10,_FOR_EACH_1ARG_9,_FOR_EACH_1ARG_8,_FOR_EACH_1ARG_7,_FOR_EACH_1ARG_6,_FOR_EACH_1ARG_5,_FOR_EACH_1ARG_4,_FOR_EACH_1ARG_3,_FOR_EACH_1ARG_2,_FOR_EACH_1ARG_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_1ARG: Apply the action 'what' to a sequence of elements.
//   a0: Static arguments that are passed into the action.
//   Loop: Each iteration processes 1 argument
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_1ARG(what,a0,...) EXPAND(_FOR_EACH_1ARG_SELECT(__VA_ARGS__)(what,a0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_1ARG_COUNT_1(what,i,a0,x0) EXPAND(what(i,a0,x0))
#define _FOR_EACH_1ARG_COUNT_2(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_1(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_3(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_2(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_4(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_3(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_5(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_4(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_6(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_5(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_7(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_6(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_8(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_7(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_9(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_8(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_10(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_9(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_11(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_10(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_12(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_11(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_13(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_12(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_14(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_13(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_15(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_14(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_16(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_15(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_17(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_16(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_18(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_17(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_19(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_18(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_20(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_19(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_21(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_20(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_22(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_21(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_23(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_22(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_24(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_23(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_25(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_24(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_26(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_25(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_27(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_26(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_28(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_27(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_29(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_28(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_30(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_29(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_31(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_30(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_32(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_31(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_33(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_32(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_34(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_33(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_35(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_34(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_36(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_35(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_37(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_36(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_38(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_37(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_39(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_38(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_40(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_39(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_41(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_40(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_42(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_41(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_43(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_42(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_44(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_43(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_45(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_44(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_46(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_45(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_47(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_46(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_48(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_47(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_49(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_48(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_50(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_49(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_51(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_50(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_52(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_51(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_53(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_52(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_54(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_53(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_55(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_54(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_56(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_55(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_57(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_56(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_58(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_57(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_59(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_58(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_60(what,i,a0,x0,...) EXPAND(what(i,a0,x0) _FOR_EACH_1ARG_COUNT_59(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_1ARG_COUNT_60,_FOR_EACH_1ARG_COUNT_59,_FOR_EACH_1ARG_COUNT_58,_FOR_EACH_1ARG_COUNT_57,_FOR_EACH_1ARG_COUNT_56,_FOR_EACH_1ARG_COUNT_55,_FOR_EACH_1ARG_COUNT_54,_FOR_EACH_1ARG_COUNT_53,_FOR_EACH_1ARG_COUNT_52,_FOR_EACH_1ARG_COUNT_51,_FOR_EACH_1ARG_COUNT_50,_FOR_EACH_1ARG_COUNT_49,_FOR_EACH_1ARG_COUNT_48,_FOR_EACH_1ARG_COUNT_47,_FOR_EACH_1ARG_COUNT_46,_FOR_EACH_1ARG_COUNT_45,_FOR_EACH_1ARG_COUNT_44,_FOR_EACH_1ARG_COUNT_43,_FOR_EACH_1ARG_COUNT_42,_FOR_EACH_1ARG_COUNT_41,_FOR_EACH_1ARG_COUNT_40,_FOR_EACH_1ARG_COUNT_39,_FOR_EACH_1ARG_COUNT_38,_FOR_EACH_1ARG_COUNT_37,_FOR_EACH_1ARG_COUNT_36,_FOR_EACH_1ARG_COUNT_35,_FOR_EACH_1ARG_COUNT_34,_FOR_EACH_1ARG_COUNT_33,_FOR_EACH_1ARG_COUNT_32,_FOR_EACH_1ARG_COUNT_31,_FOR_EACH_1ARG_COUNT_30,_FOR_EACH_1ARG_COUNT_29,_FOR_EACH_1ARG_COUNT_28,_FOR_EACH_1ARG_COUNT_27,_FOR_EACH_1ARG_COUNT_26,_FOR_EACH_1ARG_COUNT_25,_FOR_EACH_1ARG_COUNT_24,_FOR_EACH_1ARG_COUNT_23,_FOR_EACH_1ARG_COUNT_22,_FOR_EACH_1ARG_COUNT_21,_FOR_EACH_1ARG_COUNT_20,_FOR_EACH_1ARG_COUNT_19,_FOR_EACH_1ARG_COUNT_18,_FOR_EACH_1ARG_COUNT_17,_FOR_EACH_1ARG_COUNT_16,_FOR_EACH_1ARG_COUNT_15,_FOR_EACH_1ARG_COUNT_14,_FOR_EACH_1ARG_COUNT_13,_FOR_EACH_1ARG_COUNT_12,_FOR_EACH_1ARG_COUNT_11,_FOR_EACH_1ARG_COUNT_10,_FOR_EACH_1ARG_COUNT_9,_FOR_EACH_1ARG_COUNT_8,_FOR_EACH_1ARG_COUNT_7,_FOR_EACH_1ARG_COUNT_6,_FOR_EACH_1ARG_COUNT_5,_FOR_EACH_1ARG_COUNT_4,_FOR_EACH_1ARG_COUNT_3,_FOR_EACH_1ARG_COUNT_2,_FOR_EACH_1ARG_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_1ARG_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0: Static arguments that are passed into the action.
//   Loop: Each iteration processes 1 argument
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_1ARG_COUNT(what,a0,...) EXPAND(_FOR_EACH_1ARG_COUNT_SELECT(__VA_ARGS__)(what,0,a0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_2ARGS_1(what,a0,a1,x0) EXPAND(what(a0,a1,x0))
#define _FOR_EACH_2ARGS_2(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_1(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_2(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_3(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_4(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_5(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_7(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_6(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_8(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_7(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_9(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_8(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_10(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_9(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_11(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_10(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_12(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_11(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_13(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_12(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_14(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_13(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_15(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_14(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_16(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_15(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_17(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_16(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_18(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_17(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_19(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_18(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_20(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_19(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_21(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_20(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_22(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_21(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_23(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_22(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_24(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_23(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_25(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_24(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_26(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_25(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_27(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_26(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_28(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_27(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_29(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_28(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_30(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_29(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_31(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_30(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_32(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_31(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_33(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_32(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_34(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_33(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_35(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_34(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_36(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_35(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_37(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_36(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_38(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_37(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_39(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_38(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_40(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_39(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_41(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_40(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_42(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_41(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_43(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_42(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_44(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_43(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_45(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_44(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_46(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_45(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_47(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_46(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_48(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_47(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_49(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_48(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_50(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_49(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_51(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_50(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_52(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_51(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_53(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_52(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_54(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_53(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_55(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_54(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_56(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_55(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_57(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_56(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_58(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_57(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_59(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_58(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_60(what,a0,a1,x0,...) EXPAND(what(a0,a1,x0) _FOR_EACH_2ARGS_59(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_2ARGS_60,_FOR_EACH_2ARGS_59,_FOR_EACH_2ARGS_58,_FOR_EACH_2ARGS_57,_FOR_EACH_2ARGS_56,_FOR_EACH_2ARGS_55,_FOR_EACH_2ARGS_54,_FOR_EACH_2ARGS_53,_FOR_EACH_2ARGS_52,_FOR_EACH_2ARGS_51,_FOR_EACH_2ARGS_50,_FOR_EACH_2ARGS_49,_FOR_EACH_2ARGS_48,_FOR_EACH_2ARGS_47,_FOR_EACH_2ARGS_46,_FOR_EACH_2ARGS_45,_FOR_EACH_2ARGS_44,_FOR_EACH_2ARGS_43,_FOR_EACH_2ARGS_42,_FOR_EACH_2ARGS_41,_FOR_EACH_2ARGS_40,_FOR_EACH_2ARGS_39,_FOR_EACH_2ARGS_38,_FOR_EACH_2ARGS_37,_FOR_EACH_2ARGS_36,_FOR_EACH_2ARGS_35,_FOR_EACH_2ARGS_34,_FOR_EACH_2ARGS_33,_FOR_EACH_2ARGS_32,_FOR_EACH_2ARGS_31,_FOR_EACH_2ARGS_30,_FOR_EACH_2ARGS_29,_FOR_EACH_2ARGS_28,_FOR_EACH_2ARGS_27,_FOR_EACH_2ARGS_26,_FOR_EACH_2ARGS_25,_FOR_EACH_2ARGS_24,_FOR_EACH_2ARGS_23,_FOR_EACH_2ARGS_22,_FOR_EACH_2ARGS_21,_FOR_EACH_2ARGS_20,_FOR_EACH_2ARGS_19,_FOR_EACH_2ARGS_18,_FOR_EACH_2ARGS_17,_FOR_EACH_2ARGS_16,_FOR_EACH_2ARGS_15,_FOR_EACH_2ARGS_14,_FOR_EACH_2ARGS_13,_FOR_EACH_2ARGS_12,_FOR_EACH_2ARGS_11,_FOR_EACH_2ARGS_10,_FOR_EACH_2ARGS_9,_FOR_EACH_2ARGS_8,_FOR_EACH_2ARGS_7,_FOR_EACH_2ARGS_6,_FOR_EACH_2ARGS_5,_FOR_EACH_2ARGS_4,_FOR_EACH_2ARGS_3,_FOR_EACH_2ARGS_2,_FOR_EACH_2ARGS_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_2ARGS: Apply the action 'what' to a sequence of elements.
//   a0,a1: Static arguments that are passed into the action.
//   Loop: Each iteration processes 1 argument
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_2ARGS(what,a0,a1,...) EXPAND(_FOR_EACH_2ARGS_SELECT(__VA_ARGS__)(what,a0,a1,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_2ARGS_COUNT_1(what,i,a0,a1,x0) EXPAND(what(i,a0,a1,x0))
#define _FOR_EACH_2ARGS_COUNT_2(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_1(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_3(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_2(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_4(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_3(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_5(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_4(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_6(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_5(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_7(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_6(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_8(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_7(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_9(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_8(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_10(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_9(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_11(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_10(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_12(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_11(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_13(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_12(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_14(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_13(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_15(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_14(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_16(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_15(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_17(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_16(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_18(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_17(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_19(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_18(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_20(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_19(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_21(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_20(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_22(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_21(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_23(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_22(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_24(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_23(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_25(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_24(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_26(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_25(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_27(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_26(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_28(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_27(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_29(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_28(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_30(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_29(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_31(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_30(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_32(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_31(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_33(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_32(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_34(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_33(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_35(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_34(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_36(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_35(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_37(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_36(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_38(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_37(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_39(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_38(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_40(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_39(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_41(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_40(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_42(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_41(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_43(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_42(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_44(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_43(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_45(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_44(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_46(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_45(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_47(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_46(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_48(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_47(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_49(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_48(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_50(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_49(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_51(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_50(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_52(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_51(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_53(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_52(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_54(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_53(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_55(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_54(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_56(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_55(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_57(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_56(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_58(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_57(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_59(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_58(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_60(what,i,a0,a1,x0,...) EXPAND(what(i,a0,a1,x0) _FOR_EACH_2ARGS_COUNT_59(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_2ARGS_COUNT_60,_FOR_EACH_2ARGS_COUNT_59,_FOR_EACH_2ARGS_COUNT_58,_FOR_EACH_2ARGS_COUNT_57,_FOR_EACH_2ARGS_COUNT_56,_FOR_EACH_2ARGS_COUNT_55,_FOR_EACH_2ARGS_COUNT_54,_FOR_EACH_2ARGS_COUNT_53,_FOR_EACH_2ARGS_COUNT_52,_FOR_EACH_2ARGS_COUNT_51,_FOR_EACH_2ARGS_COUNT_50,_FOR_EACH_2ARGS_COUNT_49,_FOR_EACH_2ARGS_COUNT_48,_FOR_EACH_2ARGS_COUNT_47,_FOR_EACH_2ARGS_COUNT_46,_FOR_EACH_2ARGS_COUNT_45,_FOR_EACH_2ARGS_COUNT_44,_FOR_EACH_2ARGS_COUNT_43,_FOR_EACH_2ARGS_COUNT_42,_FOR_EACH_2ARGS_COUNT_41,_FOR_EACH_2ARGS_COUNT_40,_FOR_EACH_2ARGS_COUNT_39,_FOR_EACH_2ARGS_COUNT_38,_FOR_EACH_2ARGS_COUNT_37,_FOR_EACH_2ARGS_COUNT_36,_FOR_EACH_2ARGS_COUNT_35,_FOR_EACH_2ARGS_COUNT_34,_FOR_EACH_2ARGS_COUNT_33,_FOR_EACH_2ARGS_COUNT_32,_FOR_EACH_2ARGS_COUNT_31,_FOR_EACH_2ARGS_COUNT_30,_FOR_EACH_2ARGS_COUNT_29,_FOR_EACH_2ARGS_COUNT_28,_FOR_EACH_2ARGS_COUNT_27,_FOR_EACH_2ARGS_COUNT_26,_FOR_EACH_2ARGS_COUNT_25,_FOR_EACH_2ARGS_COUNT_24,_FOR_EACH_2ARGS_COUNT_23,_FOR_EACH_2ARGS_COUNT_22,_FOR_EACH_2ARGS_COUNT_21,_FOR_EACH_2ARGS_COUNT_20,_FOR_EACH_2ARGS_COUNT_19,_FOR_EACH_2ARGS_COUNT_18,_FOR_EACH_2ARGS_COUNT_17,_FOR_EACH_2ARGS_COUNT_16,_FOR_EACH_2ARGS_COUNT_15,_FOR_EACH_2ARGS_COUNT_14,_FOR_EACH_2ARGS_COUNT_13,_FOR_EACH_2ARGS_COUNT_12,_FOR_EACH_2ARGS_COUNT_11,_FOR_EACH_2ARGS_COUNT_10,_FOR_EACH_2ARGS_COUNT_9,_FOR_EACH_2ARGS_COUNT_8,_FOR_EACH_2ARGS_COUNT_7,_FOR_EACH_2ARGS_COUNT_6,_FOR_EACH_2ARGS_COUNT_5,_FOR_EACH_2ARGS_COUNT_4,_FOR_EACH_2ARGS_COUNT_3,_FOR_EACH_2ARGS_COUNT_2,_FOR_EACH_2ARGS_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_2ARGS_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0,a1: Static arguments that are passed into the action.
//   Loop: Each iteration processes 1 argument
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_2ARGS_COUNT(what,a0,a1,...) EXPAND(_FOR_EACH_2ARGS_COUNT_SELECT(__VA_ARGS__)(what,0,a0,a1,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_3ARGS_1(what,a0,a1,a2,x0) EXPAND(what(a0,a1,a2,x0))
#define _FOR_EACH_3ARGS_2(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_1(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_2(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_3(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_4(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_5(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_7(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_6(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_8(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_7(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_9(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_8(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_10(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_9(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_11(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_10(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_12(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_11(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_13(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_12(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_14(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_13(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_15(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_14(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_16(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_15(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_17(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_16(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_18(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_17(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_19(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_18(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_20(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_19(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_21(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_20(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_22(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_21(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_23(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_22(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_24(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_23(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_25(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_24(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_26(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_25(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_27(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_26(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_28(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_27(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_29(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_28(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_30(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_29(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_31(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_30(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_32(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_31(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_33(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_32(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_34(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_33(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_35(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_34(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_36(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_35(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_37(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_36(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_38(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_37(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_39(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_38(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_40(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_39(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_41(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_40(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_42(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_41(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_43(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_42(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_44(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_43(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_45(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_44(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_46(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_45(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_47(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_46(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_48(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_47(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_49(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_48(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_50(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_49(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_51(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_50(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_52(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_51(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_53(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_52(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_54(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_53(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_55(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_54(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_56(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_55(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_57(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_56(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_58(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_57(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_59(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_58(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_60(what,a0,a1,a2,x0,...) EXPAND(what(a0,a1,a2,x0) _FOR_EACH_3ARGS_59(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_3ARGS_60,_FOR_EACH_3ARGS_59,_FOR_EACH_3ARGS_58,_FOR_EACH_3ARGS_57,_FOR_EACH_3ARGS_56,_FOR_EACH_3ARGS_55,_FOR_EACH_3ARGS_54,_FOR_EACH_3ARGS_53,_FOR_EACH_3ARGS_52,_FOR_EACH_3ARGS_51,_FOR_EACH_3ARGS_50,_FOR_EACH_3ARGS_49,_FOR_EACH_3ARGS_48,_FOR_EACH_3ARGS_47,_FOR_EACH_3ARGS_46,_FOR_EACH_3ARGS_45,_FOR_EACH_3ARGS_44,_FOR_EACH_3ARGS_43,_FOR_EACH_3ARGS_42,_FOR_EACH_3ARGS_41,_FOR_EACH_3ARGS_40,_FOR_EACH_3ARGS_39,_FOR_EACH_3ARGS_38,_FOR_EACH_3ARGS_37,_FOR_EACH_3ARGS_36,_FOR_EACH_3ARGS_35,_FOR_EACH_3ARGS_34,_FOR_EACH_3ARGS_33,_FOR_EACH_3ARGS_32,_FOR_EACH_3ARGS_31,_FOR_EACH_3ARGS_30,_FOR_EACH_3ARGS_29,_FOR_EACH_3ARGS_28,_FOR_EACH_3ARGS_27,_FOR_EACH_3ARGS_26,_FOR_EACH_3ARGS_25,_FOR_EACH_3ARGS_24,_FOR_EACH_3ARGS_23,_FOR_EACH_3ARGS_22,_FOR_EACH_3ARGS_21,_FOR_EACH_3ARGS_20,_FOR_EACH_3ARGS_19,_FOR_EACH_3ARGS_18,_FOR_EACH_3ARGS_17,_FOR_EACH_3ARGS_16,_FOR_EACH_3ARGS_15,_FOR_EACH_3ARGS_14,_FOR_EACH_3ARGS_13,_FOR_EACH_3ARGS_12,_FOR_EACH_3ARGS_11,_FOR_EACH_3ARGS_10,_FOR_EACH_3ARGS_9,_FOR_EACH_3ARGS_8,_FOR_EACH_3ARGS_7,_FOR_EACH_3ARGS_6,_FOR_EACH_3ARGS_5,_FOR_EACH_3ARGS_4,_FOR_EACH_3ARGS_3,_FOR_EACH_3ARGS_2,_FOR_EACH_3ARGS_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_3ARGS: Apply the action 'what' to a sequence of elements.
//   a0,a1,a2: Static arguments that are passed into the action.
//   Loop: Each iteration processes 1 argument
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_3ARGS(what,a0,a1,a2,...) EXPAND(_FOR_EACH_3ARGS_SELECT(__VA_ARGS__)(what,a0,a1,a2,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_3ARGS_COUNT_1(what,i,a0,a1,a2,x0) EXPAND(what(i,a0,a1,a2,x0))
#define _FOR_EACH_3ARGS_COUNT_2(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_1(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_3(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_2(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_4(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_3(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_5(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_4(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_6(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_5(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_7(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_6(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_8(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_7(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_9(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_8(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_10(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_9(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_11(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_10(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_12(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_11(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_13(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_12(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_14(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_13(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_15(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_14(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_16(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_15(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_17(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_16(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_18(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_17(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_19(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_18(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_20(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_19(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_21(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_20(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_22(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_21(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_23(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_22(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_24(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_23(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_25(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_24(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_26(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_25(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_27(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_26(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_28(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_27(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_29(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_28(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_30(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_29(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_31(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_30(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_32(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_31(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_33(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_32(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_34(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_33(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_35(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_34(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_36(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_35(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_37(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_36(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_38(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_37(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_39(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_38(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_40(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_39(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_41(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_40(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_42(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_41(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_43(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_42(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_44(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_43(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_45(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_44(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_46(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_45(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_47(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_46(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_48(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_47(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_49(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_48(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_50(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_49(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_51(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_50(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_52(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_51(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_53(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_52(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_54(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_53(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_55(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_54(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_56(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_55(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_57(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_56(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_58(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_57(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_59(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_58(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_60(what,i,a0,a1,a2,x0,...) EXPAND(what(i,a0,a1,a2,x0) _FOR_EACH_3ARGS_COUNT_59(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_3ARGS_COUNT_60,_FOR_EACH_3ARGS_COUNT_59,_FOR_EACH_3ARGS_COUNT_58,_FOR_EACH_3ARGS_COUNT_57,_FOR_EACH_3ARGS_COUNT_56,_FOR_EACH_3ARGS_COUNT_55,_FOR_EACH_3ARGS_COUNT_54,_FOR_EACH_3ARGS_COUNT_53,_FOR_EACH_3ARGS_COUNT_52,_FOR_EACH_3ARGS_COUNT_51,_FOR_EACH_3ARGS_COUNT_50,_FOR_EACH_3ARGS_COUNT_49,_FOR_EACH_3ARGS_COUNT_48,_FOR_EACH_3ARGS_COUNT_47,_FOR_EACH_3ARGS_COUNT_46,_FOR_EACH_3ARGS_COUNT_45,_FOR_EACH_3ARGS_COUNT_44,_FOR_EACH_3ARGS_COUNT_43,_FOR_EACH_3ARGS_COUNT_42,_FOR_EACH_3ARGS_COUNT_41,_FOR_EACH_3ARGS_COUNT_40,_FOR_EACH_3ARGS_COUNT_39,_FOR_EACH_3ARGS_COUNT_38,_FOR_EACH_3ARGS_COUNT_37,_FOR_EACH_3ARGS_COUNT_36,_FOR_EACH_3ARGS_COUNT_35,_FOR_EACH_3ARGS_COUNT_34,_FOR_EACH_3ARGS_COUNT_33,_FOR_EACH_3ARGS_COUNT_32,_FOR_EACH_3ARGS_COUNT_31,_FOR_EACH_3ARGS_COUNT_30,_FOR_EACH_3ARGS_COUNT_29,_FOR_EACH_3ARGS_COUNT_28,_FOR_EACH_3ARGS_COUNT_27,_FOR_EACH_3ARGS_COUNT_26,_FOR_EACH_3ARGS_COUNT_25,_FOR_EACH_3ARGS_COUNT_24,_FOR_EACH_3ARGS_COUNT_23,_FOR_EACH_3ARGS_COUNT_22,_FOR_EACH_3ARGS_COUNT_21,_FOR_EACH_3ARGS_COUNT_20,_FOR_EACH_3ARGS_COUNT_19,_FOR_EACH_3ARGS_COUNT_18,_FOR_EACH_3ARGS_COUNT_17,_FOR_EACH_3ARGS_COUNT_16,_FOR_EACH_3ARGS_COUNT_15,_FOR_EACH_3ARGS_COUNT_14,_FOR_EACH_3ARGS_COUNT_13,_FOR_EACH_3ARGS_COUNT_12,_FOR_EACH_3ARGS_COUNT_11,_FOR_EACH_3ARGS_COUNT_10,_FOR_EACH_3ARGS_COUNT_9,_FOR_EACH_3ARGS_COUNT_8,_FOR_EACH_3ARGS_COUNT_7,_FOR_EACH_3ARGS_COUNT_6,_FOR_EACH_3ARGS_COUNT_5,_FOR_EACH_3ARGS_COUNT_4,_FOR_EACH_3ARGS_COUNT_3,_FOR_EACH_3ARGS_COUNT_2,_FOR_EACH_3ARGS_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_3ARGS_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0,a1,a2: Static arguments that are passed into the action.
//   Loop: Each iteration processes 1 argument
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_3ARGS_COUNT(what,a0,a1,a2,...) EXPAND(_FOR_EACH_3ARGS_COUNT_SELECT(__VA_ARGS__)(what,0,a0,a1,a2,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_2_1(what,x0,x1) EXPAND(what(x0,x1))
#define _FOR_EACH_2_2(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_1(what,__VA_ARGS__))
#define _FOR_EACH_2_3(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_2(what,__VA_ARGS__))
#define _FOR_EACH_2_4(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_3(what,__VA_ARGS__))
#define _FOR_EACH_2_5(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_4(what,__VA_ARGS__))
#define _FOR_EACH_2_6(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_5(what,__VA_ARGS__))
#define _FOR_EACH_2_7(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_6(what,__VA_ARGS__))
#define _FOR_EACH_2_8(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_7(what,__VA_ARGS__))
#define _FOR_EACH_2_9(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_8(what,__VA_ARGS__))
#define _FOR_EACH_2_10(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_9(what,__VA_ARGS__))
#define _FOR_EACH_2_11(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_10(what,__VA_ARGS__))
#define _FOR_EACH_2_12(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_11(what,__VA_ARGS__))
#define _FOR_EACH_2_13(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_12(what,__VA_ARGS__))
#define _FOR_EACH_2_14(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_13(what,__VA_ARGS__))
#define _FOR_EACH_2_15(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_14(what,__VA_ARGS__))
#define _FOR_EACH_2_16(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_15(what,__VA_ARGS__))
#define _FOR_EACH_2_17(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_16(what,__VA_ARGS__))
#define _FOR_EACH_2_18(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_17(what,__VA_ARGS__))
#define _FOR_EACH_2_19(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_18(what,__VA_ARGS__))
#define _FOR_EACH_2_20(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_19(what,__VA_ARGS__))
#define _FOR_EACH_2_21(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_20(what,__VA_ARGS__))
#define _FOR_EACH_2_22(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_21(what,__VA_ARGS__))
#define _FOR_EACH_2_23(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_22(what,__VA_ARGS__))
#define _FOR_EACH_2_24(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_23(what,__VA_ARGS__))
#define _FOR_EACH_2_25(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_24(what,__VA_ARGS__))
#define _FOR_EACH_2_26(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_25(what,__VA_ARGS__))
#define _FOR_EACH_2_27(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_26(what,__VA_ARGS__))
#define _FOR_EACH_2_28(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_27(what,__VA_ARGS__))
#define _FOR_EACH_2_29(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_28(what,__VA_ARGS__))
#define _FOR_EACH_2_30(what,x0,x1,...) EXPAND(what(x0,x1) _FOR_EACH_2_29(what,__VA_ARGS__))
#define _FOR_EACH_2_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_2_30,_FOR_EACH_2_30,_FOR_EACH_2_29,_FOR_EACH_2_29,_FOR_EACH_2_28,_FOR_EACH_2_28,_FOR_EACH_2_27,_FOR_EACH_2_27,_FOR_EACH_2_26,_FOR_EACH_2_26,_FOR_EACH_2_25,_FOR_EACH_2_25,_FOR_EACH_2_24,_FOR_EACH_2_24,_FOR_EACH_2_23,_FOR_EACH_2_23,_FOR_EACH_2_22,_FOR_EACH_2_22,_FOR_EACH_2_21,_FOR_EACH_2_21,_FOR_EACH_2_20,_FOR_EACH_2_20,_FOR_EACH_2_19,_FOR_EACH_2_19,_FOR_EACH_2_18,_FOR_EACH_2_18,_FOR_EACH_2_17,_FOR_EACH_2_17,_FOR_EACH_2_16,_FOR_EACH_2_16,_FOR_EACH_2_15,_FOR_EACH_2_15,_FOR_EACH_2_14,_FOR_EACH_2_14,_FOR_EACH_2_13,_FOR_EACH_2_13,_FOR_EACH_2_12,_FOR_EACH_2_12,_FOR_EACH_2_11,_FOR_EACH_2_11,_FOR_EACH_2_10,_FOR_EACH_2_10,_FOR_EACH_2_9,_FOR_EACH_2_9,_FOR_EACH_2_8,_FOR_EACH_2_8,_FOR_EACH_2_7,_FOR_EACH_2_7,_FOR_EACH_2_6,_FOR_EACH_2_6,_FOR_EACH_2_5,_FOR_EACH_2_5,_FOR_EACH_2_4,_FOR_EACH_2_4,_FOR_EACH_2_3,_FOR_EACH_2_3,_FOR_EACH_2_2,_FOR_EACH_2_2,_FOR_EACH_2_1,_FOR_EACH_2_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_2: Apply the action 'what' to a sequence of elements.
//   Loop: Each iteration processes 2 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_2(what,...) EXPAND(_FOR_EACH_2_SELECT(__VA_ARGS__)(what,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_2_COUNT_1(what,i,x0,x1) EXPAND(what(i,x0,x1))
#define _FOR_EACH_2_COUNT_2(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_1(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_3(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_2(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_4(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_3(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_5(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_4(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_6(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_5(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_7(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_6(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_8(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_7(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_9(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_8(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_10(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_9(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_11(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_10(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_12(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_11(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_13(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_12(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_14(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_13(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_15(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_14(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_16(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_15(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_17(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_16(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_18(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_17(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_19(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_18(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_20(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_19(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_21(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_20(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_22(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_21(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_23(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_22(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_24(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_23(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_25(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_24(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_26(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_25(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_27(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_26(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_28(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_27(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_29(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_28(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_30(what,i,x0,x1,...) EXPAND(what(i,x0,x1) _FOR_EACH_2_COUNT_29(what,i+1,__VA_ARGS__))
#define _FOR_EACH_2_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_2_COUNT_30,_FOR_EACH_2_COUNT_30,_FOR_EACH_2_COUNT_29,_FOR_EACH_2_COUNT_29,_FOR_EACH_2_COUNT_28,_FOR_EACH_2_COUNT_28,_FOR_EACH_2_COUNT_27,_FOR_EACH_2_COUNT_27,_FOR_EACH_2_COUNT_26,_FOR_EACH_2_COUNT_26,_FOR_EACH_2_COUNT_25,_FOR_EACH_2_COUNT_25,_FOR_EACH_2_COUNT_24,_FOR_EACH_2_COUNT_24,_FOR_EACH_2_COUNT_23,_FOR_EACH_2_COUNT_23,_FOR_EACH_2_COUNT_22,_FOR_EACH_2_COUNT_22,_FOR_EACH_2_COUNT_21,_FOR_EACH_2_COUNT_21,_FOR_EACH_2_COUNT_20,_FOR_EACH_2_COUNT_20,_FOR_EACH_2_COUNT_19,_FOR_EACH_2_COUNT_19,_FOR_EACH_2_COUNT_18,_FOR_EACH_2_COUNT_18,_FOR_EACH_2_COUNT_17,_FOR_EACH_2_COUNT_17,_FOR_EACH_2_COUNT_16,_FOR_EACH_2_COUNT_16,_FOR_EACH_2_COUNT_15,_FOR_EACH_2_COUNT_15,_FOR_EACH_2_COUNT_14,_FOR_EACH_2_COUNT_14,_FOR_EACH_2_COUNT_13,_FOR_EACH_2_COUNT_13,_FOR_EACH_2_COUNT_12,_FOR_EACH_2_COUNT_12,_FOR_EACH_2_COUNT_11,_FOR_EACH_2_COUNT_11,_FOR_EACH_2_COUNT_10,_FOR_EACH_2_COUNT_10,_FOR_EACH_2_COUNT_9,_FOR_EACH_2_COUNT_9,_FOR_EACH_2_COUNT_8,_FOR_EACH_2_COUNT_8,_FOR_EACH_2_COUNT_7,_FOR_EACH_2_COUNT_7,_FOR_EACH_2_COUNT_6,_FOR_EACH_2_COUNT_6,_FOR_EACH_2_COUNT_5,_FOR_EACH_2_COUNT_5,_FOR_EACH_2_COUNT_4,_FOR_EACH_2_COUNT_4,_FOR_EACH_2_COUNT_3,_FOR_EACH_2_COUNT_3,_FOR_EACH_2_COUNT_2,_FOR_EACH_2_COUNT_2,_FOR_EACH_2_COUNT_1,_FOR_EACH_2_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_2_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   Loop: Each iteration processes 2 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_2_COUNT(what,...) EXPAND(_FOR_EACH_2_COUNT_SELECT(__VA_ARGS__)(what,0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_1ARG_2_1(what,a0,x0,x1) EXPAND(what(a0,x0,x1))
#define _FOR_EACH_1ARG_2_2(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_1(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_3(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_2(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_4(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_3(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_5(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_4(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_6(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_5(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_7(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_6(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_8(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_7(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_9(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_8(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_10(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_9(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_11(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_10(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_12(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_11(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_13(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_12(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_14(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_13(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_15(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_14(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_16(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_15(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_17(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_16(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_18(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_17(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_19(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_18(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_20(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_19(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_21(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_20(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_22(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_21(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_23(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_22(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_24(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_23(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_25(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_24(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_26(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_25(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_27(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_26(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_28(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_27(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_29(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_28(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_30(what,a0,x0,x1,...) EXPAND(what(a0,x0,x1) _FOR_EACH_1ARG_2_29(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_1ARG_2_30,_FOR_EACH_1ARG_2_30,_FOR_EACH_1ARG_2_29,_FOR_EACH_1ARG_2_29,_FOR_EACH_1ARG_2_28,_FOR_EACH_1ARG_2_28,_FOR_EACH_1ARG_2_27,_FOR_EACH_1ARG_2_27,_FOR_EACH_1ARG_2_26,_FOR_EACH_1ARG_2_26,_FOR_EACH_1ARG_2_25,_FOR_EACH_1ARG_2_25,_FOR_EACH_1ARG_2_24,_FOR_EACH_1ARG_2_24,_FOR_EACH_1ARG_2_23,_FOR_EACH_1ARG_2_23,_FOR_EACH_1ARG_2_22,_FOR_EACH_1ARG_2_22,_FOR_EACH_1ARG_2_21,_FOR_EACH_1ARG_2_21,_FOR_EACH_1ARG_2_20,_FOR_EACH_1ARG_2_20,_FOR_EACH_1ARG_2_19,_FOR_EACH_1ARG_2_19,_FOR_EACH_1ARG_2_18,_FOR_EACH_1ARG_2_18,_FOR_EACH_1ARG_2_17,_FOR_EACH_1ARG_2_17,_FOR_EACH_1ARG_2_16,_FOR_EACH_1ARG_2_16,_FOR_EACH_1ARG_2_15,_FOR_EACH_1ARG_2_15,_FOR_EACH_1ARG_2_14,_FOR_EACH_1ARG_2_14,_FOR_EACH_1ARG_2_13,_FOR_EACH_1ARG_2_13,_FOR_EACH_1ARG_2_12,_FOR_EACH_1ARG_2_12,_FOR_EACH_1ARG_2_11,_FOR_EACH_1ARG_2_11,_FOR_EACH_1ARG_2_10,_FOR_EACH_1ARG_2_10,_FOR_EACH_1ARG_2_9,_FOR_EACH_1ARG_2_9,_FOR_EACH_1ARG_2_8,_FOR_EACH_1ARG_2_8,_FOR_EACH_1ARG_2_7,_FOR_EACH_1ARG_2_7,_FOR_EACH_1ARG_2_6,_FOR_EACH_1ARG_2_6,_FOR_EACH_1ARG_2_5,_FOR_EACH_1ARG_2_5,_FOR_EACH_1ARG_2_4,_FOR_EACH_1ARG_2_4,_FOR_EACH_1ARG_2_3,_FOR_EACH_1ARG_2_3,_FOR_EACH_1ARG_2_2,_FOR_EACH_1ARG_2_2,_FOR_EACH_1ARG_2_1,_FOR_EACH_1ARG_2_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_1ARG_2: Apply the action 'what' to a sequence of elements.
//   a0: Static arguments that are passed into the action.
//   Loop: Each iteration processes 2 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_1ARG_2(what,a0,...) EXPAND(_FOR_EACH_1ARG_2_SELECT(__VA_ARGS__)(what,a0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_1ARG_2_COUNT_1(what,i,a0,x0,x1) EXPAND(what(i,a0,x0,x1))
#define _FOR_EACH_1ARG_2_COUNT_2(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_1(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_3(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_2(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_4(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_3(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_5(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_4(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_6(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_5(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_7(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_6(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_8(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_7(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_9(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_8(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_10(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_9(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_11(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_10(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_12(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_11(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_13(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_12(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_14(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_13(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_15(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_14(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_16(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_15(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_17(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_16(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_18(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_17(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_19(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_18(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_20(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_19(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_21(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_20(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_22(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_21(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_23(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_22(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_24(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_23(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_25(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_24(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_26(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_25(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_27(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_26(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_28(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_27(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_29(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_28(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_30(what,i,a0,x0,x1,...) EXPAND(what(i,a0,x0,x1) _FOR_EACH_1ARG_2_COUNT_29(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_2_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_1ARG_2_COUNT_30,_FOR_EACH_1ARG_2_COUNT_30,_FOR_EACH_1ARG_2_COUNT_29,_FOR_EACH_1ARG_2_COUNT_29,_FOR_EACH_1ARG_2_COUNT_28,_FOR_EACH_1ARG_2_COUNT_28,_FOR_EACH_1ARG_2_COUNT_27,_FOR_EACH_1ARG_2_COUNT_27,_FOR_EACH_1ARG_2_COUNT_26,_FOR_EACH_1ARG_2_COUNT_26,_FOR_EACH_1ARG_2_COUNT_25,_FOR_EACH_1ARG_2_COUNT_25,_FOR_EACH_1ARG_2_COUNT_24,_FOR_EACH_1ARG_2_COUNT_24,_FOR_EACH_1ARG_2_COUNT_23,_FOR_EACH_1ARG_2_COUNT_23,_FOR_EACH_1ARG_2_COUNT_22,_FOR_EACH_1ARG_2_COUNT_22,_FOR_EACH_1ARG_2_COUNT_21,_FOR_EACH_1ARG_2_COUNT_21,_FOR_EACH_1ARG_2_COUNT_20,_FOR_EACH_1ARG_2_COUNT_20,_FOR_EACH_1ARG_2_COUNT_19,_FOR_EACH_1ARG_2_COUNT_19,_FOR_EACH_1ARG_2_COUNT_18,_FOR_EACH_1ARG_2_COUNT_18,_FOR_EACH_1ARG_2_COUNT_17,_FOR_EACH_1ARG_2_COUNT_17,_FOR_EACH_1ARG_2_COUNT_16,_FOR_EACH_1ARG_2_COUNT_16,_FOR_EACH_1ARG_2_COUNT_15,_FOR_EACH_1ARG_2_COUNT_15,_FOR_EACH_1ARG_2_COUNT_14,_FOR_EACH_1ARG_2_COUNT_14,_FOR_EACH_1ARG_2_COUNT_13,_FOR_EACH_1ARG_2_COUNT_13,_FOR_EACH_1ARG_2_COUNT_12,_FOR_EACH_1ARG_2_COUNT_12,_FOR_EACH_1ARG_2_COUNT_11,_FOR_EACH_1ARG_2_COUNT_11,_FOR_EACH_1ARG_2_COUNT_10,_FOR_EACH_1ARG_2_COUNT_10,_FOR_EACH_1ARG_2_COUNT_9,_FOR_EACH_1ARG_2_COUNT_9,_FOR_EACH_1ARG_2_COUNT_8,_FOR_EACH_1ARG_2_COUNT_8,_FOR_EACH_1ARG_2_COUNT_7,_FOR_EACH_1ARG_2_COUNT_7,_FOR_EACH_1ARG_2_COUNT_6,_FOR_EACH_1ARG_2_COUNT_6,_FOR_EACH_1ARG_2_COUNT_5,_FOR_EACH_1ARG_2_COUNT_5,_FOR_EACH_1ARG_2_COUNT_4,_FOR_EACH_1ARG_2_COUNT_4,_FOR_EACH_1ARG_2_COUNT_3,_FOR_EACH_1ARG_2_COUNT_3,_FOR_EACH_1ARG_2_COUNT_2,_FOR_EACH_1ARG_2_COUNT_2,_FOR_EACH_1ARG_2_COUNT_1,_FOR_EACH_1ARG_2_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_1ARG_2_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0: Static arguments that are passed into the action.
//   Loop: Each iteration processes 2 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_1ARG_2_COUNT(what,a0,...) EXPAND(_FOR_EACH_1ARG_2_COUNT_SELECT(__VA_ARGS__)(what,0,a0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_2ARGS_2_1(what,a0,a1,x0,x1) EXPAND(what(a0,a1,x0,x1))
#define _FOR_EACH_2ARGS_2_2(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_1(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_3(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_2(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_4(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_3(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_5(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_4(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_6(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_5(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_7(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_6(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_8(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_7(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_9(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_8(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_10(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_9(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_11(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_10(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_12(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_11(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_13(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_12(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_14(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_13(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_15(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_14(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_16(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_15(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_17(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_16(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_18(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_17(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_19(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_18(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_20(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_19(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_21(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_20(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_22(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_21(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_23(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_22(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_24(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_23(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_25(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_24(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_26(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_25(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_27(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_26(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_28(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_27(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_29(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_28(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_30(what,a0,a1,x0,x1,...) EXPAND(what(a0,a1,x0,x1) _FOR_EACH_2ARGS_2_29(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_2ARGS_2_30,_FOR_EACH_2ARGS_2_30,_FOR_EACH_2ARGS_2_29,_FOR_EACH_2ARGS_2_29,_FOR_EACH_2ARGS_2_28,_FOR_EACH_2ARGS_2_28,_FOR_EACH_2ARGS_2_27,_FOR_EACH_2ARGS_2_27,_FOR_EACH_2ARGS_2_26,_FOR_EACH_2ARGS_2_26,_FOR_EACH_2ARGS_2_25,_FOR_EACH_2ARGS_2_25,_FOR_EACH_2ARGS_2_24,_FOR_EACH_2ARGS_2_24,_FOR_EACH_2ARGS_2_23,_FOR_EACH_2ARGS_2_23,_FOR_EACH_2ARGS_2_22,_FOR_EACH_2ARGS_2_22,_FOR_EACH_2ARGS_2_21,_FOR_EACH_2ARGS_2_21,_FOR_EACH_2ARGS_2_20,_FOR_EACH_2ARGS_2_20,_FOR_EACH_2ARGS_2_19,_FOR_EACH_2ARGS_2_19,_FOR_EACH_2ARGS_2_18,_FOR_EACH_2ARGS_2_18,_FOR_EACH_2ARGS_2_17,_FOR_EACH_2ARGS_2_17,_FOR_EACH_2ARGS_2_16,_FOR_EACH_2ARGS_2_16,_FOR_EACH_2ARGS_2_15,_FOR_EACH_2ARGS_2_15,_FOR_EACH_2ARGS_2_14,_FOR_EACH_2ARGS_2_14,_FOR_EACH_2ARGS_2_13,_FOR_EACH_2ARGS_2_13,_FOR_EACH_2ARGS_2_12,_FOR_EACH_2ARGS_2_12,_FOR_EACH_2ARGS_2_11,_FOR_EACH_2ARGS_2_11,_FOR_EACH_2ARGS_2_10,_FOR_EACH_2ARGS_2_10,_FOR_EACH_2ARGS_2_9,_FOR_EACH_2ARGS_2_9,_FOR_EACH_2ARGS_2_8,_FOR_EACH_2ARGS_2_8,_FOR_EACH_2ARGS_2_7,_FOR_EACH_2ARGS_2_7,_FOR_EACH_2ARGS_2_6,_FOR_EACH_2ARGS_2_6,_FOR_EACH_2ARGS_2_5,_FOR_EACH_2ARGS_2_5,_FOR_EACH_2ARGS_2_4,_FOR_EACH_2ARGS_2_4,_FOR_EACH_2ARGS_2_3,_FOR_EACH_2ARGS_2_3,_FOR_EACH_2ARGS_2_2,_FOR_EACH_2ARGS_2_2,_FOR_EACH_2ARGS_2_1,_FOR_EACH_2ARGS_2_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_2ARGS_2: Apply the action 'what' to a sequence of elements.
//   a0,a1: Static arguments that are passed into the action.
//   Loop: Each iteration processes 2 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_2ARGS_2(what,a0,a1,...) EXPAND(_FOR_EACH_2ARGS_2_SELECT(__VA_ARGS__)(what,a0,a1,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_2ARGS_2_COUNT_1(what,i,a0,a1,x0,x1) EXPAND(what(i,a0,a1,x0,x1))
#define _FOR_EACH_2ARGS_2_COUNT_2(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_1(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_3(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_2(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_4(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_3(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_5(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_4(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_6(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_5(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_7(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_6(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_8(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_7(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_9(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_8(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_10(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_9(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_11(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_10(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_12(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_11(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_13(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_12(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_14(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_13(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_15(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_14(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_16(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_15(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_17(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_16(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_18(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_17(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_19(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_18(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_20(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_19(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_21(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_20(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_22(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_21(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_23(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_22(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_24(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_23(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_25(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_24(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_26(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_25(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_27(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_26(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_28(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_27(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_29(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_28(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_30(what,i,a0,a1,x0,x1,...) EXPAND(what(i,a0,a1,x0,x1) _FOR_EACH_2ARGS_2_COUNT_29(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_2_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_2ARGS_2_COUNT_30,_FOR_EACH_2ARGS_2_COUNT_30,_FOR_EACH_2ARGS_2_COUNT_29,_FOR_EACH_2ARGS_2_COUNT_29,_FOR_EACH_2ARGS_2_COUNT_28,_FOR_EACH_2ARGS_2_COUNT_28,_FOR_EACH_2ARGS_2_COUNT_27,_FOR_EACH_2ARGS_2_COUNT_27,_FOR_EACH_2ARGS_2_COUNT_26,_FOR_EACH_2ARGS_2_COUNT_26,_FOR_EACH_2ARGS_2_COUNT_25,_FOR_EACH_2ARGS_2_COUNT_25,_FOR_EACH_2ARGS_2_COUNT_24,_FOR_EACH_2ARGS_2_COUNT_24,_FOR_EACH_2ARGS_2_COUNT_23,_FOR_EACH_2ARGS_2_COUNT_23,_FOR_EACH_2ARGS_2_COUNT_22,_FOR_EACH_2ARGS_2_COUNT_22,_FOR_EACH_2ARGS_2_COUNT_21,_FOR_EACH_2ARGS_2_COUNT_21,_FOR_EACH_2ARGS_2_COUNT_20,_FOR_EACH_2ARGS_2_COUNT_20,_FOR_EACH_2ARGS_2_COUNT_19,_FOR_EACH_2ARGS_2_COUNT_19,_FOR_EACH_2ARGS_2_COUNT_18,_FOR_EACH_2ARGS_2_COUNT_18,_FOR_EACH_2ARGS_2_COUNT_17,_FOR_EACH_2ARGS_2_COUNT_17,_FOR_EACH_2ARGS_2_COUNT_16,_FOR_EACH_2ARGS_2_COUNT_16,_FOR_EACH_2ARGS_2_COUNT_15,_FOR_EACH_2ARGS_2_COUNT_15,_FOR_EACH_2ARGS_2_COUNT_14,_FOR_EACH_2ARGS_2_COUNT_14,_FOR_EACH_2ARGS_2_COUNT_13,_FOR_EACH_2ARGS_2_COUNT_13,_FOR_EACH_2ARGS_2_COUNT_12,_FOR_EACH_2ARGS_2_COUNT_12,_FOR_EACH_2ARGS_2_COUNT_11,_FOR_EACH_2ARGS_2_COUNT_11,_FOR_EACH_2ARGS_2_COUNT_10,_FOR_EACH_2ARGS_2_COUNT_10,_FOR_EACH_2ARGS_2_COUNT_9,_FOR_EACH_2ARGS_2_COUNT_9,_FOR_EACH_2ARGS_2_COUNT_8,_FOR_EACH_2ARGS_2_COUNT_8,_FOR_EACH_2ARGS_2_COUNT_7,_FOR_EACH_2ARGS_2_COUNT_7,_FOR_EACH_2ARGS_2_COUNT_6,_FOR_EACH_2ARGS_2_COUNT_6,_FOR_EACH_2ARGS_2_COUNT_5,_FOR_EACH_2ARGS_2_COUNT_5,_FOR_EACH_2ARGS_2_COUNT_4,_FOR_EACH_2ARGS_2_COUNT_4,_FOR_EACH_2ARGS_2_COUNT_3,_FOR_EACH_2ARGS_2_COUNT_3,_FOR_EACH_2ARGS_2_COUNT_2,_FOR_EACH_2ARGS_2_COUNT_2,_FOR_EACH_2ARGS_2_COUNT_1,_FOR_EACH_2ARGS_2_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_2ARGS_2_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0,a1: Static arguments that are passed into the action.
//   Loop: Each iteration processes 2 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_2ARGS_2_COUNT(what,a0,a1,...) EXPAND(_FOR_EACH_2ARGS_2_COUNT_SELECT(__VA_ARGS__)(what,0,a0,a1,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_3ARGS_2_1(what,a0,a1,a2,x0,x1) EXPAND(what(a0,a1,a2,x0,x1))
#define _FOR_EACH_3ARGS_2_2(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_1(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_3(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_2(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_4(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_3(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_5(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_4(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_6(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_5(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_7(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_6(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_8(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_7(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_9(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_8(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_10(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_9(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_11(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_10(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_12(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_11(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_13(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_12(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_14(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_13(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_15(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_14(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_16(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_15(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_17(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_16(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_18(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_17(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_19(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_18(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_20(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_19(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_21(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_20(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_22(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_21(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_23(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_22(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_24(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_23(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_25(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_24(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_26(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_25(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_27(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_26(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_28(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_27(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_29(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_28(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_30(what,a0,a1,a2,x0,x1,...) EXPAND(what(a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_29(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_3ARGS_2_30,_FOR_EACH_3ARGS_2_30,_FOR_EACH_3ARGS_2_29,_FOR_EACH_3ARGS_2_29,_FOR_EACH_3ARGS_2_28,_FOR_EACH_3ARGS_2_28,_FOR_EACH_3ARGS_2_27,_FOR_EACH_3ARGS_2_27,_FOR_EACH_3ARGS_2_26,_FOR_EACH_3ARGS_2_26,_FOR_EACH_3ARGS_2_25,_FOR_EACH_3ARGS_2_25,_FOR_EACH_3ARGS_2_24,_FOR_EACH_3ARGS_2_24,_FOR_EACH_3ARGS_2_23,_FOR_EACH_3ARGS_2_23,_FOR_EACH_3ARGS_2_22,_FOR_EACH_3ARGS_2_22,_FOR_EACH_3ARGS_2_21,_FOR_EACH_3ARGS_2_21,_FOR_EACH_3ARGS_2_20,_FOR_EACH_3ARGS_2_20,_FOR_EACH_3ARGS_2_19,_FOR_EACH_3ARGS_2_19,_FOR_EACH_3ARGS_2_18,_FOR_EACH_3ARGS_2_18,_FOR_EACH_3ARGS_2_17,_FOR_EACH_3ARGS_2_17,_FOR_EACH_3ARGS_2_16,_FOR_EACH_3ARGS_2_16,_FOR_EACH_3ARGS_2_15,_FOR_EACH_3ARGS_2_15,_FOR_EACH_3ARGS_2_14,_FOR_EACH_3ARGS_2_14,_FOR_EACH_3ARGS_2_13,_FOR_EACH_3ARGS_2_13,_FOR_EACH_3ARGS_2_12,_FOR_EACH_3ARGS_2_12,_FOR_EACH_3ARGS_2_11,_FOR_EACH_3ARGS_2_11,_FOR_EACH_3ARGS_2_10,_FOR_EACH_3ARGS_2_10,_FOR_EACH_3ARGS_2_9,_FOR_EACH_3ARGS_2_9,_FOR_EACH_3ARGS_2_8,_FOR_EACH_3ARGS_2_8,_FOR_EACH_3ARGS_2_7,_FOR_EACH_3ARGS_2_7,_FOR_EACH_3ARGS_2_6,_FOR_EACH_3ARGS_2_6,_FOR_EACH_3ARGS_2_5,_FOR_EACH_3ARGS_2_5,_FOR_EACH_3ARGS_2_4,_FOR_EACH_3ARGS_2_4,_FOR_EACH_3ARGS_2_3,_FOR_EACH_3ARGS_2_3,_FOR_EACH_3ARGS_2_2,_FOR_EACH_3ARGS_2_2,_FOR_EACH_3ARGS_2_1,_FOR_EACH_3ARGS_2_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_3ARGS_2: Apply the action 'what' to a sequence of elements.
//   a0,a1,a2: Static arguments that are passed into the action.
//   Loop: Each iteration processes 2 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_3ARGS_2(what,a0,a1,a2,...) EXPAND(_FOR_EACH_3ARGS_2_SELECT(__VA_ARGS__)(what,a0,a1,a2,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_3ARGS_2_COUNT_1(what,i,a0,a1,a2,x0,x1) EXPAND(what(i,a0,a1,a2,x0,x1))
#define _FOR_EACH_3ARGS_2_COUNT_2(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_1(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_3(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_2(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_4(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_3(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_5(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_4(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_6(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_5(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_7(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_6(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_8(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_7(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_9(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_8(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_10(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_9(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_11(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_10(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_12(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_11(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_13(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_12(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_14(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_13(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_15(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_14(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_16(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_15(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_17(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_16(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_18(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_17(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_19(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_18(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_20(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_19(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_21(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_20(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_22(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_21(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_23(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_22(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_24(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_23(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_25(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_24(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_26(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_25(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_27(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_26(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_28(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_27(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_29(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_28(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_30(what,i,a0,a1,a2,x0,x1,...) EXPAND(what(i,a0,a1,a2,x0,x1) _FOR_EACH_3ARGS_2_COUNT_29(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_2_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_3ARGS_2_COUNT_30,_FOR_EACH_3ARGS_2_COUNT_30,_FOR_EACH_3ARGS_2_COUNT_29,_FOR_EACH_3ARGS_2_COUNT_29,_FOR_EACH_3ARGS_2_COUNT_28,_FOR_EACH_3ARGS_2_COUNT_28,_FOR_EACH_3ARGS_2_COUNT_27,_FOR_EACH_3ARGS_2_COUNT_27,_FOR_EACH_3ARGS_2_COUNT_26,_FOR_EACH_3ARGS_2_COUNT_26,_FOR_EACH_3ARGS_2_COUNT_25,_FOR_EACH_3ARGS_2_COUNT_25,_FOR_EACH_3ARGS_2_COUNT_24,_FOR_EACH_3ARGS_2_COUNT_24,_FOR_EACH_3ARGS_2_COUNT_23,_FOR_EACH_3ARGS_2_COUNT_23,_FOR_EACH_3ARGS_2_COUNT_22,_FOR_EACH_3ARGS_2_COUNT_22,_FOR_EACH_3ARGS_2_COUNT_21,_FOR_EACH_3ARGS_2_COUNT_21,_FOR_EACH_3ARGS_2_COUNT_20,_FOR_EACH_3ARGS_2_COUNT_20,_FOR_EACH_3ARGS_2_COUNT_19,_FOR_EACH_3ARGS_2_COUNT_19,_FOR_EACH_3ARGS_2_COUNT_18,_FOR_EACH_3ARGS_2_COUNT_18,_FOR_EACH_3ARGS_2_COUNT_17,_FOR_EACH_3ARGS_2_COUNT_17,_FOR_EACH_3ARGS_2_COUNT_16,_FOR_EACH_3ARGS_2_COUNT_16,_FOR_EACH_3ARGS_2_COUNT_15,_FOR_EACH_3ARGS_2_COUNT_15,_FOR_EACH_3ARGS_2_COUNT_14,_FOR_EACH_3ARGS_2_COUNT_14,_FOR_EACH_3ARGS_2_COUNT_13,_FOR_EACH_3ARGS_2_COUNT_13,_FOR_EACH_3ARGS_2_COUNT_12,_FOR_EACH_3ARGS_2_COUNT_12,_FOR_EACH_3ARGS_2_COUNT_11,_FOR_EACH_3ARGS_2_COUNT_11,_FOR_EACH_3ARGS_2_COUNT_10,_FOR_EACH_3ARGS_2_COUNT_10,_FOR_EACH_3ARGS_2_COUNT_9,_FOR_EACH_3ARGS_2_COUNT_9,_FOR_EACH_3ARGS_2_COUNT_8,_FOR_EACH_3ARGS_2_COUNT_8,_FOR_EACH_3ARGS_2_COUNT_7,_FOR_EACH_3ARGS_2_COUNT_7,_FOR_EACH_3ARGS_2_COUNT_6,_FOR_EACH_3ARGS_2_COUNT_6,_FOR_EACH_3ARGS_2_COUNT_5,_FOR_EACH_3ARGS_2_COUNT_5,_FOR_EACH_3ARGS_2_COUNT_4,_FOR_EACH_3ARGS_2_COUNT_4,_FOR_EACH_3ARGS_2_COUNT_3,_FOR_EACH_3ARGS_2_COUNT_3,_FOR_EACH_3ARGS_2_COUNT_2,_FOR_EACH_3ARGS_2_COUNT_2,_FOR_EACH_3ARGS_2_COUNT_1,_FOR_EACH_3ARGS_2_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_3ARGS_2_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0,a1,a2: Static arguments that are passed into the action.
//   Loop: Each iteration processes 2 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_3ARGS_2_COUNT(what,a0,a1,a2,...) EXPAND(_FOR_EACH_3ARGS_2_COUNT_SELECT(__VA_ARGS__)(what,0,a0,a1,a2,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_3_1(what,x0,x1,x2) EXPAND(what(x0,x1,x2))
#define _FOR_EACH_3_2(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_1(what,__VA_ARGS__))
#define _FOR_EACH_3_3(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_2(what,__VA_ARGS__))
#define _FOR_EACH_3_4(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_3(what,__VA_ARGS__))
#define _FOR_EACH_3_5(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_4(what,__VA_ARGS__))
#define _FOR_EACH_3_6(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_5(what,__VA_ARGS__))
#define _FOR_EACH_3_7(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_6(what,__VA_ARGS__))
#define _FOR_EACH_3_8(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_7(what,__VA_ARGS__))
#define _FOR_EACH_3_9(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_8(what,__VA_ARGS__))
#define _FOR_EACH_3_10(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_9(what,__VA_ARGS__))
#define _FOR_EACH_3_11(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_10(what,__VA_ARGS__))
#define _FOR_EACH_3_12(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_11(what,__VA_ARGS__))
#define _FOR_EACH_3_13(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_12(what,__VA_ARGS__))
#define _FOR_EACH_3_14(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_13(what,__VA_ARGS__))
#define _FOR_EACH_3_15(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_14(what,__VA_ARGS__))
#define _FOR_EACH_3_16(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_15(what,__VA_ARGS__))
#define _FOR_EACH_3_17(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_16(what,__VA_ARGS__))
#define _FOR_EACH_3_18(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_17(what,__VA_ARGS__))
#define _FOR_EACH_3_19(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_18(what,__VA_ARGS__))
#define _FOR_EACH_3_20(what,x0,x1,x2,...) EXPAND(what(x0,x1,x2) _FOR_EACH_3_19(what,__VA_ARGS__))
#define _FOR_EACH_3_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_3_20,_FOR_EACH_3_20,_FOR_EACH_3_20,_FOR_EACH_3_19,_FOR_EACH_3_19,_FOR_EACH_3_19,_FOR_EACH_3_18,_FOR_EACH_3_18,_FOR_EACH_3_18,_FOR_EACH_3_17,_FOR_EACH_3_17,_FOR_EACH_3_17,_FOR_EACH_3_16,_FOR_EACH_3_16,_FOR_EACH_3_16,_FOR_EACH_3_15,_FOR_EACH_3_15,_FOR_EACH_3_15,_FOR_EACH_3_14,_FOR_EACH_3_14,_FOR_EACH_3_14,_FOR_EACH_3_13,_FOR_EACH_3_13,_FOR_EACH_3_13,_FOR_EACH_3_12,_FOR_EACH_3_12,_FOR_EACH_3_12,_FOR_EACH_3_11,_FOR_EACH_3_11,_FOR_EACH_3_11,_FOR_EACH_3_10,_FOR_EACH_3_10,_FOR_EACH_3_10,_FOR_EACH_3_9,_FOR_EACH_3_9,_FOR_EACH_3_9,_FOR_EACH_3_8,_FOR_EACH_3_8,_FOR_EACH_3_8,_FOR_EACH_3_7,_FOR_EACH_3_7,_FOR_EACH_3_7,_FOR_EACH_3_6,_FOR_EACH_3_6,_FOR_EACH_3_6,_FOR_EACH_3_5,_FOR_EACH_3_5,_FOR_EACH_3_5,_FOR_EACH_3_4,_FOR_EACH_3_4,_FOR_EACH_3_4,_FOR_EACH_3_3,_FOR_EACH_3_3,_FOR_EACH_3_3,_FOR_EACH_3_2,_FOR_EACH_3_2,_FOR_EACH_3_2,_FOR_EACH_3_1,_FOR_EACH_3_1,_FOR_EACH_3_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_3: Apply the action 'what' to a sequence of elements.
//   Loop: Each iteration processes 3 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_3(what,...) EXPAND(_FOR_EACH_3_SELECT(__VA_ARGS__)(what,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_3_COUNT_1(what,i,x0,x1,x2) EXPAND(what(i,x0,x1,x2))
#define _FOR_EACH_3_COUNT_2(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_1(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_3(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_2(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_4(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_3(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_5(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_4(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_6(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_5(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_7(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_6(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_8(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_7(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_9(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_8(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_10(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_9(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_11(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_10(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_12(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_11(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_13(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_12(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_14(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_13(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_15(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_14(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_16(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_15(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_17(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_16(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_18(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_17(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_19(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_18(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_20(what,i,x0,x1,x2,...) EXPAND(what(i,x0,x1,x2) _FOR_EACH_3_COUNT_19(what,i+1,__VA_ARGS__))
#define _FOR_EACH_3_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_3_COUNT_20,_FOR_EACH_3_COUNT_20,_FOR_EACH_3_COUNT_20,_FOR_EACH_3_COUNT_19,_FOR_EACH_3_COUNT_19,_FOR_EACH_3_COUNT_19,_FOR_EACH_3_COUNT_18,_FOR_EACH_3_COUNT_18,_FOR_EACH_3_COUNT_18,_FOR_EACH_3_COUNT_17,_FOR_EACH_3_COUNT_17,_FOR_EACH_3_COUNT_17,_FOR_EACH_3_COUNT_16,_FOR_EACH_3_COUNT_16,_FOR_EACH_3_COUNT_16,_FOR_EACH_3_COUNT_15,_FOR_EACH_3_COUNT_15,_FOR_EACH_3_COUNT_15,_FOR_EACH_3_COUNT_14,_FOR_EACH_3_COUNT_14,_FOR_EACH_3_COUNT_14,_FOR_EACH_3_COUNT_13,_FOR_EACH_3_COUNT_13,_FOR_EACH_3_COUNT_13,_FOR_EACH_3_COUNT_12,_FOR_EACH_3_COUNT_12,_FOR_EACH_3_COUNT_12,_FOR_EACH_3_COUNT_11,_FOR_EACH_3_COUNT_11,_FOR_EACH_3_COUNT_11,_FOR_EACH_3_COUNT_10,_FOR_EACH_3_COUNT_10,_FOR_EACH_3_COUNT_10,_FOR_EACH_3_COUNT_9,_FOR_EACH_3_COUNT_9,_FOR_EACH_3_COUNT_9,_FOR_EACH_3_COUNT_8,_FOR_EACH_3_COUNT_8,_FOR_EACH_3_COUNT_8,_FOR_EACH_3_COUNT_7,_FOR_EACH_3_COUNT_7,_FOR_EACH_3_COUNT_7,_FOR_EACH_3_COUNT_6,_FOR_EACH_3_COUNT_6,_FOR_EACH_3_COUNT_6,_FOR_EACH_3_COUNT_5,_FOR_EACH_3_COUNT_5,_FOR_EACH_3_COUNT_5,_FOR_EACH_3_COUNT_4,_FOR_EACH_3_COUNT_4,_FOR_EACH_3_COUNT_4,_FOR_EACH_3_COUNT_3,_FOR_EACH_3_COUNT_3,_FOR_EACH_3_COUNT_3,_FOR_EACH_3_COUNT_2,_FOR_EACH_3_COUNT_2,_FOR_EACH_3_COUNT_2,_FOR_EACH_3_COUNT_1,_FOR_EACH_3_COUNT_1,_FOR_EACH_3_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_3_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   Loop: Each iteration processes 3 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_3_COUNT(what,...) EXPAND(_FOR_EACH_3_COUNT_SELECT(__VA_ARGS__)(what,0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_1ARG_3_1(what,a0,x0,x1,x2) EXPAND(what(a0,x0,x1,x2))
#define _FOR_EACH_1ARG_3_2(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_1(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_3(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_2(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_4(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_3(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_5(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_4(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_6(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_5(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_7(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_6(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_8(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_7(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_9(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_8(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_10(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_9(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_11(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_10(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_12(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_11(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_13(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_12(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_14(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_13(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_15(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_14(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_16(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_15(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_17(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_16(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_18(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_17(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_19(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_18(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_20(what,a0,x0,x1,x2,...) EXPAND(what(a0,x0,x1,x2) _FOR_EACH_1ARG_3_19(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_1ARG_3_20,_FOR_EACH_1ARG_3_20,_FOR_EACH_1ARG_3_20,_FOR_EACH_1ARG_3_19,_FOR_EACH_1ARG_3_19,_FOR_EACH_1ARG_3_19,_FOR_EACH_1ARG_3_18,_FOR_EACH_1ARG_3_18,_FOR_EACH_1ARG_3_18,_FOR_EACH_1ARG_3_17,_FOR_EACH_1ARG_3_17,_FOR_EACH_1ARG_3_17,_FOR_EACH_1ARG_3_16,_FOR_EACH_1ARG_3_16,_FOR_EACH_1ARG_3_16,_FOR_EACH_1ARG_3_15,_FOR_EACH_1ARG_3_15,_FOR_EACH_1ARG_3_15,_FOR_EACH_1ARG_3_14,_FOR_EACH_1ARG_3_14,_FOR_EACH_1ARG_3_14,_FOR_EACH_1ARG_3_13,_FOR_EACH_1ARG_3_13,_FOR_EACH_1ARG_3_13,_FOR_EACH_1ARG_3_12,_FOR_EACH_1ARG_3_12,_FOR_EACH_1ARG_3_12,_FOR_EACH_1ARG_3_11,_FOR_EACH_1ARG_3_11,_FOR_EACH_1ARG_3_11,_FOR_EACH_1ARG_3_10,_FOR_EACH_1ARG_3_10,_FOR_EACH_1ARG_3_10,_FOR_EACH_1ARG_3_9,_FOR_EACH_1ARG_3_9,_FOR_EACH_1ARG_3_9,_FOR_EACH_1ARG_3_8,_FOR_EACH_1ARG_3_8,_FOR_EACH_1ARG_3_8,_FOR_EACH_1ARG_3_7,_FOR_EACH_1ARG_3_7,_FOR_EACH_1ARG_3_7,_FOR_EACH_1ARG_3_6,_FOR_EACH_1ARG_3_6,_FOR_EACH_1ARG_3_6,_FOR_EACH_1ARG_3_5,_FOR_EACH_1ARG_3_5,_FOR_EACH_1ARG_3_5,_FOR_EACH_1ARG_3_4,_FOR_EACH_1ARG_3_4,_FOR_EACH_1ARG_3_4,_FOR_EACH_1ARG_3_3,_FOR_EACH_1ARG_3_3,_FOR_EACH_1ARG_3_3,_FOR_EACH_1ARG_3_2,_FOR_EACH_1ARG_3_2,_FOR_EACH_1ARG_3_2,_FOR_EACH_1ARG_3_1,_FOR_EACH_1ARG_3_1,_FOR_EACH_1ARG_3_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_1ARG_3: Apply the action 'what' to a sequence of elements.
//   a0: Static arguments that are passed into the action.
//   Loop: Each iteration processes 3 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_1ARG_3(what,a0,...) EXPAND(_FOR_EACH_1ARG_3_SELECT(__VA_ARGS__)(what,a0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_1ARG_3_COUNT_1(what,i,a0,x0,x1,x2) EXPAND(what(i,a0,x0,x1,x2))
#define _FOR_EACH_1ARG_3_COUNT_2(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_1(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_3(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_2(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_4(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_3(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_5(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_4(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_6(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_5(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_7(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_6(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_8(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_7(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_9(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_8(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_10(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_9(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_11(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_10(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_12(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_11(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_13(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_12(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_14(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_13(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_15(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_14(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_16(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_15(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_17(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_16(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_18(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_17(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_19(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_18(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_20(what,i,a0,x0,x1,x2,...) EXPAND(what(i,a0,x0,x1,x2) _FOR_EACH_1ARG_3_COUNT_19(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_3_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_1ARG_3_COUNT_20,_FOR_EACH_1ARG_3_COUNT_20,_FOR_EACH_1ARG_3_COUNT_20,_FOR_EACH_1ARG_3_COUNT_19,_FOR_EACH_1ARG_3_COUNT_19,_FOR_EACH_1ARG_3_COUNT_19,_FOR_EACH_1ARG_3_COUNT_18,_FOR_EACH_1ARG_3_COUNT_18,_FOR_EACH_1ARG_3_COUNT_18,_FOR_EACH_1ARG_3_COUNT_17,_FOR_EACH_1ARG_3_COUNT_17,_FOR_EACH_1ARG_3_COUNT_17,_FOR_EACH_1ARG_3_COUNT_16,_FOR_EACH_1ARG_3_COUNT_16,_FOR_EACH_1ARG_3_COUNT_16,_FOR_EACH_1ARG_3_COUNT_15,_FOR_EACH_1ARG_3_COUNT_15,_FOR_EACH_1ARG_3_COUNT_15,_FOR_EACH_1ARG_3_COUNT_14,_FOR_EACH_1ARG_3_COUNT_14,_FOR_EACH_1ARG_3_COUNT_14,_FOR_EACH_1ARG_3_COUNT_13,_FOR_EACH_1ARG_3_COUNT_13,_FOR_EACH_1ARG_3_COUNT_13,_FOR_EACH_1ARG_3_COUNT_12,_FOR_EACH_1ARG_3_COUNT_12,_FOR_EACH_1ARG_3_COUNT_12,_FOR_EACH_1ARG_3_COUNT_11,_FOR_EACH_1ARG_3_COUNT_11,_FOR_EACH_1ARG_3_COUNT_11,_FOR_EACH_1ARG_3_COUNT_10,_FOR_EACH_1ARG_3_COUNT_10,_FOR_EACH_1ARG_3_COUNT_10,_FOR_EACH_1ARG_3_COUNT_9,_FOR_EACH_1ARG_3_COUNT_9,_FOR_EACH_1ARG_3_COUNT_9,_FOR_EACH_1ARG_3_COUNT_8,_FOR_EACH_1ARG_3_COUNT_8,_FOR_EACH_1ARG_3_COUNT_8,_FOR_EACH_1ARG_3_COUNT_7,_FOR_EACH_1ARG_3_COUNT_7,_FOR_EACH_1ARG_3_COUNT_7,_FOR_EACH_1ARG_3_COUNT_6,_FOR_EACH_1ARG_3_COUNT_6,_FOR_EACH_1ARG_3_COUNT_6,_FOR_EACH_1ARG_3_COUNT_5,_FOR_EACH_1ARG_3_COUNT_5,_FOR_EACH_1ARG_3_COUNT_5,_FOR_EACH_1ARG_3_COUNT_4,_FOR_EACH_1ARG_3_COUNT_4,_FOR_EACH_1ARG_3_COUNT_4,_FOR_EACH_1ARG_3_COUNT_3,_FOR_EACH_1ARG_3_COUNT_3,_FOR_EACH_1ARG_3_COUNT_3,_FOR_EACH_1ARG_3_COUNT_2,_FOR_EACH_1ARG_3_COUNT_2,_FOR_EACH_1ARG_3_COUNT_2,_FOR_EACH_1ARG_3_COUNT_1,_FOR_EACH_1ARG_3_COUNT_1,_FOR_EACH_1ARG_3_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_1ARG_3_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0: Static arguments that are passed into the action.
//   Loop: Each iteration processes 3 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_1ARG_3_COUNT(what,a0,...) EXPAND(_FOR_EACH_1ARG_3_COUNT_SELECT(__VA_ARGS__)(what,0,a0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_2ARGS_3_1(what,a0,a1,x0,x1,x2) EXPAND(what(a0,a1,x0,x1,x2))
#define _FOR_EACH_2ARGS_3_2(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_1(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_3(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_2(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_4(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_3(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_5(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_4(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_6(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_5(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_7(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_6(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_8(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_7(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_9(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_8(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_10(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_9(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_11(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_10(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_12(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_11(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_13(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_12(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_14(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_13(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_15(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_14(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_16(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_15(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_17(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_16(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_18(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_17(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_19(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_18(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_20(what,a0,a1,x0,x1,x2,...) EXPAND(what(a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_19(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_2ARGS_3_20,_FOR_EACH_2ARGS_3_20,_FOR_EACH_2ARGS_3_20,_FOR_EACH_2ARGS_3_19,_FOR_EACH_2ARGS_3_19,_FOR_EACH_2ARGS_3_19,_FOR_EACH_2ARGS_3_18,_FOR_EACH_2ARGS_3_18,_FOR_EACH_2ARGS_3_18,_FOR_EACH_2ARGS_3_17,_FOR_EACH_2ARGS_3_17,_FOR_EACH_2ARGS_3_17,_FOR_EACH_2ARGS_3_16,_FOR_EACH_2ARGS_3_16,_FOR_EACH_2ARGS_3_16,_FOR_EACH_2ARGS_3_15,_FOR_EACH_2ARGS_3_15,_FOR_EACH_2ARGS_3_15,_FOR_EACH_2ARGS_3_14,_FOR_EACH_2ARGS_3_14,_FOR_EACH_2ARGS_3_14,_FOR_EACH_2ARGS_3_13,_FOR_EACH_2ARGS_3_13,_FOR_EACH_2ARGS_3_13,_FOR_EACH_2ARGS_3_12,_FOR_EACH_2ARGS_3_12,_FOR_EACH_2ARGS_3_12,_FOR_EACH_2ARGS_3_11,_FOR_EACH_2ARGS_3_11,_FOR_EACH_2ARGS_3_11,_FOR_EACH_2ARGS_3_10,_FOR_EACH_2ARGS_3_10,_FOR_EACH_2ARGS_3_10,_FOR_EACH_2ARGS_3_9,_FOR_EACH_2ARGS_3_9,_FOR_EACH_2ARGS_3_9,_FOR_EACH_2ARGS_3_8,_FOR_EACH_2ARGS_3_8,_FOR_EACH_2ARGS_3_8,_FOR_EACH_2ARGS_3_7,_FOR_EACH_2ARGS_3_7,_FOR_EACH_2ARGS_3_7,_FOR_EACH_2ARGS_3_6,_FOR_EACH_2ARGS_3_6,_FOR_EACH_2ARGS_3_6,_FOR_EACH_2ARGS_3_5,_FOR_EACH_2ARGS_3_5,_FOR_EACH_2ARGS_3_5,_FOR_EACH_2ARGS_3_4,_FOR_EACH_2ARGS_3_4,_FOR_EACH_2ARGS_3_4,_FOR_EACH_2ARGS_3_3,_FOR_EACH_2ARGS_3_3,_FOR_EACH_2ARGS_3_3,_FOR_EACH_2ARGS_3_2,_FOR_EACH_2ARGS_3_2,_FOR_EACH_2ARGS_3_2,_FOR_EACH_2ARGS_3_1,_FOR_EACH_2ARGS_3_1,_FOR_EACH_2ARGS_3_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_2ARGS_3: Apply the action 'what' to a sequence of elements.
//   a0,a1: Static arguments that are passed into the action.
//   Loop: Each iteration processes 3 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_2ARGS_3(what,a0,a1,...) EXPAND(_FOR_EACH_2ARGS_3_SELECT(__VA_ARGS__)(what,a0,a1,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_2ARGS_3_COUNT_1(what,i,a0,a1,x0,x1,x2) EXPAND(what(i,a0,a1,x0,x1,x2))
#define _FOR_EACH_2ARGS_3_COUNT_2(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_1(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_3(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_2(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_4(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_3(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_5(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_4(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_6(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_5(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_7(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_6(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_8(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_7(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_9(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_8(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_10(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_9(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_11(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_10(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_12(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_11(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_13(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_12(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_14(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_13(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_15(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_14(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_16(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_15(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_17(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_16(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_18(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_17(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_19(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_18(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_20(what,i,a0,a1,x0,x1,x2,...) EXPAND(what(i,a0,a1,x0,x1,x2) _FOR_EACH_2ARGS_3_COUNT_19(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_3_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_2ARGS_3_COUNT_20,_FOR_EACH_2ARGS_3_COUNT_20,_FOR_EACH_2ARGS_3_COUNT_20,_FOR_EACH_2ARGS_3_COUNT_19,_FOR_EACH_2ARGS_3_COUNT_19,_FOR_EACH_2ARGS_3_COUNT_19,_FOR_EACH_2ARGS_3_COUNT_18,_FOR_EACH_2ARGS_3_COUNT_18,_FOR_EACH_2ARGS_3_COUNT_18,_FOR_EACH_2ARGS_3_COUNT_17,_FOR_EACH_2ARGS_3_COUNT_17,_FOR_EACH_2ARGS_3_COUNT_17,_FOR_EACH_2ARGS_3_COUNT_16,_FOR_EACH_2ARGS_3_COUNT_16,_FOR_EACH_2ARGS_3_COUNT_16,_FOR_EACH_2ARGS_3_COUNT_15,_FOR_EACH_2ARGS_3_COUNT_15,_FOR_EACH_2ARGS_3_COUNT_15,_FOR_EACH_2ARGS_3_COUNT_14,_FOR_EACH_2ARGS_3_COUNT_14,_FOR_EACH_2ARGS_3_COUNT_14,_FOR_EACH_2ARGS_3_COUNT_13,_FOR_EACH_2ARGS_3_COUNT_13,_FOR_EACH_2ARGS_3_COUNT_13,_FOR_EACH_2ARGS_3_COUNT_12,_FOR_EACH_2ARGS_3_COUNT_12,_FOR_EACH_2ARGS_3_COUNT_12,_FOR_EACH_2ARGS_3_COUNT_11,_FOR_EACH_2ARGS_3_COUNT_11,_FOR_EACH_2ARGS_3_COUNT_11,_FOR_EACH_2ARGS_3_COUNT_10,_FOR_EACH_2ARGS_3_COUNT_10,_FOR_EACH_2ARGS_3_COUNT_10,_FOR_EACH_2ARGS_3_COUNT_9,_FOR_EACH_2ARGS_3_COUNT_9,_FOR_EACH_2ARGS_3_COUNT_9,_FOR_EACH_2ARGS_3_COUNT_8,_FOR_EACH_2ARGS_3_COUNT_8,_FOR_EACH_2ARGS_3_COUNT_8,_FOR_EACH_2ARGS_3_COUNT_7,_FOR_EACH_2ARGS_3_COUNT_7,_FOR_EACH_2ARGS_3_COUNT_7,_FOR_EACH_2ARGS_3_COUNT_6,_FOR_EACH_2ARGS_3_COUNT_6,_FOR_EACH_2ARGS_3_COUNT_6,_FOR_EACH_2ARGS_3_COUNT_5,_FOR_EACH_2ARGS_3_COUNT_5,_FOR_EACH_2ARGS_3_COUNT_5,_FOR_EACH_2ARGS_3_COUNT_4,_FOR_EACH_2ARGS_3_COUNT_4,_FOR_EACH_2ARGS_3_COUNT_4,_FOR_EACH_2ARGS_3_COUNT_3,_FOR_EACH_2ARGS_3_COUNT_3,_FOR_EACH_2ARGS_3_COUNT_3,_FOR_EACH_2ARGS_3_COUNT_2,_FOR_EACH_2ARGS_3_COUNT_2,_FOR_EACH_2ARGS_3_COUNT_2,_FOR_EACH_2ARGS_3_COUNT_1,_FOR_EACH_2ARGS_3_COUNT_1,_FOR_EACH_2ARGS_3_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_2ARGS_3_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0,a1: Static arguments that are passed into the action.
//   Loop: Each iteration processes 3 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_2ARGS_3_COUNT(what,a0,a1,...) EXPAND(_FOR_EACH_2ARGS_3_COUNT_SELECT(__VA_ARGS__)(what,0,a0,a1,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_3ARGS_3_1(what,a0,a1,a2,x0,x1,x2) EXPAND(what(a0,a1,a2,x0,x1,x2))
#define _FOR_EACH_3ARGS_3_2(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_1(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_3(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_2(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_4(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_3(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_5(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_4(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_6(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_5(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_7(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_6(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_8(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_7(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_9(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_8(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_10(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_9(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_11(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_10(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_12(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_11(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_13(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_12(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_14(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_13(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_15(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_14(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_16(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_15(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_17(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_16(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_18(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_17(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_19(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_18(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_20(what,a0,a1,a2,x0,x1,x2,...) EXPAND(what(a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_19(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_3ARGS_3_20,_FOR_EACH_3ARGS_3_20,_FOR_EACH_3ARGS_3_20,_FOR_EACH_3ARGS_3_19,_FOR_EACH_3ARGS_3_19,_FOR_EACH_3ARGS_3_19,_FOR_EACH_3ARGS_3_18,_FOR_EACH_3ARGS_3_18,_FOR_EACH_3ARGS_3_18,_FOR_EACH_3ARGS_3_17,_FOR_EACH_3ARGS_3_17,_FOR_EACH_3ARGS_3_17,_FOR_EACH_3ARGS_3_16,_FOR_EACH_3ARGS_3_16,_FOR_EACH_3ARGS_3_16,_FOR_EACH_3ARGS_3_15,_FOR_EACH_3ARGS_3_15,_FOR_EACH_3ARGS_3_15,_FOR_EACH_3ARGS_3_14,_FOR_EACH_3ARGS_3_14,_FOR_EACH_3ARGS_3_14,_FOR_EACH_3ARGS_3_13,_FOR_EACH_3ARGS_3_13,_FOR_EACH_3ARGS_3_13,_FOR_EACH_3ARGS_3_12,_FOR_EACH_3ARGS_3_12,_FOR_EACH_3ARGS_3_12,_FOR_EACH_3ARGS_3_11,_FOR_EACH_3ARGS_3_11,_FOR_EACH_3ARGS_3_11,_FOR_EACH_3ARGS_3_10,_FOR_EACH_3ARGS_3_10,_FOR_EACH_3ARGS_3_10,_FOR_EACH_3ARGS_3_9,_FOR_EACH_3ARGS_3_9,_FOR_EACH_3ARGS_3_9,_FOR_EACH_3ARGS_3_8,_FOR_EACH_3ARGS_3_8,_FOR_EACH_3ARGS_3_8,_FOR_EACH_3ARGS_3_7,_FOR_EACH_3ARGS_3_7,_FOR_EACH_3ARGS_3_7,_FOR_EACH_3ARGS_3_6,_FOR_EACH_3ARGS_3_6,_FOR_EACH_3ARGS_3_6,_FOR_EACH_3ARGS_3_5,_FOR_EACH_3ARGS_3_5,_FOR_EACH_3ARGS_3_5,_FOR_EACH_3ARGS_3_4,_FOR_EACH_3ARGS_3_4,_FOR_EACH_3ARGS_3_4,_FOR_EACH_3ARGS_3_3,_FOR_EACH_3ARGS_3_3,_FOR_EACH_3ARGS_3_3,_FOR_EACH_3ARGS_3_2,_FOR_EACH_3ARGS_3_2,_FOR_EACH_3ARGS_3_2,_FOR_EACH_3ARGS_3_1,_FOR_EACH_3ARGS_3_1,_FOR_EACH_3ARGS_3_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_3ARGS_3: Apply the action 'what' to a sequence of elements.
//   a0,a1,a2: Static arguments that are passed into the action.
//   Loop: Each iteration processes 3 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_3ARGS_3(what,a0,a1,a2,...) EXPAND(_FOR_EACH_3ARGS_3_SELECT(__VA_ARGS__)(what,a0,a1,a2,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_3ARGS_3_COUNT_1(what,i,a0,a1,a2,x0,x1,x2) EXPAND(what(i,a0,a1,a2,x0,x1,x2))
#define _FOR_EACH_3ARGS_3_COUNT_2(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_1(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_3(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_2(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_4(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_3(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_5(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_4(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_6(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_5(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_7(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_6(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_8(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_7(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_9(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_8(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_10(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_9(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_11(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_10(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_12(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_11(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_13(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_12(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_14(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_13(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_15(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_14(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_16(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_15(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_17(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_16(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_18(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_17(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_19(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_18(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_20(what,i,a0,a1,a2,x0,x1,x2,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2) _FOR_EACH_3ARGS_3_COUNT_19(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_3_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_3ARGS_3_COUNT_20,_FOR_EACH_3ARGS_3_COUNT_20,_FOR_EACH_3ARGS_3_COUNT_20,_FOR_EACH_3ARGS_3_COUNT_19,_FOR_EACH_3ARGS_3_COUNT_19,_FOR_EACH_3ARGS_3_COUNT_19,_FOR_EACH_3ARGS_3_COUNT_18,_FOR_EACH_3ARGS_3_COUNT_18,_FOR_EACH_3ARGS_3_COUNT_18,_FOR_EACH_3ARGS_3_COUNT_17,_FOR_EACH_3ARGS_3_COUNT_17,_FOR_EACH_3ARGS_3_COUNT_17,_FOR_EACH_3ARGS_3_COUNT_16,_FOR_EACH_3ARGS_3_COUNT_16,_FOR_EACH_3ARGS_3_COUNT_16,_FOR_EACH_3ARGS_3_COUNT_15,_FOR_EACH_3ARGS_3_COUNT_15,_FOR_EACH_3ARGS_3_COUNT_15,_FOR_EACH_3ARGS_3_COUNT_14,_FOR_EACH_3ARGS_3_COUNT_14,_FOR_EACH_3ARGS_3_COUNT_14,_FOR_EACH_3ARGS_3_COUNT_13,_FOR_EACH_3ARGS_3_COUNT_13,_FOR_EACH_3ARGS_3_COUNT_13,_FOR_EACH_3ARGS_3_COUNT_12,_FOR_EACH_3ARGS_3_COUNT_12,_FOR_EACH_3ARGS_3_COUNT_12,_FOR_EACH_3ARGS_3_COUNT_11,_FOR_EACH_3ARGS_3_COUNT_11,_FOR_EACH_3ARGS_3_COUNT_11,_FOR_EACH_3ARGS_3_COUNT_10,_FOR_EACH_3ARGS_3_COUNT_10,_FOR_EACH_3ARGS_3_COUNT_10,_FOR_EACH_3ARGS_3_COUNT_9,_FOR_EACH_3ARGS_3_COUNT_9,_FOR_EACH_3ARGS_3_COUNT_9,_FOR_EACH_3ARGS_3_COUNT_8,_FOR_EACH_3ARGS_3_COUNT_8,_FOR_EACH_3ARGS_3_COUNT_8,_FOR_EACH_3ARGS_3_COUNT_7,_FOR_EACH_3ARGS_3_COUNT_7,_FOR_EACH_3ARGS_3_COUNT_7,_FOR_EACH_3ARGS_3_COUNT_6,_FOR_EACH_3ARGS_3_COUNT_6,_FOR_EACH_3ARGS_3_COUNT_6,_FOR_EACH_3ARGS_3_COUNT_5,_FOR_EACH_3ARGS_3_COUNT_5,_FOR_EACH_3ARGS_3_COUNT_5,_FOR_EACH_3ARGS_3_COUNT_4,_FOR_EACH_3ARGS_3_COUNT_4,_FOR_EACH_3ARGS_3_COUNT_4,_FOR_EACH_3ARGS_3_COUNT_3,_FOR_EACH_3ARGS_3_COUNT_3,_FOR_EACH_3ARGS_3_COUNT_3,_FOR_EACH_3ARGS_3_COUNT_2,_FOR_EACH_3ARGS_3_COUNT_2,_FOR_EACH_3ARGS_3_COUNT_2,_FOR_EACH_3ARGS_3_COUNT_1,_FOR_EACH_3ARGS_3_COUNT_1,_FOR_EACH_3ARGS_3_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_3ARGS_3_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0,a1,a2: Static arguments that are passed into the action.
//   Loop: Each iteration processes 3 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_3ARGS_3_COUNT(what,a0,a1,a2,...) EXPAND(_FOR_EACH_3ARGS_3_COUNT_SELECT(__VA_ARGS__)(what,0,a0,a1,a2,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_4_1(what,x0,x1,x2,x3) EXPAND(what(x0,x1,x2,x3))
#define _FOR_EACH_4_2(what,x0,x1,x2,x3,...) EXPAND(what(x0,x1,x2,x3) _FOR_EACH_4_1(what,__VA_ARGS__))
#define _FOR_EACH_4_3(what,x0,x1,x2,x3,...) EXPAND(what(x0,x1,x2,x3) _FOR_EACH_4_2(what,__VA_ARGS__))
#define _FOR_EACH_4_4(what,x0,x1,x2,x3,...) EXPAND(what(x0,x1,x2,x3) _FOR_EACH_4_3(what,__VA_ARGS__))
#define _FOR_EACH_4_5(what,x0,x1,x2,x3,...) EXPAND(what(x0,x1,x2,x3) _FOR_EACH_4_4(what,__VA_ARGS__))
#define _FOR_EACH_4_6(what,x0,x1,x2,x3,...) EXPAND(what(x0,x1,x2,x3) _FOR_EACH_4_5(what,__VA_ARGS__))
#define _FOR_EACH_4_7(what,x0,x1,x2,x3,...) EXPAND(what(x0,x1,x2,x3) _FOR_EACH_4_6(what,__VA_ARGS__))
#define _FOR_EACH_4_8(what,x0,x1,x2,x3,...) EXPAND(what(x0,x1,x2,x3) _FOR_EACH_4_7(what,__VA_ARGS__))
#define _FOR_EACH_4_9(what,x0,x1,x2,x3,...) EXPAND(what(x0,x1,x2,x3) _FOR_EACH_4_8(what,__VA_ARGS__))
#define _FOR_EACH_4_10(what,x0,x1,x2,x3,...) EXPAND(what(x0,x1,x2,x3) _FOR_EACH_4_9(what,__VA_ARGS__))
#define _FOR_EACH_4_11(what,x0,x1,x2,x3,...) EXPAND(what(x0,x1,x2,x3) _FOR_EACH_4_10(what,__VA_ARGS__))
#define _FOR_EACH_4_12(what,x0,x1,x2,x3,...) EXPAND(what(x0,x1,x2,x3) _FOR_EACH_4_11(what,__VA_ARGS__))
#define _FOR_EACH_4_13(what,x0,x1,x2,x3,...) EXPAND(what(x0,x1,x2,x3) _FOR_EACH_4_12(what,__VA_ARGS__))
#define _FOR_EACH_4_14(what,x0,x1,x2,x3,...) EXPAND(what(x0,x1,x2,x3) _FOR_EACH_4_13(what,__VA_ARGS__))
#define _FOR_EACH_4_15(what,x0,x1,x2,x3,...) EXPAND(what(x0,x1,x2,x3) _FOR_EACH_4_14(what,__VA_ARGS__))
#define _FOR_EACH_4_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_4_15,_FOR_EACH_4_15,_FOR_EACH_4_15,_FOR_EACH_4_15,_FOR_EACH_4_14,_FOR_EACH_4_14,_FOR_EACH_4_14,_FOR_EACH_4_14,_FOR_EACH_4_13,_FOR_EACH_4_13,_FOR_EACH_4_13,_FOR_EACH_4_13,_FOR_EACH_4_12,_FOR_EACH_4_12,_FOR_EACH_4_12,_FOR_EACH_4_12,_FOR_EACH_4_11,_FOR_EACH_4_11,_FOR_EACH_4_11,_FOR_EACH_4_11,_FOR_EACH_4_10,_FOR_EACH_4_10,_FOR_EACH_4_10,_FOR_EACH_4_10,_FOR_EACH_4_9,_FOR_EACH_4_9,_FOR_EACH_4_9,_FOR_EACH_4_9,_FOR_EACH_4_8,_FOR_EACH_4_8,_FOR_EACH_4_8,_FOR_EACH_4_8,_FOR_EACH_4_7,_FOR_EACH_4_7,_FOR_EACH_4_7,_FOR_EACH_4_7,_FOR_EACH_4_6,_FOR_EACH_4_6,_FOR_EACH_4_6,_FOR_EACH_4_6,_FOR_EACH_4_5,_FOR_EACH_4_5,_FOR_EACH_4_5,_FOR_EACH_4_5,_FOR_EACH_4_4,_FOR_EACH_4_4,_FOR_EACH_4_4,_FOR_EACH_4_4,_FOR_EACH_4_3,_FOR_EACH_4_3,_FOR_EACH_4_3,_FOR_EACH_4_3,_FOR_EACH_4_2,_FOR_EACH_4_2,_FOR_EACH_4_2,_FOR_EACH_4_2,_FOR_EACH_4_1,_FOR_EACH_4_1,_FOR_EACH_4_1,_FOR_EACH_4_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_4: Apply the action 'what' to a sequence of elements.
//   Loop: Each iteration processes 4 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_4(what,...) EXPAND(_FOR_EACH_4_SELECT(__VA_ARGS__)(what,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_4_COUNT_1(what,i,x0,x1,x2,x3) EXPAND(what(i,x0,x1,x2,x3))
#define _FOR_EACH_4_COUNT_2(what,i,x0,x1,x2,x3,...) EXPAND(what(i,x0,x1,x2,x3) _FOR_EACH_4_COUNT_1(what,i+1,__VA_ARGS__))
#define _FOR_EACH_4_COUNT_3(what,i,x0,x1,x2,x3,...) EXPAND(what(i,x0,x1,x2,x3) _FOR_EACH_4_COUNT_2(what,i+1,__VA_ARGS__))
#define _FOR_EACH_4_COUNT_4(what,i,x0,x1,x2,x3,...) EXPAND(what(i,x0,x1,x2,x3) _FOR_EACH_4_COUNT_3(what,i+1,__VA_ARGS__))
#define _FOR_EACH_4_COUNT_5(what,i,x0,x1,x2,x3,...) EXPAND(what(i,x0,x1,x2,x3) _FOR_EACH_4_COUNT_4(what,i+1,__VA_ARGS__))
#define _FOR_EACH_4_COUNT_6(what,i,x0,x1,x2,x3,...) EXPAND(what(i,x0,x1,x2,x3) _FOR_EACH_4_COUNT_5(what,i+1,__VA_ARGS__))
#define _FOR_EACH_4_COUNT_7(what,i,x0,x1,x2,x3,...) EXPAND(what(i,x0,x1,x2,x3) _FOR_EACH_4_COUNT_6(what,i+1,__VA_ARGS__))
#define _FOR_EACH_4_COUNT_8(what,i,x0,x1,x2,x3,...) EXPAND(what(i,x0,x1,x2,x3) _FOR_EACH_4_COUNT_7(what,i+1,__VA_ARGS__))
#define _FOR_EACH_4_COUNT_9(what,i,x0,x1,x2,x3,...) EXPAND(what(i,x0,x1,x2,x3) _FOR_EACH_4_COUNT_8(what,i+1,__VA_ARGS__))
#define _FOR_EACH_4_COUNT_10(what,i,x0,x1,x2,x3,...) EXPAND(what(i,x0,x1,x2,x3) _FOR_EACH_4_COUNT_9(what,i+1,__VA_ARGS__))
#define _FOR_EACH_4_COUNT_11(what,i,x0,x1,x2,x3,...) EXPAND(what(i,x0,x1,x2,x3) _FOR_EACH_4_COUNT_10(what,i+1,__VA_ARGS__))
#define _FOR_EACH_4_COUNT_12(what,i,x0,x1,x2,x3,...) EXPAND(what(i,x0,x1,x2,x3) _FOR_EACH_4_COUNT_11(what,i+1,__VA_ARGS__))
#define _FOR_EACH_4_COUNT_13(what,i,x0,x1,x2,x3,...) EXPAND(what(i,x0,x1,x2,x3) _FOR_EACH_4_COUNT_12(what,i+1,__VA_ARGS__))
#define _FOR_EACH_4_COUNT_14(what,i,x0,x1,x2,x3,...) EXPAND(what(i,x0,x1,x2,x3) _FOR_EACH_4_COUNT_13(what,i+1,__VA_ARGS__))
#define _FOR_EACH_4_COUNT_15(what,i,x0,x1,x2,x3,...) EXPAND(what(i,x0,x1,x2,x3) _FOR_EACH_4_COUNT_14(what,i+1,__VA_ARGS__))
#define _FOR_EACH_4_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_4_COUNT_15,_FOR_EACH_4_COUNT_15,_FOR_EACH_4_COUNT_15,_FOR_EACH_4_COUNT_15,_FOR_EACH_4_COUNT_14,_FOR_EACH_4_COUNT_14,_FOR_EACH_4_COUNT_14,_FOR_EACH_4_COUNT_14,_FOR_EACH_4_COUNT_13,_FOR_EACH_4_COUNT_13,_FOR_EACH_4_COUNT_13,_FOR_EACH_4_COUNT_13,_FOR_EACH_4_COUNT_12,_FOR_EACH_4_COUNT_12,_FOR_EACH_4_COUNT_12,_FOR_EACH_4_COUNT_12,_FOR_EACH_4_COUNT_11,_FOR_EACH_4_COUNT_11,_FOR_EACH_4_COUNT_11,_FOR_EACH_4_COUNT_11,_FOR_EACH_4_COUNT_10,_FOR_EACH_4_COUNT_10,_FOR_EACH_4_COUNT_10,_FOR_EACH_4_COUNT_10,_FOR_EACH_4_COUNT_9,_FOR_EACH_4_COUNT_9,_FOR_EACH_4_COUNT_9,_FOR_EACH_4_COUNT_9,_FOR_EACH_4_COUNT_8,_FOR_EACH_4_COUNT_8,_FOR_EACH_4_COUNT_8,_FOR_EACH_4_COUNT_8,_FOR_EACH_4_COUNT_7,_FOR_EACH_4_COUNT_7,_FOR_EACH_4_COUNT_7,_FOR_EACH_4_COUNT_7,_FOR_EACH_4_COUNT_6,_FOR_EACH_4_COUNT_6,_FOR_EACH_4_COUNT_6,_FOR_EACH_4_COUNT_6,_FOR_EACH_4_COUNT_5,_FOR_EACH_4_COUNT_5,_FOR_EACH_4_COUNT_5,_FOR_EACH_4_COUNT_5,_FOR_EACH_4_COUNT_4,_FOR_EACH_4_COUNT_4,_FOR_EACH_4_COUNT_4,_FOR_EACH_4_COUNT_4,_FOR_EACH_4_COUNT_3,_FOR_EACH_4_COUNT_3,_FOR_EACH_4_COUNT_3,_FOR_EACH_4_COUNT_3,_FOR_EACH_4_COUNT_2,_FOR_EACH_4_COUNT_2,_FOR_EACH_4_COUNT_2,_FOR_EACH_4_COUNT_2,_FOR_EACH_4_COUNT_1,_FOR_EACH_4_COUNT_1,_FOR_EACH_4_COUNT_1,_FOR_EACH_4_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_4_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   Loop: Each iteration processes 4 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_4_COUNT(what,...) EXPAND(_FOR_EACH_4_COUNT_SELECT(__VA_ARGS__)(what,0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_1ARG_4_1(what,a0,x0,x1,x2,x3) EXPAND(what(a0,x0,x1,x2,x3))
#define _FOR_EACH_1ARG_4_2(what,a0,x0,x1,x2,x3,...) EXPAND(what(a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_1(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_3(what,a0,x0,x1,x2,x3,...) EXPAND(what(a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_2(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_4(what,a0,x0,x1,x2,x3,...) EXPAND(what(a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_3(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_5(what,a0,x0,x1,x2,x3,...) EXPAND(what(a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_4(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_6(what,a0,x0,x1,x2,x3,...) EXPAND(what(a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_5(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_7(what,a0,x0,x1,x2,x3,...) EXPAND(what(a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_6(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_8(what,a0,x0,x1,x2,x3,...) EXPAND(what(a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_7(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_9(what,a0,x0,x1,x2,x3,...) EXPAND(what(a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_8(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_10(what,a0,x0,x1,x2,x3,...) EXPAND(what(a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_9(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_11(what,a0,x0,x1,x2,x3,...) EXPAND(what(a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_10(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_12(what,a0,x0,x1,x2,x3,...) EXPAND(what(a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_11(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_13(what,a0,x0,x1,x2,x3,...) EXPAND(what(a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_12(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_14(what,a0,x0,x1,x2,x3,...) EXPAND(what(a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_13(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_15(what,a0,x0,x1,x2,x3,...) EXPAND(what(a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_14(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_1ARG_4_15,_FOR_EACH_1ARG_4_15,_FOR_EACH_1ARG_4_15,_FOR_EACH_1ARG_4_15,_FOR_EACH_1ARG_4_14,_FOR_EACH_1ARG_4_14,_FOR_EACH_1ARG_4_14,_FOR_EACH_1ARG_4_14,_FOR_EACH_1ARG_4_13,_FOR_EACH_1ARG_4_13,_FOR_EACH_1ARG_4_13,_FOR_EACH_1ARG_4_13,_FOR_EACH_1ARG_4_12,_FOR_EACH_1ARG_4_12,_FOR_EACH_1ARG_4_12,_FOR_EACH_1ARG_4_12,_FOR_EACH_1ARG_4_11,_FOR_EACH_1ARG_4_11,_FOR_EACH_1ARG_4_11,_FOR_EACH_1ARG_4_11,_FOR_EACH_1ARG_4_10,_FOR_EACH_1ARG_4_10,_FOR_EACH_1ARG_4_10,_FOR_EACH_1ARG_4_10,_FOR_EACH_1ARG_4_9,_FOR_EACH_1ARG_4_9,_FOR_EACH_1ARG_4_9,_FOR_EACH_1ARG_4_9,_FOR_EACH_1ARG_4_8,_FOR_EACH_1ARG_4_8,_FOR_EACH_1ARG_4_8,_FOR_EACH_1ARG_4_8,_FOR_EACH_1ARG_4_7,_FOR_EACH_1ARG_4_7,_FOR_EACH_1ARG_4_7,_FOR_EACH_1ARG_4_7,_FOR_EACH_1ARG_4_6,_FOR_EACH_1ARG_4_6,_FOR_EACH_1ARG_4_6,_FOR_EACH_1ARG_4_6,_FOR_EACH_1ARG_4_5,_FOR_EACH_1ARG_4_5,_FOR_EACH_1ARG_4_5,_FOR_EACH_1ARG_4_5,_FOR_EACH_1ARG_4_4,_FOR_EACH_1ARG_4_4,_FOR_EACH_1ARG_4_4,_FOR_EACH_1ARG_4_4,_FOR_EACH_1ARG_4_3,_FOR_EACH_1ARG_4_3,_FOR_EACH_1ARG_4_3,_FOR_EACH_1ARG_4_3,_FOR_EACH_1ARG_4_2,_FOR_EACH_1ARG_4_2,_FOR_EACH_1ARG_4_2,_FOR_EACH_1ARG_4_2,_FOR_EACH_1ARG_4_1,_FOR_EACH_1ARG_4_1,_FOR_EACH_1ARG_4_1,_FOR_EACH_1ARG_4_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_1ARG_4: Apply the action 'what' to a sequence of elements.
//   a0: Static arguments that are passed into the action.
//   Loop: Each iteration processes 4 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_1ARG_4(what,a0,...) EXPAND(_FOR_EACH_1ARG_4_SELECT(__VA_ARGS__)(what,a0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_1ARG_4_COUNT_1(what,i,a0,x0,x1,x2,x3) EXPAND(what(i,a0,x0,x1,x2,x3))
#define _FOR_EACH_1ARG_4_COUNT_2(what,i,a0,x0,x1,x2,x3,...) EXPAND(what(i,a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_COUNT_1(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_COUNT_3(what,i,a0,x0,x1,x2,x3,...) EXPAND(what(i,a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_COUNT_2(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_COUNT_4(what,i,a0,x0,x1,x2,x3,...) EXPAND(what(i,a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_COUNT_3(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_COUNT_5(what,i,a0,x0,x1,x2,x3,...) EXPAND(what(i,a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_COUNT_4(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_COUNT_6(what,i,a0,x0,x1,x2,x3,...) EXPAND(what(i,a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_COUNT_5(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_COUNT_7(what,i,a0,x0,x1,x2,x3,...) EXPAND(what(i,a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_COUNT_6(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_COUNT_8(what,i,a0,x0,x1,x2,x3,...) EXPAND(what(i,a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_COUNT_7(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_COUNT_9(what,i,a0,x0,x1,x2,x3,...) EXPAND(what(i,a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_COUNT_8(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_COUNT_10(what,i,a0,x0,x1,x2,x3,...) EXPAND(what(i,a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_COUNT_9(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_COUNT_11(what,i,a0,x0,x1,x2,x3,...) EXPAND(what(i,a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_COUNT_10(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_COUNT_12(what,i,a0,x0,x1,x2,x3,...) EXPAND(what(i,a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_COUNT_11(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_COUNT_13(what,i,a0,x0,x1,x2,x3,...) EXPAND(what(i,a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_COUNT_12(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_COUNT_14(what,i,a0,x0,x1,x2,x3,...) EXPAND(what(i,a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_COUNT_13(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_COUNT_15(what,i,a0,x0,x1,x2,x3,...) EXPAND(what(i,a0,x0,x1,x2,x3) _FOR_EACH_1ARG_4_COUNT_14(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_4_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_1ARG_4_COUNT_15,_FOR_EACH_1ARG_4_COUNT_15,_FOR_EACH_1ARG_4_COUNT_15,_FOR_EACH_1ARG_4_COUNT_15,_FOR_EACH_1ARG_4_COUNT_14,_FOR_EACH_1ARG_4_COUNT_14,_FOR_EACH_1ARG_4_COUNT_14,_FOR_EACH_1ARG_4_COUNT_14,_FOR_EACH_1ARG_4_COUNT_13,_FOR_EACH_1ARG_4_COUNT_13,_FOR_EACH_1ARG_4_COUNT_13,_FOR_EACH_1ARG_4_COUNT_13,_FOR_EACH_1ARG_4_COUNT_12,_FOR_EACH_1ARG_4_COUNT_12,_FOR_EACH_1ARG_4_COUNT_12,_FOR_EACH_1ARG_4_COUNT_12,_FOR_EACH_1ARG_4_COUNT_11,_FOR_EACH_1ARG_4_COUNT_11,_FOR_EACH_1ARG_4_COUNT_11,_FOR_EACH_1ARG_4_COUNT_11,_FOR_EACH_1ARG_4_COUNT_10,_FOR_EACH_1ARG_4_COUNT_10,_FOR_EACH_1ARG_4_COUNT_10,_FOR_EACH_1ARG_4_COUNT_10,_FOR_EACH_1ARG_4_COUNT_9,_FOR_EACH_1ARG_4_COUNT_9,_FOR_EACH_1ARG_4_COUNT_9,_FOR_EACH_1ARG_4_COUNT_9,_FOR_EACH_1ARG_4_COUNT_8,_FOR_EACH_1ARG_4_COUNT_8,_FOR_EACH_1ARG_4_COUNT_8,_FOR_EACH_1ARG_4_COUNT_8,_FOR_EACH_1ARG_4_COUNT_7,_FOR_EACH_1ARG_4_COUNT_7,_FOR_EACH_1ARG_4_COUNT_7,_FOR_EACH_1ARG_4_COUNT_7,_FOR_EACH_1ARG_4_COUNT_6,_FOR_EACH_1ARG_4_COUNT_6,_FOR_EACH_1ARG_4_COUNT_6,_FOR_EACH_1ARG_4_COUNT_6,_FOR_EACH_1ARG_4_COUNT_5,_FOR_EACH_1ARG_4_COUNT_5,_FOR_EACH_1ARG_4_COUNT_5,_FOR_EACH_1ARG_4_COUNT_5,_FOR_EACH_1ARG_4_COUNT_4,_FOR_EACH_1ARG_4_COUNT_4,_FOR_EACH_1ARG_4_COUNT_4,_FOR_EACH_1ARG_4_COUNT_4,_FOR_EACH_1ARG_4_COUNT_3,_FOR_EACH_1ARG_4_COUNT_3,_FOR_EACH_1ARG_4_COUNT_3,_FOR_EACH_1ARG_4_COUNT_3,_FOR_EACH_1ARG_4_COUNT_2,_FOR_EACH_1ARG_4_COUNT_2,_FOR_EACH_1ARG_4_COUNT_2,_FOR_EACH_1ARG_4_COUNT_2,_FOR_EACH_1ARG_4_COUNT_1,_FOR_EACH_1ARG_4_COUNT_1,_FOR_EACH_1ARG_4_COUNT_1,_FOR_EACH_1ARG_4_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_1ARG_4_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0: Static arguments that are passed into the action.
//   Loop: Each iteration processes 4 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_1ARG_4_COUNT(what,a0,...) EXPAND(_FOR_EACH_1ARG_4_COUNT_SELECT(__VA_ARGS__)(what,0,a0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_2ARGS_4_1(what,a0,a1,x0,x1,x2,x3) EXPAND(what(a0,a1,x0,x1,x2,x3))
#define _FOR_EACH_2ARGS_4_2(what,a0,a1,x0,x1,x2,x3,...) EXPAND(what(a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_1(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_3(what,a0,a1,x0,x1,x2,x3,...) EXPAND(what(a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_2(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_4(what,a0,a1,x0,x1,x2,x3,...) EXPAND(what(a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_3(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_5(what,a0,a1,x0,x1,x2,x3,...) EXPAND(what(a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_4(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_6(what,a0,a1,x0,x1,x2,x3,...) EXPAND(what(a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_5(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_7(what,a0,a1,x0,x1,x2,x3,...) EXPAND(what(a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_6(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_8(what,a0,a1,x0,x1,x2,x3,...) EXPAND(what(a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_7(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_9(what,a0,a1,x0,x1,x2,x3,...) EXPAND(what(a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_8(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_10(what,a0,a1,x0,x1,x2,x3,...) EXPAND(what(a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_9(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_11(what,a0,a1,x0,x1,x2,x3,...) EXPAND(what(a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_10(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_12(what,a0,a1,x0,x1,x2,x3,...) EXPAND(what(a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_11(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_13(what,a0,a1,x0,x1,x2,x3,...) EXPAND(what(a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_12(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_14(what,a0,a1,x0,x1,x2,x3,...) EXPAND(what(a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_13(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_15(what,a0,a1,x0,x1,x2,x3,...) EXPAND(what(a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_14(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_2ARGS_4_15,_FOR_EACH_2ARGS_4_15,_FOR_EACH_2ARGS_4_15,_FOR_EACH_2ARGS_4_15,_FOR_EACH_2ARGS_4_14,_FOR_EACH_2ARGS_4_14,_FOR_EACH_2ARGS_4_14,_FOR_EACH_2ARGS_4_14,_FOR_EACH_2ARGS_4_13,_FOR_EACH_2ARGS_4_13,_FOR_EACH_2ARGS_4_13,_FOR_EACH_2ARGS_4_13,_FOR_EACH_2ARGS_4_12,_FOR_EACH_2ARGS_4_12,_FOR_EACH_2ARGS_4_12,_FOR_EACH_2ARGS_4_12,_FOR_EACH_2ARGS_4_11,_FOR_EACH_2ARGS_4_11,_FOR_EACH_2ARGS_4_11,_FOR_EACH_2ARGS_4_11,_FOR_EACH_2ARGS_4_10,_FOR_EACH_2ARGS_4_10,_FOR_EACH_2ARGS_4_10,_FOR_EACH_2ARGS_4_10,_FOR_EACH_2ARGS_4_9,_FOR_EACH_2ARGS_4_9,_FOR_EACH_2ARGS_4_9,_FOR_EACH_2ARGS_4_9,_FOR_EACH_2ARGS_4_8,_FOR_EACH_2ARGS_4_8,_FOR_EACH_2ARGS_4_8,_FOR_EACH_2ARGS_4_8,_FOR_EACH_2ARGS_4_7,_FOR_EACH_2ARGS_4_7,_FOR_EACH_2ARGS_4_7,_FOR_EACH_2ARGS_4_7,_FOR_EACH_2ARGS_4_6,_FOR_EACH_2ARGS_4_6,_FOR_EACH_2ARGS_4_6,_FOR_EACH_2ARGS_4_6,_FOR_EACH_2ARGS_4_5,_FOR_EACH_2ARGS_4_5,_FOR_EACH_2ARGS_4_5,_FOR_EACH_2ARGS_4_5,_FOR_EACH_2ARGS_4_4,_FOR_EACH_2ARGS_4_4,_FOR_EACH_2ARGS_4_4,_FOR_EACH_2ARGS_4_4,_FOR_EACH_2ARGS_4_3,_FOR_EACH_2ARGS_4_3,_FOR_EACH_2ARGS_4_3,_FOR_EACH_2ARGS_4_3,_FOR_EACH_2ARGS_4_2,_FOR_EACH_2ARGS_4_2,_FOR_EACH_2ARGS_4_2,_FOR_EACH_2ARGS_4_2,_FOR_EACH_2ARGS_4_1,_FOR_EACH_2ARGS_4_1,_FOR_EACH_2ARGS_4_1,_FOR_EACH_2ARGS_4_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_2ARGS_4: Apply the action 'what' to a sequence of elements.
//   a0,a1: Static arguments that are passed into the action.
//   Loop: Each iteration processes 4 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_2ARGS_4(what,a0,a1,...) EXPAND(_FOR_EACH_2ARGS_4_SELECT(__VA_ARGS__)(what,a0,a1,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_2ARGS_4_COUNT_1(what,i,a0,a1,x0,x1,x2,x3) EXPAND(what(i,a0,a1,x0,x1,x2,x3))
#define _FOR_EACH_2ARGS_4_COUNT_2(what,i,a0,a1,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_COUNT_1(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_COUNT_3(what,i,a0,a1,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_COUNT_2(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_COUNT_4(what,i,a0,a1,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_COUNT_3(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_COUNT_5(what,i,a0,a1,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_COUNT_4(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_COUNT_6(what,i,a0,a1,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_COUNT_5(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_COUNT_7(what,i,a0,a1,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_COUNT_6(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_COUNT_8(what,i,a0,a1,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_COUNT_7(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_COUNT_9(what,i,a0,a1,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_COUNT_8(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_COUNT_10(what,i,a0,a1,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_COUNT_9(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_COUNT_11(what,i,a0,a1,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_COUNT_10(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_COUNT_12(what,i,a0,a1,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_COUNT_11(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_COUNT_13(what,i,a0,a1,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_COUNT_12(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_COUNT_14(what,i,a0,a1,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_COUNT_13(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_COUNT_15(what,i,a0,a1,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3) _FOR_EACH_2ARGS_4_COUNT_14(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_4_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_2ARGS_4_COUNT_15,_FOR_EACH_2ARGS_4_COUNT_15,_FOR_EACH_2ARGS_4_COUNT_15,_FOR_EACH_2ARGS_4_COUNT_15,_FOR_EACH_2ARGS_4_COUNT_14,_FOR_EACH_2ARGS_4_COUNT_14,_FOR_EACH_2ARGS_4_COUNT_14,_FOR_EACH_2ARGS_4_COUNT_14,_FOR_EACH_2ARGS_4_COUNT_13,_FOR_EACH_2ARGS_4_COUNT_13,_FOR_EACH_2ARGS_4_COUNT_13,_FOR_EACH_2ARGS_4_COUNT_13,_FOR_EACH_2ARGS_4_COUNT_12,_FOR_EACH_2ARGS_4_COUNT_12,_FOR_EACH_2ARGS_4_COUNT_12,_FOR_EACH_2ARGS_4_COUNT_12,_FOR_EACH_2ARGS_4_COUNT_11,_FOR_EACH_2ARGS_4_COUNT_11,_FOR_EACH_2ARGS_4_COUNT_11,_FOR_EACH_2ARGS_4_COUNT_11,_FOR_EACH_2ARGS_4_COUNT_10,_FOR_EACH_2ARGS_4_COUNT_10,_FOR_EACH_2ARGS_4_COUNT_10,_FOR_EACH_2ARGS_4_COUNT_10,_FOR_EACH_2ARGS_4_COUNT_9,_FOR_EACH_2ARGS_4_COUNT_9,_FOR_EACH_2ARGS_4_COUNT_9,_FOR_EACH_2ARGS_4_COUNT_9,_FOR_EACH_2ARGS_4_COUNT_8,_FOR_EACH_2ARGS_4_COUNT_8,_FOR_EACH_2ARGS_4_COUNT_8,_FOR_EACH_2ARGS_4_COUNT_8,_FOR_EACH_2ARGS_4_COUNT_7,_FOR_EACH_2ARGS_4_COUNT_7,_FOR_EACH_2ARGS_4_COUNT_7,_FOR_EACH_2ARGS_4_COUNT_7,_FOR_EACH_2ARGS_4_COUNT_6,_FOR_EACH_2ARGS_4_COUNT_6,_FOR_EACH_2ARGS_4_COUNT_6,_FOR_EACH_2ARGS_4_COUNT_6,_FOR_EACH_2ARGS_4_COUNT_5,_FOR_EACH_2ARGS_4_COUNT_5,_FOR_EACH_2ARGS_4_COUNT_5,_FOR_EACH_2ARGS_4_COUNT_5,_FOR_EACH_2ARGS_4_COUNT_4,_FOR_EACH_2ARGS_4_COUNT_4,_FOR_EACH_2ARGS_4_COUNT_4,_FOR_EACH_2ARGS_4_COUNT_4,_FOR_EACH_2ARGS_4_COUNT_3,_FOR_EACH_2ARGS_4_COUNT_3,_FOR_EACH_2ARGS_4_COUNT_3,_FOR_EACH_2ARGS_4_COUNT_3,_FOR_EACH_2ARGS_4_COUNT_2,_FOR_EACH_2ARGS_4_COUNT_2,_FOR_EACH_2ARGS_4_COUNT_2,_FOR_EACH_2ARGS_4_COUNT_2,_FOR_EACH_2ARGS_4_COUNT_1,_FOR_EACH_2ARGS_4_COUNT_1,_FOR_EACH_2ARGS_4_COUNT_1,_FOR_EACH_2ARGS_4_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_2ARGS_4_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0,a1: Static arguments that are passed into the action.
//   Loop: Each iteration processes 4 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_2ARGS_4_COUNT(what,a0,a1,...) EXPAND(_FOR_EACH_2ARGS_4_COUNT_SELECT(__VA_ARGS__)(what,0,a0,a1,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_3ARGS_4_1(what,a0,a1,a2,x0,x1,x2,x3) EXPAND(what(a0,a1,a2,x0,x1,x2,x3))
#define _FOR_EACH_3ARGS_4_2(what,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_1(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_3(what,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_2(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_4(what,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_3(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_5(what,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_4(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_6(what,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_5(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_7(what,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_6(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_8(what,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_7(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_9(what,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_8(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_10(what,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_9(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_11(what,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_10(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_12(what,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_11(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_13(what,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_12(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_14(what,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_13(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_15(what,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_14(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_3ARGS_4_15,_FOR_EACH_3ARGS_4_15,_FOR_EACH_3ARGS_4_15,_FOR_EACH_3ARGS_4_15,_FOR_EACH_3ARGS_4_14,_FOR_EACH_3ARGS_4_14,_FOR_EACH_3ARGS_4_14,_FOR_EACH_3ARGS_4_14,_FOR_EACH_3ARGS_4_13,_FOR_EACH_3ARGS_4_13,_FOR_EACH_3ARGS_4_13,_FOR_EACH_3ARGS_4_13,_FOR_EACH_3ARGS_4_12,_FOR_EACH_3ARGS_4_12,_FOR_EACH_3ARGS_4_12,_FOR_EACH_3ARGS_4_12,_FOR_EACH_3ARGS_4_11,_FOR_EACH_3ARGS_4_11,_FOR_EACH_3ARGS_4_11,_FOR_EACH_3ARGS_4_11,_FOR_EACH_3ARGS_4_10,_FOR_EACH_3ARGS_4_10,_FOR_EACH_3ARGS_4_10,_FOR_EACH_3ARGS_4_10,_FOR_EACH_3ARGS_4_9,_FOR_EACH_3ARGS_4_9,_FOR_EACH_3ARGS_4_9,_FOR_EACH_3ARGS_4_9,_FOR_EACH_3ARGS_4_8,_FOR_EACH_3ARGS_4_8,_FOR_EACH_3ARGS_4_8,_FOR_EACH_3ARGS_4_8,_FOR_EACH_3ARGS_4_7,_FOR_EACH_3ARGS_4_7,_FOR_EACH_3ARGS_4_7,_FOR_EACH_3ARGS_4_7,_FOR_EACH_3ARGS_4_6,_FOR_EACH_3ARGS_4_6,_FOR_EACH_3ARGS_4_6,_FOR_EACH_3ARGS_4_6,_FOR_EACH_3ARGS_4_5,_FOR_EACH_3ARGS_4_5,_FOR_EACH_3ARGS_4_5,_FOR_EACH_3ARGS_4_5,_FOR_EACH_3ARGS_4_4,_FOR_EACH_3ARGS_4_4,_FOR_EACH_3ARGS_4_4,_FOR_EACH_3ARGS_4_4,_FOR_EACH_3ARGS_4_3,_FOR_EACH_3ARGS_4_3,_FOR_EACH_3ARGS_4_3,_FOR_EACH_3ARGS_4_3,_FOR_EACH_3ARGS_4_2,_FOR_EACH_3ARGS_4_2,_FOR_EACH_3ARGS_4_2,_FOR_EACH_3ARGS_4_2,_FOR_EACH_3ARGS_4_1,_FOR_EACH_3ARGS_4_1,_FOR_EACH_3ARGS_4_1,_FOR_EACH_3ARGS_4_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_3ARGS_4: Apply the action 'what' to a sequence of elements.
//   a0,a1,a2: Static arguments that are passed into the action.
//   Loop: Each iteration processes 4 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_3ARGS_4(what,a0,a1,a2,...) EXPAND(_FOR_EACH_3ARGS_4_SELECT(__VA_ARGS__)(what,a0,a1,a2,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_3ARGS_4_COUNT_1(what,i,a0,a1,a2,x0,x1,x2,x3) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3))
#define _FOR_EACH_3ARGS_4_COUNT_2(what,i,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_COUNT_1(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_COUNT_3(what,i,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_COUNT_2(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_COUNT_4(what,i,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_COUNT_3(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_COUNT_5(what,i,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_COUNT_4(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_COUNT_6(what,i,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_COUNT_5(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_COUNT_7(what,i,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_COUNT_6(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_COUNT_8(what,i,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_COUNT_7(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_COUNT_9(what,i,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_COUNT_8(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_COUNT_10(what,i,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_COUNT_9(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_COUNT_11(what,i,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_COUNT_10(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_COUNT_12(what,i,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_COUNT_11(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_COUNT_13(what,i,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_COUNT_12(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_COUNT_14(what,i,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_COUNT_13(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_COUNT_15(what,i,a0,a1,a2,x0,x1,x2,x3,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3) _FOR_EACH_3ARGS_4_COUNT_14(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_4_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_3ARGS_4_COUNT_15,_FOR_EACH_3ARGS_4_COUNT_15,_FOR_EACH_3ARGS_4_COUNT_15,_FOR_EACH_3ARGS_4_COUNT_15,_FOR_EACH_3ARGS_4_COUNT_14,_FOR_EACH_3ARGS_4_COUNT_14,_FOR_EACH_3ARGS_4_COUNT_14,_FOR_EACH_3ARGS_4_COUNT_14,_FOR_EACH_3ARGS_4_COUNT_13,_FOR_EACH_3ARGS_4_COUNT_13,_FOR_EACH_3ARGS_4_COUNT_13,_FOR_EACH_3ARGS_4_COUNT_13,_FOR_EACH_3ARGS_4_COUNT_12,_FOR_EACH_3ARGS_4_COUNT_12,_FOR_EACH_3ARGS_4_COUNT_12,_FOR_EACH_3ARGS_4_COUNT_12,_FOR_EACH_3ARGS_4_COUNT_11,_FOR_EACH_3ARGS_4_COUNT_11,_FOR_EACH_3ARGS_4_COUNT_11,_FOR_EACH_3ARGS_4_COUNT_11,_FOR_EACH_3ARGS_4_COUNT_10,_FOR_EACH_3ARGS_4_COUNT_10,_FOR_EACH_3ARGS_4_COUNT_10,_FOR_EACH_3ARGS_4_COUNT_10,_FOR_EACH_3ARGS_4_COUNT_9,_FOR_EACH_3ARGS_4_COUNT_9,_FOR_EACH_3ARGS_4_COUNT_9,_FOR_EACH_3ARGS_4_COUNT_9,_FOR_EACH_3ARGS_4_COUNT_8,_FOR_EACH_3ARGS_4_COUNT_8,_FOR_EACH_3ARGS_4_COUNT_8,_FOR_EACH_3ARGS_4_COUNT_8,_FOR_EACH_3ARGS_4_COUNT_7,_FOR_EACH_3ARGS_4_COUNT_7,_FOR_EACH_3ARGS_4_COUNT_7,_FOR_EACH_3ARGS_4_COUNT_7,_FOR_EACH_3ARGS_4_COUNT_6,_FOR_EACH_3ARGS_4_COUNT_6,_FOR_EACH_3ARGS_4_COUNT_6,_FOR_EACH_3ARGS_4_COUNT_6,_FOR_EACH_3ARGS_4_COUNT_5,_FOR_EACH_3ARGS_4_COUNT_5,_FOR_EACH_3ARGS_4_COUNT_5,_FOR_EACH_3ARGS_4_COUNT_5,_FOR_EACH_3ARGS_4_COUNT_4,_FOR_EACH_3ARGS_4_COUNT_4,_FOR_EACH_3ARGS_4_COUNT_4,_FOR_EACH_3ARGS_4_COUNT_4,_FOR_EACH_3ARGS_4_COUNT_3,_FOR_EACH_3ARGS_4_COUNT_3,_FOR_EACH_3ARGS_4_COUNT_3,_FOR_EACH_3ARGS_4_COUNT_3,_FOR_EACH_3ARGS_4_COUNT_2,_FOR_EACH_3ARGS_4_COUNT_2,_FOR_EACH_3ARGS_4_COUNT_2,_FOR_EACH_3ARGS_4_COUNT_2,_FOR_EACH_3ARGS_4_COUNT_1,_FOR_EACH_3ARGS_4_COUNT_1,_FOR_EACH_3ARGS_4_COUNT_1,_FOR_EACH_3ARGS_4_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_3ARGS_4_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0,a1,a2: Static arguments that are passed into the action.
//   Loop: Each iteration processes 4 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_3ARGS_4_COUNT(what,a0,a1,a2,...) EXPAND(_FOR_EACH_3ARGS_4_COUNT_SELECT(__VA_ARGS__)(what,0,a0,a1,a2,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_5_1(what,x0,x1,x2,x3,x4) EXPAND(what(x0,x1,x2,x3,x4))
#define _FOR_EACH_5_2(what,x0,x1,x2,x3,x4,...) EXPAND(what(x0,x1,x2,x3,x4) _FOR_EACH_5_1(what,__VA_ARGS__))
#define _FOR_EACH_5_3(what,x0,x1,x2,x3,x4,...) EXPAND(what(x0,x1,x2,x3,x4) _FOR_EACH_5_2(what,__VA_ARGS__))
#define _FOR_EACH_5_4(what,x0,x1,x2,x3,x4,...) EXPAND(what(x0,x1,x2,x3,x4) _FOR_EACH_5_3(what,__VA_ARGS__))
#define _FOR_EACH_5_5(what,x0,x1,x2,x3,x4,...) EXPAND(what(x0,x1,x2,x3,x4) _FOR_EACH_5_4(what,__VA_ARGS__))
#define _FOR_EACH_5_6(what,x0,x1,x2,x3,x4,...) EXPAND(what(x0,x1,x2,x3,x4) _FOR_EACH_5_5(what,__VA_ARGS__))
#define _FOR_EACH_5_7(what,x0,x1,x2,x3,x4,...) EXPAND(what(x0,x1,x2,x3,x4) _FOR_EACH_5_6(what,__VA_ARGS__))
#define _FOR_EACH_5_8(what,x0,x1,x2,x3,x4,...) EXPAND(what(x0,x1,x2,x3,x4) _FOR_EACH_5_7(what,__VA_ARGS__))
#define _FOR_EACH_5_9(what,x0,x1,x2,x3,x4,...) EXPAND(what(x0,x1,x2,x3,x4) _FOR_EACH_5_8(what,__VA_ARGS__))
#define _FOR_EACH_5_10(what,x0,x1,x2,x3,x4,...) EXPAND(what(x0,x1,x2,x3,x4) _FOR_EACH_5_9(what,__VA_ARGS__))
#define _FOR_EACH_5_11(what,x0,x1,x2,x3,x4,...) EXPAND(what(x0,x1,x2,x3,x4) _FOR_EACH_5_10(what,__VA_ARGS__))
#define _FOR_EACH_5_12(what,x0,x1,x2,x3,x4,...) EXPAND(what(x0,x1,x2,x3,x4) _FOR_EACH_5_11(what,__VA_ARGS__))
#define _FOR_EACH_5_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_5_12,_FOR_EACH_5_12,_FOR_EACH_5_12,_FOR_EACH_5_12,_FOR_EACH_5_12,_FOR_EACH_5_11,_FOR_EACH_5_11,_FOR_EACH_5_11,_FOR_EACH_5_11,_FOR_EACH_5_11,_FOR_EACH_5_10,_FOR_EACH_5_10,_FOR_EACH_5_10,_FOR_EACH_5_10,_FOR_EACH_5_10,_FOR_EACH_5_9,_FOR_EACH_5_9,_FOR_EACH_5_9,_FOR_EACH_5_9,_FOR_EACH_5_9,_FOR_EACH_5_8,_FOR_EACH_5_8,_FOR_EACH_5_8,_FOR_EACH_5_8,_FOR_EACH_5_8,_FOR_EACH_5_7,_FOR_EACH_5_7,_FOR_EACH_5_7,_FOR_EACH_5_7,_FOR_EACH_5_7,_FOR_EACH_5_6,_FOR_EACH_5_6,_FOR_EACH_5_6,_FOR_EACH_5_6,_FOR_EACH_5_6,_FOR_EACH_5_5,_FOR_EACH_5_5,_FOR_EACH_5_5,_FOR_EACH_5_5,_FOR_EACH_5_5,_FOR_EACH_5_4,_FOR_EACH_5_4,_FOR_EACH_5_4,_FOR_EACH_5_4,_FOR_EACH_5_4,_FOR_EACH_5_3,_FOR_EACH_5_3,_FOR_EACH_5_3,_FOR_EACH_5_3,_FOR_EACH_5_3,_FOR_EACH_5_2,_FOR_EACH_5_2,_FOR_EACH_5_2,_FOR_EACH_5_2,_FOR_EACH_5_2,_FOR_EACH_5_1,_FOR_EACH_5_1,_FOR_EACH_5_1,_FOR_EACH_5_1,_FOR_EACH_5_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_5: Apply the action 'what' to a sequence of elements.
//   Loop: Each iteration processes 5 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_5(what,...) EXPAND(_FOR_EACH_5_SELECT(__VA_ARGS__)(what,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_5_COUNT_1(what,i,x0,x1,x2,x3,x4) EXPAND(what(i,x0,x1,x2,x3,x4))
#define _FOR_EACH_5_COUNT_2(what,i,x0,x1,x2,x3,x4,...) EXPAND(what(i,x0,x1,x2,x3,x4) _FOR_EACH_5_COUNT_1(what,i+1,__VA_ARGS__))
#define _FOR_EACH_5_COUNT_3(what,i,x0,x1,x2,x3,x4,...) EXPAND(what(i,x0,x1,x2,x3,x4) _FOR_EACH_5_COUNT_2(what,i+1,__VA_ARGS__))
#define _FOR_EACH_5_COUNT_4(what,i,x0,x1,x2,x3,x4,...) EXPAND(what(i,x0,x1,x2,x3,x4) _FOR_EACH_5_COUNT_3(what,i+1,__VA_ARGS__))
#define _FOR_EACH_5_COUNT_5(what,i,x0,x1,x2,x3,x4,...) EXPAND(what(i,x0,x1,x2,x3,x4) _FOR_EACH_5_COUNT_4(what,i+1,__VA_ARGS__))
#define _FOR_EACH_5_COUNT_6(what,i,x0,x1,x2,x3,x4,...) EXPAND(what(i,x0,x1,x2,x3,x4) _FOR_EACH_5_COUNT_5(what,i+1,__VA_ARGS__))
#define _FOR_EACH_5_COUNT_7(what,i,x0,x1,x2,x3,x4,...) EXPAND(what(i,x0,x1,x2,x3,x4) _FOR_EACH_5_COUNT_6(what,i+1,__VA_ARGS__))
#define _FOR_EACH_5_COUNT_8(what,i,x0,x1,x2,x3,x4,...) EXPAND(what(i,x0,x1,x2,x3,x4) _FOR_EACH_5_COUNT_7(what,i+1,__VA_ARGS__))
#define _FOR_EACH_5_COUNT_9(what,i,x0,x1,x2,x3,x4,...) EXPAND(what(i,x0,x1,x2,x3,x4) _FOR_EACH_5_COUNT_8(what,i+1,__VA_ARGS__))
#define _FOR_EACH_5_COUNT_10(what,i,x0,x1,x2,x3,x4,...) EXPAND(what(i,x0,x1,x2,x3,x4) _FOR_EACH_5_COUNT_9(what,i+1,__VA_ARGS__))
#define _FOR_EACH_5_COUNT_11(what,i,x0,x1,x2,x3,x4,...) EXPAND(what(i,x0,x1,x2,x3,x4) _FOR_EACH_5_COUNT_10(what,i+1,__VA_ARGS__))
#define _FOR_EACH_5_COUNT_12(what,i,x0,x1,x2,x3,x4,...) EXPAND(what(i,x0,x1,x2,x3,x4) _FOR_EACH_5_COUNT_11(what,i+1,__VA_ARGS__))
#define _FOR_EACH_5_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_5_COUNT_12,_FOR_EACH_5_COUNT_12,_FOR_EACH_5_COUNT_12,_FOR_EACH_5_COUNT_12,_FOR_EACH_5_COUNT_12,_FOR_EACH_5_COUNT_11,_FOR_EACH_5_COUNT_11,_FOR_EACH_5_COUNT_11,_FOR_EACH_5_COUNT_11,_FOR_EACH_5_COUNT_11,_FOR_EACH_5_COUNT_10,_FOR_EACH_5_COUNT_10,_FOR_EACH_5_COUNT_10,_FOR_EACH_5_COUNT_10,_FOR_EACH_5_COUNT_10,_FOR_EACH_5_COUNT_9,_FOR_EACH_5_COUNT_9,_FOR_EACH_5_COUNT_9,_FOR_EACH_5_COUNT_9,_FOR_EACH_5_COUNT_9,_FOR_EACH_5_COUNT_8,_FOR_EACH_5_COUNT_8,_FOR_EACH_5_COUNT_8,_FOR_EACH_5_COUNT_8,_FOR_EACH_5_COUNT_8,_FOR_EACH_5_COUNT_7,_FOR_EACH_5_COUNT_7,_FOR_EACH_5_COUNT_7,_FOR_EACH_5_COUNT_7,_FOR_EACH_5_COUNT_7,_FOR_EACH_5_COUNT_6,_FOR_EACH_5_COUNT_6,_FOR_EACH_5_COUNT_6,_FOR_EACH_5_COUNT_6,_FOR_EACH_5_COUNT_6,_FOR_EACH_5_COUNT_5,_FOR_EACH_5_COUNT_5,_FOR_EACH_5_COUNT_5,_FOR_EACH_5_COUNT_5,_FOR_EACH_5_COUNT_5,_FOR_EACH_5_COUNT_4,_FOR_EACH_5_COUNT_4,_FOR_EACH_5_COUNT_4,_FOR_EACH_5_COUNT_4,_FOR_EACH_5_COUNT_4,_FOR_EACH_5_COUNT_3,_FOR_EACH_5_COUNT_3,_FOR_EACH_5_COUNT_3,_FOR_EACH_5_COUNT_3,_FOR_EACH_5_COUNT_3,_FOR_EACH_5_COUNT_2,_FOR_EACH_5_COUNT_2,_FOR_EACH_5_COUNT_2,_FOR_EACH_5_COUNT_2,_FOR_EACH_5_COUNT_2,_FOR_EACH_5_COUNT_1,_FOR_EACH_5_COUNT_1,_FOR_EACH_5_COUNT_1,_FOR_EACH_5_COUNT_1,_FOR_EACH_5_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_5_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   Loop: Each iteration processes 5 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_5_COUNT(what,...) EXPAND(_FOR_EACH_5_COUNT_SELECT(__VA_ARGS__)(what,0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_1ARG_5_1(what,a0,x0,x1,x2,x3,x4) EXPAND(what(a0,x0,x1,x2,x3,x4))
#define _FOR_EACH_1ARG_5_2(what,a0,x0,x1,x2,x3,x4,...) EXPAND(what(a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_1(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_3(what,a0,x0,x1,x2,x3,x4,...) EXPAND(what(a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_2(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_4(what,a0,x0,x1,x2,x3,x4,...) EXPAND(what(a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_3(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_5(what,a0,x0,x1,x2,x3,x4,...) EXPAND(what(a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_4(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_6(what,a0,x0,x1,x2,x3,x4,...) EXPAND(what(a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_5(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_7(what,a0,x0,x1,x2,x3,x4,...) EXPAND(what(a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_6(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_8(what,a0,x0,x1,x2,x3,x4,...) EXPAND(what(a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_7(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_9(what,a0,x0,x1,x2,x3,x4,...) EXPAND(what(a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_8(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_10(what,a0,x0,x1,x2,x3,x4,...) EXPAND(what(a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_9(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_11(what,a0,x0,x1,x2,x3,x4,...) EXPAND(what(a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_10(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_12(what,a0,x0,x1,x2,x3,x4,...) EXPAND(what(a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_11(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_1ARG_5_12,_FOR_EACH_1ARG_5_12,_FOR_EACH_1ARG_5_12,_FOR_EACH_1ARG_5_12,_FOR_EACH_1ARG_5_12,_FOR_EACH_1ARG_5_11,_FOR_EACH_1ARG_5_11,_FOR_EACH_1ARG_5_11,_FOR_EACH_1ARG_5_11,_FOR_EACH_1ARG_5_11,_FOR_EACH_1ARG_5_10,_FOR_EACH_1ARG_5_10,_FOR_EACH_1ARG_5_10,_FOR_EACH_1ARG_5_10,_FOR_EACH_1ARG_5_10,_FOR_EACH_1ARG_5_9,_FOR_EACH_1ARG_5_9,_FOR_EACH_1ARG_5_9,_FOR_EACH_1ARG_5_9,_FOR_EACH_1ARG_5_9,_FOR_EACH_1ARG_5_8,_FOR_EACH_1ARG_5_8,_FOR_EACH_1ARG_5_8,_FOR_EACH_1ARG_5_8,_FOR_EACH_1ARG_5_8,_FOR_EACH_1ARG_5_7,_FOR_EACH_1ARG_5_7,_FOR_EACH_1ARG_5_7,_FOR_EACH_1ARG_5_7,_FOR_EACH_1ARG_5_7,_FOR_EACH_1ARG_5_6,_FOR_EACH_1ARG_5_6,_FOR_EACH_1ARG_5_6,_FOR_EACH_1ARG_5_6,_FOR_EACH_1ARG_5_6,_FOR_EACH_1ARG_5_5,_FOR_EACH_1ARG_5_5,_FOR_EACH_1ARG_5_5,_FOR_EACH_1ARG_5_5,_FOR_EACH_1ARG_5_5,_FOR_EACH_1ARG_5_4,_FOR_EACH_1ARG_5_4,_FOR_EACH_1ARG_5_4,_FOR_EACH_1ARG_5_4,_FOR_EACH_1ARG_5_4,_FOR_EACH_1ARG_5_3,_FOR_EACH_1ARG_5_3,_FOR_EACH_1ARG_5_3,_FOR_EACH_1ARG_5_3,_FOR_EACH_1ARG_5_3,_FOR_EACH_1ARG_5_2,_FOR_EACH_1ARG_5_2,_FOR_EACH_1ARG_5_2,_FOR_EACH_1ARG_5_2,_FOR_EACH_1ARG_5_2,_FOR_EACH_1ARG_5_1,_FOR_EACH_1ARG_5_1,_FOR_EACH_1ARG_5_1,_FOR_EACH_1ARG_5_1,_FOR_EACH_1ARG_5_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_1ARG_5: Apply the action 'what' to a sequence of elements.
//   a0: Static arguments that are passed into the action.
//   Loop: Each iteration processes 5 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_1ARG_5(what,a0,...) EXPAND(_FOR_EACH_1ARG_5_SELECT(__VA_ARGS__)(what,a0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_1ARG_5_COUNT_1(what,i,a0,x0,x1,x2,x3,x4) EXPAND(what(i,a0,x0,x1,x2,x3,x4))
#define _FOR_EACH_1ARG_5_COUNT_2(what,i,a0,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_COUNT_1(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_COUNT_3(what,i,a0,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_COUNT_2(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_COUNT_4(what,i,a0,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_COUNT_3(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_COUNT_5(what,i,a0,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_COUNT_4(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_COUNT_6(what,i,a0,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_COUNT_5(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_COUNT_7(what,i,a0,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_COUNT_6(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_COUNT_8(what,i,a0,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_COUNT_7(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_COUNT_9(what,i,a0,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_COUNT_8(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_COUNT_10(what,i,a0,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_COUNT_9(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_COUNT_11(what,i,a0,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_COUNT_10(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_COUNT_12(what,i,a0,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4) _FOR_EACH_1ARG_5_COUNT_11(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_5_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_1ARG_5_COUNT_12,_FOR_EACH_1ARG_5_COUNT_12,_FOR_EACH_1ARG_5_COUNT_12,_FOR_EACH_1ARG_5_COUNT_12,_FOR_EACH_1ARG_5_COUNT_12,_FOR_EACH_1ARG_5_COUNT_11,_FOR_EACH_1ARG_5_COUNT_11,_FOR_EACH_1ARG_5_COUNT_11,_FOR_EACH_1ARG_5_COUNT_11,_FOR_EACH_1ARG_5_COUNT_11,_FOR_EACH_1ARG_5_COUNT_10,_FOR_EACH_1ARG_5_COUNT_10,_FOR_EACH_1ARG_5_COUNT_10,_FOR_EACH_1ARG_5_COUNT_10,_FOR_EACH_1ARG_5_COUNT_10,_FOR_EACH_1ARG_5_COUNT_9,_FOR_EACH_1ARG_5_COUNT_9,_FOR_EACH_1ARG_5_COUNT_9,_FOR_EACH_1ARG_5_COUNT_9,_FOR_EACH_1ARG_5_COUNT_9,_FOR_EACH_1ARG_5_COUNT_8,_FOR_EACH_1ARG_5_COUNT_8,_FOR_EACH_1ARG_5_COUNT_8,_FOR_EACH_1ARG_5_COUNT_8,_FOR_EACH_1ARG_5_COUNT_8,_FOR_EACH_1ARG_5_COUNT_7,_FOR_EACH_1ARG_5_COUNT_7,_FOR_EACH_1ARG_5_COUNT_7,_FOR_EACH_1ARG_5_COUNT_7,_FOR_EACH_1ARG_5_COUNT_7,_FOR_EACH_1ARG_5_COUNT_6,_FOR_EACH_1ARG_5_COUNT_6,_FOR_EACH_1ARG_5_COUNT_6,_FOR_EACH_1ARG_5_COUNT_6,_FOR_EACH_1ARG_5_COUNT_6,_FOR_EACH_1ARG_5_COUNT_5,_FOR_EACH_1ARG_5_COUNT_5,_FOR_EACH_1ARG_5_COUNT_5,_FOR_EACH_1ARG_5_COUNT_5,_FOR_EACH_1ARG_5_COUNT_5,_FOR_EACH_1ARG_5_COUNT_4,_FOR_EACH_1ARG_5_COUNT_4,_FOR_EACH_1ARG_5_COUNT_4,_FOR_EACH_1ARG_5_COUNT_4,_FOR_EACH_1ARG_5_COUNT_4,_FOR_EACH_1ARG_5_COUNT_3,_FOR_EACH_1ARG_5_COUNT_3,_FOR_EACH_1ARG_5_COUNT_3,_FOR_EACH_1ARG_5_COUNT_3,_FOR_EACH_1ARG_5_COUNT_3,_FOR_EACH_1ARG_5_COUNT_2,_FOR_EACH_1ARG_5_COUNT_2,_FOR_EACH_1ARG_5_COUNT_2,_FOR_EACH_1ARG_5_COUNT_2,_FOR_EACH_1ARG_5_COUNT_2,_FOR_EACH_1ARG_5_COUNT_1,_FOR_EACH_1ARG_5_COUNT_1,_FOR_EACH_1ARG_5_COUNT_1,_FOR_EACH_1ARG_5_COUNT_1,_FOR_EACH_1ARG_5_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_1ARG_5_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0: Static arguments that are passed into the action.
//   Loop: Each iteration processes 5 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_1ARG_5_COUNT(what,a0,...) EXPAND(_FOR_EACH_1ARG_5_COUNT_SELECT(__VA_ARGS__)(what,0,a0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_2ARGS_5_1(what,a0,a1,x0,x1,x2,x3,x4) EXPAND(what(a0,a1,x0,x1,x2,x3,x4))
#define _FOR_EACH_2ARGS_5_2(what,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_1(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_3(what,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_2(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_4(what,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_3(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_5(what,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_4(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_6(what,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_5(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_7(what,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_6(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_8(what,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_7(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_9(what,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_8(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_10(what,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_9(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_11(what,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_10(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_12(what,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_11(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_2ARGS_5_12,_FOR_EACH_2ARGS_5_12,_FOR_EACH_2ARGS_5_12,_FOR_EACH_2ARGS_5_12,_FOR_EACH_2ARGS_5_12,_FOR_EACH_2ARGS_5_11,_FOR_EACH_2ARGS_5_11,_FOR_EACH_2ARGS_5_11,_FOR_EACH_2ARGS_5_11,_FOR_EACH_2ARGS_5_11,_FOR_EACH_2ARGS_5_10,_FOR_EACH_2ARGS_5_10,_FOR_EACH_2ARGS_5_10,_FOR_EACH_2ARGS_5_10,_FOR_EACH_2ARGS_5_10,_FOR_EACH_2ARGS_5_9,_FOR_EACH_2ARGS_5_9,_FOR_EACH_2ARGS_5_9,_FOR_EACH_2ARGS_5_9,_FOR_EACH_2ARGS_5_9,_FOR_EACH_2ARGS_5_8,_FOR_EACH_2ARGS_5_8,_FOR_EACH_2ARGS_5_8,_FOR_EACH_2ARGS_5_8,_FOR_EACH_2ARGS_5_8,_FOR_EACH_2ARGS_5_7,_FOR_EACH_2ARGS_5_7,_FOR_EACH_2ARGS_5_7,_FOR_EACH_2ARGS_5_7,_FOR_EACH_2ARGS_5_7,_FOR_EACH_2ARGS_5_6,_FOR_EACH_2ARGS_5_6,_FOR_EACH_2ARGS_5_6,_FOR_EACH_2ARGS_5_6,_FOR_EACH_2ARGS_5_6,_FOR_EACH_2ARGS_5_5,_FOR_EACH_2ARGS_5_5,_FOR_EACH_2ARGS_5_5,_FOR_EACH_2ARGS_5_5,_FOR_EACH_2ARGS_5_5,_FOR_EACH_2ARGS_5_4,_FOR_EACH_2ARGS_5_4,_FOR_EACH_2ARGS_5_4,_FOR_EACH_2ARGS_5_4,_FOR_EACH_2ARGS_5_4,_FOR_EACH_2ARGS_5_3,_FOR_EACH_2ARGS_5_3,_FOR_EACH_2ARGS_5_3,_FOR_EACH_2ARGS_5_3,_FOR_EACH_2ARGS_5_3,_FOR_EACH_2ARGS_5_2,_FOR_EACH_2ARGS_5_2,_FOR_EACH_2ARGS_5_2,_FOR_EACH_2ARGS_5_2,_FOR_EACH_2ARGS_5_2,_FOR_EACH_2ARGS_5_1,_FOR_EACH_2ARGS_5_1,_FOR_EACH_2ARGS_5_1,_FOR_EACH_2ARGS_5_1,_FOR_EACH_2ARGS_5_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_2ARGS_5: Apply the action 'what' to a sequence of elements.
//   a0,a1: Static arguments that are passed into the action.
//   Loop: Each iteration processes 5 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_2ARGS_5(what,a0,a1,...) EXPAND(_FOR_EACH_2ARGS_5_SELECT(__VA_ARGS__)(what,a0,a1,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_2ARGS_5_COUNT_1(what,i,a0,a1,x0,x1,x2,x3,x4) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4))
#define _FOR_EACH_2ARGS_5_COUNT_2(what,i,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_COUNT_1(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_COUNT_3(what,i,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_COUNT_2(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_COUNT_4(what,i,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_COUNT_3(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_COUNT_5(what,i,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_COUNT_4(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_COUNT_6(what,i,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_COUNT_5(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_COUNT_7(what,i,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_COUNT_6(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_COUNT_8(what,i,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_COUNT_7(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_COUNT_9(what,i,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_COUNT_8(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_COUNT_10(what,i,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_COUNT_9(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_COUNT_11(what,i,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_COUNT_10(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_COUNT_12(what,i,a0,a1,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4) _FOR_EACH_2ARGS_5_COUNT_11(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_5_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_2ARGS_5_COUNT_12,_FOR_EACH_2ARGS_5_COUNT_12,_FOR_EACH_2ARGS_5_COUNT_12,_FOR_EACH_2ARGS_5_COUNT_12,_FOR_EACH_2ARGS_5_COUNT_12,_FOR_EACH_2ARGS_5_COUNT_11,_FOR_EACH_2ARGS_5_COUNT_11,_FOR_EACH_2ARGS_5_COUNT_11,_FOR_EACH_2ARGS_5_COUNT_11,_FOR_EACH_2ARGS_5_COUNT_11,_FOR_EACH_2ARGS_5_COUNT_10,_FOR_EACH_2ARGS_5_COUNT_10,_FOR_EACH_2ARGS_5_COUNT_10,_FOR_EACH_2ARGS_5_COUNT_10,_FOR_EACH_2ARGS_5_COUNT_10,_FOR_EACH_2ARGS_5_COUNT_9,_FOR_EACH_2ARGS_5_COUNT_9,_FOR_EACH_2ARGS_5_COUNT_9,_FOR_EACH_2ARGS_5_COUNT_9,_FOR_EACH_2ARGS_5_COUNT_9,_FOR_EACH_2ARGS_5_COUNT_8,_FOR_EACH_2ARGS_5_COUNT_8,_FOR_EACH_2ARGS_5_COUNT_8,_FOR_EACH_2ARGS_5_COUNT_8,_FOR_EACH_2ARGS_5_COUNT_8,_FOR_EACH_2ARGS_5_COUNT_7,_FOR_EACH_2ARGS_5_COUNT_7,_FOR_EACH_2ARGS_5_COUNT_7,_FOR_EACH_2ARGS_5_COUNT_7,_FOR_EACH_2ARGS_5_COUNT_7,_FOR_EACH_2ARGS_5_COUNT_6,_FOR_EACH_2ARGS_5_COUNT_6,_FOR_EACH_2ARGS_5_COUNT_6,_FOR_EACH_2ARGS_5_COUNT_6,_FOR_EACH_2ARGS_5_COUNT_6,_FOR_EACH_2ARGS_5_COUNT_5,_FOR_EACH_2ARGS_5_COUNT_5,_FOR_EACH_2ARGS_5_COUNT_5,_FOR_EACH_2ARGS_5_COUNT_5,_FOR_EACH_2ARGS_5_COUNT_5,_FOR_EACH_2ARGS_5_COUNT_4,_FOR_EACH_2ARGS_5_COUNT_4,_FOR_EACH_2ARGS_5_COUNT_4,_FOR_EACH_2ARGS_5_COUNT_4,_FOR_EACH_2ARGS_5_COUNT_4,_FOR_EACH_2ARGS_5_COUNT_3,_FOR_EACH_2ARGS_5_COUNT_3,_FOR_EACH_2ARGS_5_COUNT_3,_FOR_EACH_2ARGS_5_COUNT_3,_FOR_EACH_2ARGS_5_COUNT_3,_FOR_EACH_2ARGS_5_COUNT_2,_FOR_EACH_2ARGS_5_COUNT_2,_FOR_EACH_2ARGS_5_COUNT_2,_FOR_EACH_2ARGS_5_COUNT_2,_FOR_EACH_2ARGS_5_COUNT_2,_FOR_EACH_2ARGS_5_COUNT_1,_FOR_EACH_2ARGS_5_COUNT_1,_FOR_EACH_2ARGS_5_COUNT_1,_FOR_EACH_2ARGS_5_COUNT_1,_FOR_EACH_2ARGS_5_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_2ARGS_5_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0,a1: Static arguments that are passed into the action.
//   Loop: Each iteration processes 5 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_2ARGS_5_COUNT(what,a0,a1,...) EXPAND(_FOR_EACH_2ARGS_5_COUNT_SELECT(__VA_ARGS__)(what,0,a0,a1,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_3ARGS_5_1(what,a0,a1,a2,x0,x1,x2,x3,x4) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4))
#define _FOR_EACH_3ARGS_5_2(what,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_1(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_3(what,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_2(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_4(what,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_3(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_5(what,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_4(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_6(what,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_5(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_7(what,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_6(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_8(what,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_7(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_9(what,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_8(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_10(what,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_9(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_11(what,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_10(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_12(what,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_11(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_3ARGS_5_12,_FOR_EACH_3ARGS_5_12,_FOR_EACH_3ARGS_5_12,_FOR_EACH_3ARGS_5_12,_FOR_EACH_3ARGS_5_12,_FOR_EACH_3ARGS_5_11,_FOR_EACH_3ARGS_5_11,_FOR_EACH_3ARGS_5_11,_FOR_EACH_3ARGS_5_11,_FOR_EACH_3ARGS_5_11,_FOR_EACH_3ARGS_5_10,_FOR_EACH_3ARGS_5_10,_FOR_EACH_3ARGS_5_10,_FOR_EACH_3ARGS_5_10,_FOR_EACH_3ARGS_5_10,_FOR_EACH_3ARGS_5_9,_FOR_EACH_3ARGS_5_9,_FOR_EACH_3ARGS_5_9,_FOR_EACH_3ARGS_5_9,_FOR_EACH_3ARGS_5_9,_FOR_EACH_3ARGS_5_8,_FOR_EACH_3ARGS_5_8,_FOR_EACH_3ARGS_5_8,_FOR_EACH_3ARGS_5_8,_FOR_EACH_3ARGS_5_8,_FOR_EACH_3ARGS_5_7,_FOR_EACH_3ARGS_5_7,_FOR_EACH_3ARGS_5_7,_FOR_EACH_3ARGS_5_7,_FOR_EACH_3ARGS_5_7,_FOR_EACH_3ARGS_5_6,_FOR_EACH_3ARGS_5_6,_FOR_EACH_3ARGS_5_6,_FOR_EACH_3ARGS_5_6,_FOR_EACH_3ARGS_5_6,_FOR_EACH_3ARGS_5_5,_FOR_EACH_3ARGS_5_5,_FOR_EACH_3ARGS_5_5,_FOR_EACH_3ARGS_5_5,_FOR_EACH_3ARGS_5_5,_FOR_EACH_3ARGS_5_4,_FOR_EACH_3ARGS_5_4,_FOR_EACH_3ARGS_5_4,_FOR_EACH_3ARGS_5_4,_FOR_EACH_3ARGS_5_4,_FOR_EACH_3ARGS_5_3,_FOR_EACH_3ARGS_5_3,_FOR_EACH_3ARGS_5_3,_FOR_EACH_3ARGS_5_3,_FOR_EACH_3ARGS_5_3,_FOR_EACH_3ARGS_5_2,_FOR_EACH_3ARGS_5_2,_FOR_EACH_3ARGS_5_2,_FOR_EACH_3ARGS_5_2,_FOR_EACH_3ARGS_5_2,_FOR_EACH_3ARGS_5_1,_FOR_EACH_3ARGS_5_1,_FOR_EACH_3ARGS_5_1,_FOR_EACH_3ARGS_5_1,_FOR_EACH_3ARGS_5_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_3ARGS_5: Apply the action 'what' to a sequence of elements.
//   a0,a1,a2: Static arguments that are passed into the action.
//   Loop: Each iteration processes 5 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_3ARGS_5(what,a0,a1,a2,...) EXPAND(_FOR_EACH_3ARGS_5_SELECT(__VA_ARGS__)(what,a0,a1,a2,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_3ARGS_5_COUNT_1(what,i,a0,a1,a2,x0,x1,x2,x3,x4) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4))
#define _FOR_EACH_3ARGS_5_COUNT_2(what,i,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_COUNT_1(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_COUNT_3(what,i,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_COUNT_2(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_COUNT_4(what,i,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_COUNT_3(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_COUNT_5(what,i,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_COUNT_4(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_COUNT_6(what,i,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_COUNT_5(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_COUNT_7(what,i,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_COUNT_6(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_COUNT_8(what,i,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_COUNT_7(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_COUNT_9(what,i,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_COUNT_8(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_COUNT_10(what,i,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_COUNT_9(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_COUNT_11(what,i,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_COUNT_10(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_COUNT_12(what,i,a0,a1,a2,x0,x1,x2,x3,x4,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4) _FOR_EACH_3ARGS_5_COUNT_11(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_5_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_3ARGS_5_COUNT_12,_FOR_EACH_3ARGS_5_COUNT_12,_FOR_EACH_3ARGS_5_COUNT_12,_FOR_EACH_3ARGS_5_COUNT_12,_FOR_EACH_3ARGS_5_COUNT_12,_FOR_EACH_3ARGS_5_COUNT_11,_FOR_EACH_3ARGS_5_COUNT_11,_FOR_EACH_3ARGS_5_COUNT_11,_FOR_EACH_3ARGS_5_COUNT_11,_FOR_EACH_3ARGS_5_COUNT_11,_FOR_EACH_3ARGS_5_COUNT_10,_FOR_EACH_3ARGS_5_COUNT_10,_FOR_EACH_3ARGS_5_COUNT_10,_FOR_EACH_3ARGS_5_COUNT_10,_FOR_EACH_3ARGS_5_COUNT_10,_FOR_EACH_3ARGS_5_COUNT_9,_FOR_EACH_3ARGS_5_COUNT_9,_FOR_EACH_3ARGS_5_COUNT_9,_FOR_EACH_3ARGS_5_COUNT_9,_FOR_EACH_3ARGS_5_COUNT_9,_FOR_EACH_3ARGS_5_COUNT_8,_FOR_EACH_3ARGS_5_COUNT_8,_FOR_EACH_3ARGS_5_COUNT_8,_FOR_EACH_3ARGS_5_COUNT_8,_FOR_EACH_3ARGS_5_COUNT_8,_FOR_EACH_3ARGS_5_COUNT_7,_FOR_EACH_3ARGS_5_COUNT_7,_FOR_EACH_3ARGS_5_COUNT_7,_FOR_EACH_3ARGS_5_COUNT_7,_FOR_EACH_3ARGS_5_COUNT_7,_FOR_EACH_3ARGS_5_COUNT_6,_FOR_EACH_3ARGS_5_COUNT_6,_FOR_EACH_3ARGS_5_COUNT_6,_FOR_EACH_3ARGS_5_COUNT_6,_FOR_EACH_3ARGS_5_COUNT_6,_FOR_EACH_3ARGS_5_COUNT_5,_FOR_EACH_3ARGS_5_COUNT_5,_FOR_EACH_3ARGS_5_COUNT_5,_FOR_EACH_3ARGS_5_COUNT_5,_FOR_EACH_3ARGS_5_COUNT_5,_FOR_EACH_3ARGS_5_COUNT_4,_FOR_EACH_3ARGS_5_COUNT_4,_FOR_EACH_3ARGS_5_COUNT_4,_FOR_EACH_3ARGS_5_COUNT_4,_FOR_EACH_3ARGS_5_COUNT_4,_FOR_EACH_3ARGS_5_COUNT_3,_FOR_EACH_3ARGS_5_COUNT_3,_FOR_EACH_3ARGS_5_COUNT_3,_FOR_EACH_3ARGS_5_COUNT_3,_FOR_EACH_3ARGS_5_COUNT_3,_FOR_EACH_3ARGS_5_COUNT_2,_FOR_EACH_3ARGS_5_COUNT_2,_FOR_EACH_3ARGS_5_COUNT_2,_FOR_EACH_3ARGS_5_COUNT_2,_FOR_EACH_3ARGS_5_COUNT_2,_FOR_EACH_3ARGS_5_COUNT_1,_FOR_EACH_3ARGS_5_COUNT_1,_FOR_EACH_3ARGS_5_COUNT_1,_FOR_EACH_3ARGS_5_COUNT_1,_FOR_EACH_3ARGS_5_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_3ARGS_5_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0,a1,a2: Static arguments that are passed into the action.
//   Loop: Each iteration processes 5 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_3ARGS_5_COUNT(what,a0,a1,a2,...) EXPAND(_FOR_EACH_3ARGS_5_COUNT_SELECT(__VA_ARGS__)(what,0,a0,a1,a2,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_6_1(what,x0,x1,x2,x3,x4,x5) EXPAND(what(x0,x1,x2,x3,x4,x5))
#define _FOR_EACH_6_2(what,x0,x1,x2,x3,x4,x5,...) EXPAND(what(x0,x1,x2,x3,x4,x5) _FOR_EACH_6_1(what,__VA_ARGS__))
#define _FOR_EACH_6_3(what,x0,x1,x2,x3,x4,x5,...) EXPAND(what(x0,x1,x2,x3,x4,x5) _FOR_EACH_6_2(what,__VA_ARGS__))
#define _FOR_EACH_6_4(what,x0,x1,x2,x3,x4,x5,...) EXPAND(what(x0,x1,x2,x3,x4,x5) _FOR_EACH_6_3(what,__VA_ARGS__))
#define _FOR_EACH_6_5(what,x0,x1,x2,x3,x4,x5,...) EXPAND(what(x0,x1,x2,x3,x4,x5) _FOR_EACH_6_4(what,__VA_ARGS__))
#define _FOR_EACH_6_6(what,x0,x1,x2,x3,x4,x5,...) EXPAND(what(x0,x1,x2,x3,x4,x5) _FOR_EACH_6_5(what,__VA_ARGS__))
#define _FOR_EACH_6_7(what,x0,x1,x2,x3,x4,x5,...) EXPAND(what(x0,x1,x2,x3,x4,x5) _FOR_EACH_6_6(what,__VA_ARGS__))
#define _FOR_EACH_6_8(what,x0,x1,x2,x3,x4,x5,...) EXPAND(what(x0,x1,x2,x3,x4,x5) _FOR_EACH_6_7(what,__VA_ARGS__))
#define _FOR_EACH_6_9(what,x0,x1,x2,x3,x4,x5,...) EXPAND(what(x0,x1,x2,x3,x4,x5) _FOR_EACH_6_8(what,__VA_ARGS__))
#define _FOR_EACH_6_10(what,x0,x1,x2,x3,x4,x5,...) EXPAND(what(x0,x1,x2,x3,x4,x5) _FOR_EACH_6_9(what,__VA_ARGS__))
#define _FOR_EACH_6_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_6_10,_FOR_EACH_6_10,_FOR_EACH_6_10,_FOR_EACH_6_10,_FOR_EACH_6_10,_FOR_EACH_6_10,_FOR_EACH_6_9,_FOR_EACH_6_9,_FOR_EACH_6_9,_FOR_EACH_6_9,_FOR_EACH_6_9,_FOR_EACH_6_9,_FOR_EACH_6_8,_FOR_EACH_6_8,_FOR_EACH_6_8,_FOR_EACH_6_8,_FOR_EACH_6_8,_FOR_EACH_6_8,_FOR_EACH_6_7,_FOR_EACH_6_7,_FOR_EACH_6_7,_FOR_EACH_6_7,_FOR_EACH_6_7,_FOR_EACH_6_7,_FOR_EACH_6_6,_FOR_EACH_6_6,_FOR_EACH_6_6,_FOR_EACH_6_6,_FOR_EACH_6_6,_FOR_EACH_6_6,_FOR_EACH_6_5,_FOR_EACH_6_5,_FOR_EACH_6_5,_FOR_EACH_6_5,_FOR_EACH_6_5,_FOR_EACH_6_5,_FOR_EACH_6_4,_FOR_EACH_6_4,_FOR_EACH_6_4,_FOR_EACH_6_4,_FOR_EACH_6_4,_FOR_EACH_6_4,_FOR_EACH_6_3,_FOR_EACH_6_3,_FOR_EACH_6_3,_FOR_EACH_6_3,_FOR_EACH_6_3,_FOR_EACH_6_3,_FOR_EACH_6_2,_FOR_EACH_6_2,_FOR_EACH_6_2,_FOR_EACH_6_2,_FOR_EACH_6_2,_FOR_EACH_6_2,_FOR_EACH_6_1,_FOR_EACH_6_1,_FOR_EACH_6_1,_FOR_EACH_6_1,_FOR_EACH_6_1,_FOR_EACH_6_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_6: Apply the action 'what' to a sequence of elements.
//   Loop: Each iteration processes 6 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_6(what,...) EXPAND(_FOR_EACH_6_SELECT(__VA_ARGS__)(what,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_6_COUNT_1(what,i,x0,x1,x2,x3,x4,x5) EXPAND(what(i,x0,x1,x2,x3,x4,x5))
#define _FOR_EACH_6_COUNT_2(what,i,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,x0,x1,x2,x3,x4,x5) _FOR_EACH_6_COUNT_1(what,i+1,__VA_ARGS__))
#define _FOR_EACH_6_COUNT_3(what,i,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,x0,x1,x2,x3,x4,x5) _FOR_EACH_6_COUNT_2(what,i+1,__VA_ARGS__))
#define _FOR_EACH_6_COUNT_4(what,i,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,x0,x1,x2,x3,x4,x5) _FOR_EACH_6_COUNT_3(what,i+1,__VA_ARGS__))
#define _FOR_EACH_6_COUNT_5(what,i,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,x0,x1,x2,x3,x4,x5) _FOR_EACH_6_COUNT_4(what,i+1,__VA_ARGS__))
#define _FOR_EACH_6_COUNT_6(what,i,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,x0,x1,x2,x3,x4,x5) _FOR_EACH_6_COUNT_5(what,i+1,__VA_ARGS__))
#define _FOR_EACH_6_COUNT_7(what,i,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,x0,x1,x2,x3,x4,x5) _FOR_EACH_6_COUNT_6(what,i+1,__VA_ARGS__))
#define _FOR_EACH_6_COUNT_8(what,i,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,x0,x1,x2,x3,x4,x5) _FOR_EACH_6_COUNT_7(what,i+1,__VA_ARGS__))
#define _FOR_EACH_6_COUNT_9(what,i,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,x0,x1,x2,x3,x4,x5) _FOR_EACH_6_COUNT_8(what,i+1,__VA_ARGS__))
#define _FOR_EACH_6_COUNT_10(what,i,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,x0,x1,x2,x3,x4,x5) _FOR_EACH_6_COUNT_9(what,i+1,__VA_ARGS__))
#define _FOR_EACH_6_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_6_COUNT_10,_FOR_EACH_6_COUNT_10,_FOR_EACH_6_COUNT_10,_FOR_EACH_6_COUNT_10,_FOR_EACH_6_COUNT_10,_FOR_EACH_6_COUNT_10,_FOR_EACH_6_COUNT_9,_FOR_EACH_6_COUNT_9,_FOR_EACH_6_COUNT_9,_FOR_EACH_6_COUNT_9,_FOR_EACH_6_COUNT_9,_FOR_EACH_6_COUNT_9,_FOR_EACH_6_COUNT_8,_FOR_EACH_6_COUNT_8,_FOR_EACH_6_COUNT_8,_FOR_EACH_6_COUNT_8,_FOR_EACH_6_COUNT_8,_FOR_EACH_6_COUNT_8,_FOR_EACH_6_COUNT_7,_FOR_EACH_6_COUNT_7,_FOR_EACH_6_COUNT_7,_FOR_EACH_6_COUNT_7,_FOR_EACH_6_COUNT_7,_FOR_EACH_6_COUNT_7,_FOR_EACH_6_COUNT_6,_FOR_EACH_6_COUNT_6,_FOR_EACH_6_COUNT_6,_FOR_EACH_6_COUNT_6,_FOR_EACH_6_COUNT_6,_FOR_EACH_6_COUNT_6,_FOR_EACH_6_COUNT_5,_FOR_EACH_6_COUNT_5,_FOR_EACH_6_COUNT_5,_FOR_EACH_6_COUNT_5,_FOR_EACH_6_COUNT_5,_FOR_EACH_6_COUNT_5,_FOR_EACH_6_COUNT_4,_FOR_EACH_6_COUNT_4,_FOR_EACH_6_COUNT_4,_FOR_EACH_6_COUNT_4,_FOR_EACH_6_COUNT_4,_FOR_EACH_6_COUNT_4,_FOR_EACH_6_COUNT_3,_FOR_EACH_6_COUNT_3,_FOR_EACH_6_COUNT_3,_FOR_EACH_6_COUNT_3,_FOR_EACH_6_COUNT_3,_FOR_EACH_6_COUNT_3,_FOR_EACH_6_COUNT_2,_FOR_EACH_6_COUNT_2,_FOR_EACH_6_COUNT_2,_FOR_EACH_6_COUNT_2,_FOR_EACH_6_COUNT_2,_FOR_EACH_6_COUNT_2,_FOR_EACH_6_COUNT_1,_FOR_EACH_6_COUNT_1,_FOR_EACH_6_COUNT_1,_FOR_EACH_6_COUNT_1,_FOR_EACH_6_COUNT_1,_FOR_EACH_6_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_6_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   Loop: Each iteration processes 6 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_6_COUNT(what,...) EXPAND(_FOR_EACH_6_COUNT_SELECT(__VA_ARGS__)(what,0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_1ARG_6_1(what,a0,x0,x1,x2,x3,x4,x5) EXPAND(what(a0,x0,x1,x2,x3,x4,x5))
#define _FOR_EACH_1ARG_6_2(what,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_1(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_3(what,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_2(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_4(what,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_3(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_5(what,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_4(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_6(what,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_5(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_7(what,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_6(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_8(what,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_7(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_9(what,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_8(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_10(what,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_9(what,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_1ARG_6_10,_FOR_EACH_1ARG_6_10,_FOR_EACH_1ARG_6_10,_FOR_EACH_1ARG_6_10,_FOR_EACH_1ARG_6_10,_FOR_EACH_1ARG_6_10,_FOR_EACH_1ARG_6_9,_FOR_EACH_1ARG_6_9,_FOR_EACH_1ARG_6_9,_FOR_EACH_1ARG_6_9,_FOR_EACH_1ARG_6_9,_FOR_EACH_1ARG_6_9,_FOR_EACH_1ARG_6_8,_FOR_EACH_1ARG_6_8,_FOR_EACH_1ARG_6_8,_FOR_EACH_1ARG_6_8,_FOR_EACH_1ARG_6_8,_FOR_EACH_1ARG_6_8,_FOR_EACH_1ARG_6_7,_FOR_EACH_1ARG_6_7,_FOR_EACH_1ARG_6_7,_FOR_EACH_1ARG_6_7,_FOR_EACH_1ARG_6_7,_FOR_EACH_1ARG_6_7,_FOR_EACH_1ARG_6_6,_FOR_EACH_1ARG_6_6,_FOR_EACH_1ARG_6_6,_FOR_EACH_1ARG_6_6,_FOR_EACH_1ARG_6_6,_FOR_EACH_1ARG_6_6,_FOR_EACH_1ARG_6_5,_FOR_EACH_1ARG_6_5,_FOR_EACH_1ARG_6_5,_FOR_EACH_1ARG_6_5,_FOR_EACH_1ARG_6_5,_FOR_EACH_1ARG_6_5,_FOR_EACH_1ARG_6_4,_FOR_EACH_1ARG_6_4,_FOR_EACH_1ARG_6_4,_FOR_EACH_1ARG_6_4,_FOR_EACH_1ARG_6_4,_FOR_EACH_1ARG_6_4,_FOR_EACH_1ARG_6_3,_FOR_EACH_1ARG_6_3,_FOR_EACH_1ARG_6_3,_FOR_EACH_1ARG_6_3,_FOR_EACH_1ARG_6_3,_FOR_EACH_1ARG_6_3,_FOR_EACH_1ARG_6_2,_FOR_EACH_1ARG_6_2,_FOR_EACH_1ARG_6_2,_FOR_EACH_1ARG_6_2,_FOR_EACH_1ARG_6_2,_FOR_EACH_1ARG_6_2,_FOR_EACH_1ARG_6_1,_FOR_EACH_1ARG_6_1,_FOR_EACH_1ARG_6_1,_FOR_EACH_1ARG_6_1,_FOR_EACH_1ARG_6_1,_FOR_EACH_1ARG_6_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_1ARG_6: Apply the action 'what' to a sequence of elements.
//   a0: Static arguments that are passed into the action.
//   Loop: Each iteration processes 6 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_1ARG_6(what,a0,...) EXPAND(_FOR_EACH_1ARG_6_SELECT(__VA_ARGS__)(what,a0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_1ARG_6_COUNT_1(what,i,a0,x0,x1,x2,x3,x4,x5) EXPAND(what(i,a0,x0,x1,x2,x3,x4,x5))
#define _FOR_EACH_1ARG_6_COUNT_2(what,i,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_COUNT_1(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_COUNT_3(what,i,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_COUNT_2(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_COUNT_4(what,i,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_COUNT_3(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_COUNT_5(what,i,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_COUNT_4(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_COUNT_6(what,i,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_COUNT_5(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_COUNT_7(what,i,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_COUNT_6(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_COUNT_8(what,i,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_COUNT_7(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_COUNT_9(what,i,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_COUNT_8(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_COUNT_10(what,i,a0,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,x0,x1,x2,x3,x4,x5) _FOR_EACH_1ARG_6_COUNT_9(what,i+1,a0,__VA_ARGS__))
#define _FOR_EACH_1ARG_6_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_1ARG_6_COUNT_10,_FOR_EACH_1ARG_6_COUNT_10,_FOR_EACH_1ARG_6_COUNT_10,_FOR_EACH_1ARG_6_COUNT_10,_FOR_EACH_1ARG_6_COUNT_10,_FOR_EACH_1ARG_6_COUNT_10,_FOR_EACH_1ARG_6_COUNT_9,_FOR_EACH_1ARG_6_COUNT_9,_FOR_EACH_1ARG_6_COUNT_9,_FOR_EACH_1ARG_6_COUNT_9,_FOR_EACH_1ARG_6_COUNT_9,_FOR_EACH_1ARG_6_COUNT_9,_FOR_EACH_1ARG_6_COUNT_8,_FOR_EACH_1ARG_6_COUNT_8,_FOR_EACH_1ARG_6_COUNT_8,_FOR_EACH_1ARG_6_COUNT_8,_FOR_EACH_1ARG_6_COUNT_8,_FOR_EACH_1ARG_6_COUNT_8,_FOR_EACH_1ARG_6_COUNT_7,_FOR_EACH_1ARG_6_COUNT_7,_FOR_EACH_1ARG_6_COUNT_7,_FOR_EACH_1ARG_6_COUNT_7,_FOR_EACH_1ARG_6_COUNT_7,_FOR_EACH_1ARG_6_COUNT_7,_FOR_EACH_1ARG_6_COUNT_6,_FOR_EACH_1ARG_6_COUNT_6,_FOR_EACH_1ARG_6_COUNT_6,_FOR_EACH_1ARG_6_COUNT_6,_FOR_EACH_1ARG_6_COUNT_6,_FOR_EACH_1ARG_6_COUNT_6,_FOR_EACH_1ARG_6_COUNT_5,_FOR_EACH_1ARG_6_COUNT_5,_FOR_EACH_1ARG_6_COUNT_5,_FOR_EACH_1ARG_6_COUNT_5,_FOR_EACH_1ARG_6_COUNT_5,_FOR_EACH_1ARG_6_COUNT_5,_FOR_EACH_1ARG_6_COUNT_4,_FOR_EACH_1ARG_6_COUNT_4,_FOR_EACH_1ARG_6_COUNT_4,_FOR_EACH_1ARG_6_COUNT_4,_FOR_EACH_1ARG_6_COUNT_4,_FOR_EACH_1ARG_6_COUNT_4,_FOR_EACH_1ARG_6_COUNT_3,_FOR_EACH_1ARG_6_COUNT_3,_FOR_EACH_1ARG_6_COUNT_3,_FOR_EACH_1ARG_6_COUNT_3,_FOR_EACH_1ARG_6_COUNT_3,_FOR_EACH_1ARG_6_COUNT_3,_FOR_EACH_1ARG_6_COUNT_2,_FOR_EACH_1ARG_6_COUNT_2,_FOR_EACH_1ARG_6_COUNT_2,_FOR_EACH_1ARG_6_COUNT_2,_FOR_EACH_1ARG_6_COUNT_2,_FOR_EACH_1ARG_6_COUNT_2,_FOR_EACH_1ARG_6_COUNT_1,_FOR_EACH_1ARG_6_COUNT_1,_FOR_EACH_1ARG_6_COUNT_1,_FOR_EACH_1ARG_6_COUNT_1,_FOR_EACH_1ARG_6_COUNT_1,_FOR_EACH_1ARG_6_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_1ARG_6_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0: Static arguments that are passed into the action.
//   Loop: Each iteration processes 6 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_1ARG_6_COUNT(what,a0,...) EXPAND(_FOR_EACH_1ARG_6_COUNT_SELECT(__VA_ARGS__)(what,0,a0,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_2ARGS_6_1(what,a0,a1,x0,x1,x2,x3,x4,x5) EXPAND(what(a0,a1,x0,x1,x2,x3,x4,x5))
#define _FOR_EACH_2ARGS_6_2(what,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_1(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_3(what,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_2(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_4(what,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_3(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_5(what,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_4(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_6(what,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_5(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_7(what,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_6(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_8(what,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_7(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_9(what,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_8(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_10(what,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_9(what,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_2ARGS_6_10,_FOR_EACH_2ARGS_6_10,_FOR_EACH_2ARGS_6_10,_FOR_EACH_2ARGS_6_10,_FOR_EACH_2ARGS_6_10,_FOR_EACH_2ARGS_6_10,_FOR_EACH_2ARGS_6_9,_FOR_EACH_2ARGS_6_9,_FOR_EACH_2ARGS_6_9,_FOR_EACH_2ARGS_6_9,_FOR_EACH_2ARGS_6_9,_FOR_EACH_2ARGS_6_9,_FOR_EACH_2ARGS_6_8,_FOR_EACH_2ARGS_6_8,_FOR_EACH_2ARGS_6_8,_FOR_EACH_2ARGS_6_8,_FOR_EACH_2ARGS_6_8,_FOR_EACH_2ARGS_6_8,_FOR_EACH_2ARGS_6_7,_FOR_EACH_2ARGS_6_7,_FOR_EACH_2ARGS_6_7,_FOR_EACH_2ARGS_6_7,_FOR_EACH_2ARGS_6_7,_FOR_EACH_2ARGS_6_7,_FOR_EACH_2ARGS_6_6,_FOR_EACH_2ARGS_6_6,_FOR_EACH_2ARGS_6_6,_FOR_EACH_2ARGS_6_6,_FOR_EACH_2ARGS_6_6,_FOR_EACH_2ARGS_6_6,_FOR_EACH_2ARGS_6_5,_FOR_EACH_2ARGS_6_5,_FOR_EACH_2ARGS_6_5,_FOR_EACH_2ARGS_6_5,_FOR_EACH_2ARGS_6_5,_FOR_EACH_2ARGS_6_5,_FOR_EACH_2ARGS_6_4,_FOR_EACH_2ARGS_6_4,_FOR_EACH_2ARGS_6_4,_FOR_EACH_2ARGS_6_4,_FOR_EACH_2ARGS_6_4,_FOR_EACH_2ARGS_6_4,_FOR_EACH_2ARGS_6_3,_FOR_EACH_2ARGS_6_3,_FOR_EACH_2ARGS_6_3,_FOR_EACH_2ARGS_6_3,_FOR_EACH_2ARGS_6_3,_FOR_EACH_2ARGS_6_3,_FOR_EACH_2ARGS_6_2,_FOR_EACH_2ARGS_6_2,_FOR_EACH_2ARGS_6_2,_FOR_EACH_2ARGS_6_2,_FOR_EACH_2ARGS_6_2,_FOR_EACH_2ARGS_6_2,_FOR_EACH_2ARGS_6_1,_FOR_EACH_2ARGS_6_1,_FOR_EACH_2ARGS_6_1,_FOR_EACH_2ARGS_6_1,_FOR_EACH_2ARGS_6_1,_FOR_EACH_2ARGS_6_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_2ARGS_6: Apply the action 'what' to a sequence of elements.
//   a0,a1: Static arguments that are passed into the action.
//   Loop: Each iteration processes 6 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_2ARGS_6(what,a0,a1,...) EXPAND(_FOR_EACH_2ARGS_6_SELECT(__VA_ARGS__)(what,a0,a1,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_2ARGS_6_COUNT_1(what,i,a0,a1,x0,x1,x2,x3,x4,x5) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4,x5))
#define _FOR_EACH_2ARGS_6_COUNT_2(what,i,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_COUNT_1(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_COUNT_3(what,i,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_COUNT_2(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_COUNT_4(what,i,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_COUNT_3(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_COUNT_5(what,i,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_COUNT_4(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_COUNT_6(what,i,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_COUNT_5(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_COUNT_7(what,i,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_COUNT_6(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_COUNT_8(what,i,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_COUNT_7(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_COUNT_9(what,i,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_COUNT_8(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_COUNT_10(what,i,a0,a1,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,x0,x1,x2,x3,x4,x5) _FOR_EACH_2ARGS_6_COUNT_9(what,i+1,a0,a1,__VA_ARGS__))
#define _FOR_EACH_2ARGS_6_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_2ARGS_6_COUNT_10,_FOR_EACH_2ARGS_6_COUNT_10,_FOR_EACH_2ARGS_6_COUNT_10,_FOR_EACH_2ARGS_6_COUNT_10,_FOR_EACH_2ARGS_6_COUNT_10,_FOR_EACH_2ARGS_6_COUNT_10,_FOR_EACH_2ARGS_6_COUNT_9,_FOR_EACH_2ARGS_6_COUNT_9,_FOR_EACH_2ARGS_6_COUNT_9,_FOR_EACH_2ARGS_6_COUNT_9,_FOR_EACH_2ARGS_6_COUNT_9,_FOR_EACH_2ARGS_6_COUNT_9,_FOR_EACH_2ARGS_6_COUNT_8,_FOR_EACH_2ARGS_6_COUNT_8,_FOR_EACH_2ARGS_6_COUNT_8,_FOR_EACH_2ARGS_6_COUNT_8,_FOR_EACH_2ARGS_6_COUNT_8,_FOR_EACH_2ARGS_6_COUNT_8,_FOR_EACH_2ARGS_6_COUNT_7,_FOR_EACH_2ARGS_6_COUNT_7,_FOR_EACH_2ARGS_6_COUNT_7,_FOR_EACH_2ARGS_6_COUNT_7,_FOR_EACH_2ARGS_6_COUNT_7,_FOR_EACH_2ARGS_6_COUNT_7,_FOR_EACH_2ARGS_6_COUNT_6,_FOR_EACH_2ARGS_6_COUNT_6,_FOR_EACH_2ARGS_6_COUNT_6,_FOR_EACH_2ARGS_6_COUNT_6,_FOR_EACH_2ARGS_6_COUNT_6,_FOR_EACH_2ARGS_6_COUNT_6,_FOR_EACH_2ARGS_6_COUNT_5,_FOR_EACH_2ARGS_6_COUNT_5,_FOR_EACH_2ARGS_6_COUNT_5,_FOR_EACH_2ARGS_6_COUNT_5,_FOR_EACH_2ARGS_6_COUNT_5,_FOR_EACH_2ARGS_6_COUNT_5,_FOR_EACH_2ARGS_6_COUNT_4,_FOR_EACH_2ARGS_6_COUNT_4,_FOR_EACH_2ARGS_6_COUNT_4,_FOR_EACH_2ARGS_6_COUNT_4,_FOR_EACH_2ARGS_6_COUNT_4,_FOR_EACH_2ARGS_6_COUNT_4,_FOR_EACH_2ARGS_6_COUNT_3,_FOR_EACH_2ARGS_6_COUNT_3,_FOR_EACH_2ARGS_6_COUNT_3,_FOR_EACH_2ARGS_6_COUNT_3,_FOR_EACH_2ARGS_6_COUNT_3,_FOR_EACH_2ARGS_6_COUNT_3,_FOR_EACH_2ARGS_6_COUNT_2,_FOR_EACH_2ARGS_6_COUNT_2,_FOR_EACH_2ARGS_6_COUNT_2,_FOR_EACH_2ARGS_6_COUNT_2,_FOR_EACH_2ARGS_6_COUNT_2,_FOR_EACH_2ARGS_6_COUNT_2,_FOR_EACH_2ARGS_6_COUNT_1,_FOR_EACH_2ARGS_6_COUNT_1,_FOR_EACH_2ARGS_6_COUNT_1,_FOR_EACH_2ARGS_6_COUNT_1,_FOR_EACH_2ARGS_6_COUNT_1,_FOR_EACH_2ARGS_6_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_2ARGS_6_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0,a1: Static arguments that are passed into the action.
//   Loop: Each iteration processes 6 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_2ARGS_6_COUNT(what,a0,a1,...) EXPAND(_FOR_EACH_2ARGS_6_COUNT_SELECT(__VA_ARGS__)(what,0,a0,a1,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_3ARGS_6_1(what,a0,a1,a2,x0,x1,x2,x3,x4,x5) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4,x5))
#define _FOR_EACH_3ARGS_6_2(what,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_1(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_3(what,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_2(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_4(what,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_3(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_5(what,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_4(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_6(what,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_5(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_7(what,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_6(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_8(what,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_7(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_9(what,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_8(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_10(what,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_9(what,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_3ARGS_6_10,_FOR_EACH_3ARGS_6_10,_FOR_EACH_3ARGS_6_10,_FOR_EACH_3ARGS_6_10,_FOR_EACH_3ARGS_6_10,_FOR_EACH_3ARGS_6_10,_FOR_EACH_3ARGS_6_9,_FOR_EACH_3ARGS_6_9,_FOR_EACH_3ARGS_6_9,_FOR_EACH_3ARGS_6_9,_FOR_EACH_3ARGS_6_9,_FOR_EACH_3ARGS_6_9,_FOR_EACH_3ARGS_6_8,_FOR_EACH_3ARGS_6_8,_FOR_EACH_3ARGS_6_8,_FOR_EACH_3ARGS_6_8,_FOR_EACH_3ARGS_6_8,_FOR_EACH_3ARGS_6_8,_FOR_EACH_3ARGS_6_7,_FOR_EACH_3ARGS_6_7,_FOR_EACH_3ARGS_6_7,_FOR_EACH_3ARGS_6_7,_FOR_EACH_3ARGS_6_7,_FOR_EACH_3ARGS_6_7,_FOR_EACH_3ARGS_6_6,_FOR_EACH_3ARGS_6_6,_FOR_EACH_3ARGS_6_6,_FOR_EACH_3ARGS_6_6,_FOR_EACH_3ARGS_6_6,_FOR_EACH_3ARGS_6_6,_FOR_EACH_3ARGS_6_5,_FOR_EACH_3ARGS_6_5,_FOR_EACH_3ARGS_6_5,_FOR_EACH_3ARGS_6_5,_FOR_EACH_3ARGS_6_5,_FOR_EACH_3ARGS_6_5,_FOR_EACH_3ARGS_6_4,_FOR_EACH_3ARGS_6_4,_FOR_EACH_3ARGS_6_4,_FOR_EACH_3ARGS_6_4,_FOR_EACH_3ARGS_6_4,_FOR_EACH_3ARGS_6_4,_FOR_EACH_3ARGS_6_3,_FOR_EACH_3ARGS_6_3,_FOR_EACH_3ARGS_6_3,_FOR_EACH_3ARGS_6_3,_FOR_EACH_3ARGS_6_3,_FOR_EACH_3ARGS_6_3,_FOR_EACH_3ARGS_6_2,_FOR_EACH_3ARGS_6_2,_FOR_EACH_3ARGS_6_2,_FOR_EACH_3ARGS_6_2,_FOR_EACH_3ARGS_6_2,_FOR_EACH_3ARGS_6_2,_FOR_EACH_3ARGS_6_1,_FOR_EACH_3ARGS_6_1,_FOR_EACH_3ARGS_6_1,_FOR_EACH_3ARGS_6_1,_FOR_EACH_3ARGS_6_1,_FOR_EACH_3ARGS_6_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_3ARGS_6: Apply the action 'what' to a sequence of elements.
//   a0,a1,a2: Static arguments that are passed into the action.
//   Loop: Each iteration processes 6 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_3ARGS_6(what,a0,a1,a2,...) EXPAND(_FOR_EACH_3ARGS_6_SELECT(__VA_ARGS__)(what,a0,a1,a2,__VA_ARGS__))


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
#define _FOR_EACH_3ARGS_6_COUNT_1(what,i,a0,a1,a2,x0,x1,x2,x3,x4,x5) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4,x5))
#define _FOR_EACH_3ARGS_6_COUNT_2(what,i,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_COUNT_1(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_COUNT_3(what,i,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_COUNT_2(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_COUNT_4(what,i,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_COUNT_3(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_COUNT_5(what,i,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_COUNT_4(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_COUNT_6(what,i,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_COUNT_5(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_COUNT_7(what,i,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_COUNT_6(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_COUNT_8(what,i,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_COUNT_7(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_COUNT_9(what,i,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_COUNT_8(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_COUNT_10(what,i,a0,a1,a2,x0,x1,x2,x3,x4,x5,...) EXPAND(what(i,a0,a1,a2,x0,x1,x2,x3,x4,x5) _FOR_EACH_3ARGS_6_COUNT_9(what,i+1,a0,a1,a2,__VA_ARGS__))
#define _FOR_EACH_3ARGS_6_COUNT_SELECT(...) EXPAND(_SELECT_AT_INDEX(__VA_ARGS__,_FOR_EACH_3ARGS_6_COUNT_10,_FOR_EACH_3ARGS_6_COUNT_10,_FOR_EACH_3ARGS_6_COUNT_10,_FOR_EACH_3ARGS_6_COUNT_10,_FOR_EACH_3ARGS_6_COUNT_10,_FOR_EACH_3ARGS_6_COUNT_10,_FOR_EACH_3ARGS_6_COUNT_9,_FOR_EACH_3ARGS_6_COUNT_9,_FOR_EACH_3ARGS_6_COUNT_9,_FOR_EACH_3ARGS_6_COUNT_9,_FOR_EACH_3ARGS_6_COUNT_9,_FOR_EACH_3ARGS_6_COUNT_9,_FOR_EACH_3ARGS_6_COUNT_8,_FOR_EACH_3ARGS_6_COUNT_8,_FOR_EACH_3ARGS_6_COUNT_8,_FOR_EACH_3ARGS_6_COUNT_8,_FOR_EACH_3ARGS_6_COUNT_8,_FOR_EACH_3ARGS_6_COUNT_8,_FOR_EACH_3ARGS_6_COUNT_7,_FOR_EACH_3ARGS_6_COUNT_7,_FOR_EACH_3ARGS_6_COUNT_7,_FOR_EACH_3ARGS_6_COUNT_7,_FOR_EACH_3ARGS_6_COUNT_7,_FOR_EACH_3ARGS_6_COUNT_7,_FOR_EACH_3ARGS_6_COUNT_6,_FOR_EACH_3ARGS_6_COUNT_6,_FOR_EACH_3ARGS_6_COUNT_6,_FOR_EACH_3ARGS_6_COUNT_6,_FOR_EACH_3ARGS_6_COUNT_6,_FOR_EACH_3ARGS_6_COUNT_6,_FOR_EACH_3ARGS_6_COUNT_5,_FOR_EACH_3ARGS_6_COUNT_5,_FOR_EACH_3ARGS_6_COUNT_5,_FOR_EACH_3ARGS_6_COUNT_5,_FOR_EACH_3ARGS_6_COUNT_5,_FOR_EACH_3ARGS_6_COUNT_5,_FOR_EACH_3ARGS_6_COUNT_4,_FOR_EACH_3ARGS_6_COUNT_4,_FOR_EACH_3ARGS_6_COUNT_4,_FOR_EACH_3ARGS_6_COUNT_4,_FOR_EACH_3ARGS_6_COUNT_4,_FOR_EACH_3ARGS_6_COUNT_4,_FOR_EACH_3ARGS_6_COUNT_3,_FOR_EACH_3ARGS_6_COUNT_3,_FOR_EACH_3ARGS_6_COUNT_3,_FOR_EACH_3ARGS_6_COUNT_3,_FOR_EACH_3ARGS_6_COUNT_3,_FOR_EACH_3ARGS_6_COUNT_3,_FOR_EACH_3ARGS_6_COUNT_2,_FOR_EACH_3ARGS_6_COUNT_2,_FOR_EACH_3ARGS_6_COUNT_2,_FOR_EACH_3ARGS_6_COUNT_2,_FOR_EACH_3ARGS_6_COUNT_2,_FOR_EACH_3ARGS_6_COUNT_2,_FOR_EACH_3ARGS_6_COUNT_1,_FOR_EACH_3ARGS_6_COUNT_1,_FOR_EACH_3ARGS_6_COUNT_1,_FOR_EACH_3ARGS_6_COUNT_1,_FOR_EACH_3ARGS_6_COUNT_1,_FOR_EACH_3ARGS_6_COUNT_1,0))

//-------------------------------------------------------------------------------------------------
// FOR_EACH_3ARGS_6_COUNT: Apply the action 'what' to a sequence of elements.
//   Count: The loop index is passed into the action.
//   a0,a1,a2: Static arguments that are passed into the action.
//   Loop: Each iteration processes 6 arguments
//-------------------------------------------------------------------------------------------------
#define FOR_EACH_3ARGS_6_COUNT(what,a0,a1,a2,...) EXPAND(_FOR_EACH_3ARGS_6_COUNT_SELECT(__VA_ARGS__)(what,0,a0,a1,a2,__VA_ARGS__))

