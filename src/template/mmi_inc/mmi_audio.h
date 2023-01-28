#ifndef __MMI_AUDIO_H__
#define __MMI_AUDIO_H__

#include "string.h"
#include "mmi_feature.h"

#ifdef __LOCK_AUDIO_SUPPORT__
#define __AUD_PLAY_BY_ARR__

typedef enum 
{
//---------------------------------------------------
	AUD_BASE_ID_PRO_AUDIO = 1,//按键音

	AUD_BASE_ID_INPUT_68_PWD = 2,//请输入6-8位密码
	AUD_BASE_ID_PWD_68_LEN = 3, //密码应为6-8位
	AUD_BASE_ID_PWD_INPUT_AGAIN = 4,//请再次输入密码
	AUD_BASE_ID_SUCCESS = 5,//操作成功
	AUD_BASE_ID_NOT_SAME = 6,//两次输入不一致
	AUD_BASE_ID_CONTINUE = 7,//继续请按#
	AUD_BASE_ID_FAIL = 8,//操作失败
	AUD_BASE_ID_INPUT_OLD_PWD = 9,//请输入旧密码
	AUD_BASE_ID_PWD_NOT_EXIST = 10,//密码不存在
	AUD_BASE_ID_INPUT_NEW_PWD = 11,//请输入新密码
	AUD_BASE_ID_PWD_SAME = 12,//新旧密码一致
	AUD_BASE_ID_INPUT_DEL_PWD = 13,//请输入要删除的密码
	AUD_BASE_ID_NUM_NOT_EXIST = 14,//编号不存在
	AUD_BASE_ID_INPUT_CONFIRM = 15,//确认请按#
	AUD_BASE_ID_PRESS_FP = 16,//请按手指
	AUD_BASE_ID_PRESS_FP_AGAIN = 17,//请再按一次
	AUD_BASE_ID_FP_SAME = 18,//新旧指纹一致
	AUD_BASE_ID_PRESS_OLD_FP = 19,//请按旧的指纹
	AUD_BASE_ID_PRESS_NEW_FP = 20,//请按新的指纹
	AUD_BASE_ID_INPUT_DEL_FP = 21,//请输入要删除的指纹
	AUD_BASE_ID_FP_NOT_EXIST = 22,//指纹不存在
	AUD_BASE_ID_PRESS_RFCARD = 23,//请刷卡
	AUD_BASE_ID_PRESS_RFCARD_AGAIN = 24,//请再刷一次
	AUD_BASE_ID_RFCARD_EXIST = 25,//RF卡已存在
	AUD_BASE_ID_PRESS_OLD_RFCARD = 26,//请刷旧卡
	AUD_BASE_ID_PRESS_NEW_RFCARD = 27,//请刷新卡
	AUD_BASE_ID_RFCARD_SAME = 28,//新旧RF卡一致
	AUD_BASE_ID_INPUT_DEL_RFCARD = 29,//请输入要删除的RF卡
	AUD_BASE_ID_RFCARD_NOT_EXIST = 30,//RF卡不存在
	AUD_BASE_ID_PWD_EXIST = 31,//密码已存在
	AUD_BASE_ID_INPUT_ADMIN_PWD = 32,//请输入管理员密码
	AUD_BASE_ID_SET_SUCESS = 33,//设置成功
	AUD_BASE_ID_SET_FAIL = 34,//设置失败
	AUD_BASE_ID_INPUT_END = 35,//按#键结束
	AUD_BASE_ID_RETRY = 36,//请重试
	AUD_BASE_ID_INPUT_BACK = 37,//返回按*
	AUD_BASE_ID_CONTACT_ADMIN = 38,//请联系管理员
	AUD_BASE_ID_REINPUT = 39,//请重新输入
	AUD_BASE_ID_ADD_ADMIN_PWD_FIRST = 40,//为了您的使用安全，请先添加管理员密码
	AUD_BASE_ID_DOOR_OPEN = 41,//已开锁
	AUD_BASE_ID_DOOR_CLOSE = 42,//已关锁
	AUD_BASE_ID_PWD_WRONG = 43,//密码错误
	AUD_BASE_ID_FP_WRONG = 44,//指纹错误
	AUD_BASE_ID_RFCARD_WRONG = 45,//RF卡错误
	AUD_BASE_ID_RONG_TIMES_EXCEED = 46,//错误次数已超限制，请稍后重试
	AUD_BASE_ID_LOW_BATTERY = 47,//电量低

	AUD_BASE_ID_SYS_PASSWORD = 48,//密码
	AUD_BASE_ID_SYS_FP = 49,//指纹
	AUD_BASE_ID_SYS_RFCARD = 50,//RF卡
	AUD_BASE_ID_SYS_ADMIN = 51,//管理员
	AUD_BASE_ID_SYS_SETTING = 52,//设置
	AUD_BASE_ID_SYS_RESTORE = 53,//恢复出厂设置
	AUD_BASE_ID_SYS_ADD_PWD = 54,//添加密码
	AUD_BASE_ID_SYS_CHG_PWD = 55,//修改密码
	AUD_BASE_ID_SYS_DEL_PWD = 56,//删除密码
	AUD_BASE_ID_SYS_CLR_PWD = 57,//删除所有密码
	AUD_BASE_ID_SYS_ADD_FP = 58,//添加指纹
	AUD_BASE_ID_SYS_CHG_FP = 59,//修改指纹
	AUD_BASE_ID_SYS_DEL_FP = 60,//删除指纹
	AUD_BASE_ID_SYS_CLR_FP = 61,//删除所有指纹
	AUD_BASE_ID_SYS_ADD_RFCARD = 62,//添加RF卡
	AUD_BASE_ID_SYS_CHG_RFCARD = 63,//修改RF卡
	AUD_BASE_ID_SYS_DEL_RFCARD = 64,//删除RF卡
	AUD_BASE_ID_SYS_CLR_RFCARD = 65,//删除所有RF卡
	AUD_BASE_ID_SYS_CHG_ADMIN_PWD = 66,//修改管理员密码
	AUD_BASE_ID_SYS_CHG_ADMIN_FP = 67,//修改管理员指纹
	AUD_BASE_ID_SYS_NO1_ADMIN_FP = 68,//1号管理员指纹
	AUD_BASE_ID_SYS_NO2_ADMIN_FP = 69,//2号管理员指纹
	AUD_BASE_ID_SYS_PRO_AUDIO = 70,//提示音
	AUD_BASE_ID_SYS_CLOSE_PRO_AUDIO = 71,//关闭
	AUD_BASE_ID_SYS_OPEN_PRO_AUDIO = 72,//开启
	AUD_BASE_ID_SYS_OPEN_MODE = 73,//开门方式
	AUD_BASE_ID_SYS_SIN_OPEN_MODE = 74,//单开门方式
	AUD_BASE_ID_SYS_DBL_OPEN_MODE = 75,//双开门方式
	AUD_BASE_ID_SYS_RESTORE_SUCCESS = 76,//初始化成功
	AUD_BASE_ID_APP_SYN = 77,//请使用app同步
	AUD_BASE_ID_FM_KEY_INPUT = 78,//请测试所有按键
	AUD_BASE_ID_FM_RESTORE = 79,//请按复位键
	AUD_BASE_ID_SYS_NUM_0 = 80,//0
	AUD_BASE_ID_SYS_NUM_1 = 81,//1
	AUD_BASE_ID_SYS_NUM_2 = 82,//2
	AUD_BASE_ID_SYS_NUM_3 = 83,//3
	AUD_BASE_ID_SYS_NUM_4 = 84,//4
	AUD_BASE_ID_SYS_NUM_5 = 85,//5
	AUD_BASE_ID_SYS_NUM_6 = 86,//6
	AUD_BASE_ID_SYS_NUM_7 = 87,//7
	AUD_BASE_ID_SYS_NUM_8 = 88,//8
	AUD_BASE_ID_SYS_NUM_9 = 89,//9
	AUD_BASE_ID_SYS_NUM_S = 90,//*
	AUD_BASE_ID_SYS_NUM_H = 91,//#
	AUD_BASE_ID_MEM_FULL = 92,//操作失败，锁内储存空间已满
	AUD_BASE_ID_SYS_WIFI	= 93,//wifi配网
	AUD_BASE_ID_WIFI_CONNECTING			= 77,//配网中
	AUD_BASE_ID_OUT_OPEN 		=	95,//开启出差模式	
	AUD_BASE_ID_OUT_CLOSED 		=	96,//关闭出差模式
	AUD_BASE_ID_SYSTEM_XIEPO	=	97,//系统设置胁迫

	AUD_BASE_ID_MAX,

//---------------------------------------------------
	
	AUD_ID_PRO_AUDIO				=AUD_BASE_ID_PRO_AUDIO,
	AUD_ID_INPUT_68_PWD				= 0+AUD_BASE_ID_MAX,//请输入6-8位密码，按#键结束
	AUD_ID_PWD_68_LEN 				= 3+AUD_BASE_ID_MAX,//密码应为6-8位，请重新输入
	AUD_ID_PWD_INPUT_AGAIN 			= 6+AUD_BASE_ID_MAX,//请再次输入密码，按#键结束
	AUD_ID_ADD_PWD_SUCESS 			= AUD_BASE_ID_SUCCESS,//号密码添加成功
	AUD_ID_PWD_NOT_SAME 			= AUD_BASE_ID_NOT_SAME,//两次输入的密码不一致
	AUD_ID_PWD_NOT_SAME_RETRY		= 113+AUD_BASE_ID_MAX,//两次输入的密码不一致,请重新输入
	AUD_ID_CONTINUE_ADD_PWD 		= 9+AUD_BASE_ID_MAX,//继续添加请按#，返回请按*
	AUD_ID_ADD_FAIL 				= 12+AUD_BASE_ID_MAX,//添加失败，请联系管理员
	AUD_ID_PWD_FULL 				= AUD_BASE_ID_MEM_FULL,//密码已满，请联系管理员
	AUD_ID_INPUT_OLD_PWD 			= 15+AUD_BASE_ID_MAX,//请输入旧密码，按#键结束
	AUD_ID_PWD_NOT_EXIST 			= 15+AUD_BASE_ID_MAX,//密码不存在，请重新输入
	AUD_ID_INPUT_NEW_PWD 			= 21+AUD_BASE_ID_MAX,//请输入新密码，按#键结束
	AUD_ID_INPUT_NEW_PWD_AGAIN = 24+AUD_BASE_ID_MAX,//请再输入新密码，按#键结束
	AUD_ID_CHG_PWD_SUCESS 			= AUD_BASE_ID_SUCCESS,//号密码修改成功
	AUD_ID_CHG_FAIL 				= 12+AUD_BASE_ID_MAX,//修改失败，请联系管理员
	AUD_ID_PWD_OLD_NEW_NOT_SAME = AUD_BASE_ID_PWD_SAME,//新旧密码不能一致
	AUD_ID_INPUT_DEL_NUM 			= 18+AUD_BASE_ID_MAX,//请输入要删除的编号或密码，按#键结束
	AUD_ID_NUM_NOT_EXIST 			= 30+AUD_BASE_ID_MAX,//编号不存在，请重新输入
	AUD_ID_DEL_PWD_CONFIRM 			= 21+AUD_BASE_ID_MAX,//号密码按#键确认删除，取消请按*键
	AUD_ID_INPUT_DEL_PWD_AGAIN 		= AUD_BASE_ID_PWD_INPUT_AGAIN,//请再次输入要删除的密码
	AUD_ID_DEL_PWD_SUCESS 			= AUD_BASE_ID_SUCCESS,//号密码删除成功
	AUD_ID_DEL_FAIL					= 12+AUD_BASE_ID_MAX,//删除失败，请联系管理员
	AUD_ID_DEL_CONFIRM 				= 9+AUD_BASE_ID_MAX,//继续删除请按#，返回请按*
	AUD_ID_CLR_PWD_CONFIRM 			= 21+AUD_BASE_ID_MAX,//按#键确认删除所有密码，取消请按*键
	AUD_ID_CLR_PWD_SUCESS 			= AUD_BASE_ID_SUCCESS,//删除所有密码成功
	AUD_ID_CLR_PWD_FAIL 			= AUD_BASE_ID_FAIL,//删除所有密码失败
	AUD_ID_PRESS_FP 				= AUD_BASE_ID_PRESS_FP,//请按手指
	AUD_ID_PRESS_FP_AGAIN 			= AUD_BASE_ID_PRESS_FP_AGAIN,//请再按一次
	AUD_ID_ADD_FP_SUCESS 			= AUD_BASE_ID_SUCCESS,//号指纹添加成功
	AUD_ID_FP_EXIST 				= 12+AUD_BASE_ID_MAX,//指纹已存在，请换个手指
	AUD_ID_ADD_FAIL_RETRY 			= 24+AUD_BASE_ID_MAX,//添加失败，请重试
	AUD_ID_FP_TWICE_NOT_SAME_RETRY	= 113+AUD_BASE_ID_MAX,//两次输入的指纹不一致
	AUD_ID_FP_FULL 					= AUD_BASE_ID_MEM_FULL,//指纹已满，请联系管理员
	AUD_ID_PRESS_OLD_FP 			= AUD_BASE_ID_PRESS_OLD_FP,//请按旧的指纹
	AUD_ID_PRESS_NEW_FP 			= AUD_BASE_ID_PRESS_NEW_FP,//请按新的指纹
	AUD_ID_PRESS_NEW_FP_AGAIN 		= AUD_BASE_ID_PRESS_FP_AGAIN,//请再按一次新指纹
	AUD_ID_CHG_FP_SUCESS 			= AUD_BASE_ID_SUCCESS,//号指纹修改成功
	AUD_ID_FP_NOT_SAME 				= AUD_BASE_ID_FP_SAME,//新旧指纹不能一致	
	AUD_ID_INPUT_DEL_FP_NUM 		= AUD_BASE_ID_INPUT_DEL_FP,//请输入要删除的编号或指纹，按#键结束
	AUD_ID_CHG_FAIL_RETRY 			= 36+AUD_BASE_ID_MAX,//修改失败，请重试
	AUD_ID_CHG_CONTINUE_CONFIRM 	= 9+AUD_BASE_ID_MAX,//继续修改请按#，返回请按*
	//0x27
	AUD_ID_FP_NOT_EXIST 			= 27+AUD_BASE_ID_MAX,//ָ指纹不存在，请重新输入
	AUD_ID_DEL_FP_CONFIRM 			= 21+AUD_BASE_ID_MAX,//号指纹按#确认删除，取消请按*
	AUD_ID_PRESS_DEL_FP_AGAIN 		= AUD_BASE_ID_PRESS_FP_AGAIN,//请再按一次要删除的指纹
	AUD_ID_DEL_FP_SUCESS 			= AUD_BASE_ID_SUCCESS,//号指纹删除成功
	AUD_ID_DEL_FAIL_RETRY 			= 24+AUD_BASE_ID_MAX,//删除失败，请重试
	AUD_ID_CLR_FP_CONFIRM 			= 21+AUD_BASE_ID_MAX,//按#确认删除所有指纹，取消请按*
	AUD_ID_CLR_FP_SUCESS 			= AUD_BASE_ID_SUCCESS,//删除所有指纹成功
	AUD_ID_CLR_FP_FAIL 				= AUD_BASE_ID_FAIL,//删除所有指纹失败
	AUD_ID_PRESS_RFCARD 			= AUD_BASE_ID_PRESS_RFCARD,//请刷卡
	AUD_ID_PRESS_RFCARD_AGAIN		= AUD_BASE_ID_PRESS_RFCARD_AGAIN,//请再刷一次
	AUD_ID_ADD_RFCARD_SUCESS 		= AUD_BASE_ID_SUCCESS,//号RF卡添加成功
	AUD_ID_RFCARD_EXIST 			= AUD_BASE_ID_RFCARD_EXIST,//RF卡已存在，请换张卡
	AUD_ID_RFCARD_FULL 				= AUD_BASE_ID_MEM_FULL,//RF卡已满，请联系管理员
	AUD_ID_PRESS_OLD_RFCARD 		= AUD_BASE_ID_PRESS_OLD_RFCARD,//请刷旧卡
	AUD_ID_PRESS_NEW_RFCARD 		= AUD_BASE_ID_PRESS_NEW_RFCARD,//请刷新卡
	AUD_ID_PRESS_NEW_RFCARD_AGAIN = AUD_BASE_ID_PRESS_RFCARD_AGAIN,//请再刷一次新卡
	AUD_ID_CHG_RFCARD_SUCESS 		= AUD_BASE_ID_SUCCESS,//号RF卡修改成功
	AUD_ID_RFCARD_NOT_SAME 			= AUD_BASE_ID_RFCARD_SAME,//新旧RF卡不能一致
	AUD_ID_RFCARD_TWICE_NOT_SAME_RETRY  = 113+AUD_BASE_ID_MAX,//两次输入的RF卡不一致
	AUD_ID_INPUT_DEL_RFCARD_NUM = AUD_BASE_ID_INPUT_DEL_RFCARD,//请输入要删除的编号或RF卡，按#键结束
	AUD_ID_RFCARD_NOT_EXIST 		= 30+AUD_BASE_ID_MAX,//RF卡不存在，请重新输入
	AUD_ID_DEL_RFCARD_CONFIRM 		= 21+AUD_BASE_ID_MAX,//号RF卡按#确认删除，取消请按*
	AUD_ID_PRESS_DEL_RFCARD_AGAIN = AUD_BASE_ID_PRESS_RFCARD_AGAIN,//请再刷一次要删除的RF卡
	AUD_ID_DEL_RFCARD_SUCESS 		= AUD_BASE_ID_SUCCESS,//号RF卡删除成功
	AUD_ID_CLR_RFCARD_CONFIRM 		= 21+AUD_BASE_ID_MAX,//按#确认删除所有RF卡，取消请按*
	AUD_ID_CLR_RFCARD_SUCESS 		= AUD_BASE_ID_SUCCESS,//删除所有RF卡成功
	AUD_ID_CLR_RFCARD_FAIL 			= AUD_BASE_ID_FAIL,//删除所有RF卡失败
	AUD_ID_INPUT_ADMIN_PWD 			= 33+AUD_BASE_ID_MAX,//请输入管理员密码，按#键结束
	AUD_ID_INPUT_NEW_ADMIN_PWD = 0+AUD_BASE_ID_MAX,//请输入新管理员密码，按#键结束
	//
	AUD_ID_INPUT_NEW_ADMIN_PWD_AGAIN 			= 6+AUD_BASE_ID_MAX,//请再次输入新管理员密码，按#键结束
	AUD_ID_CHG_ADMIN_PWD_SUCESS					= AUD_BASE_ID_SUCCESS,//管理员密码修改成功
	AUD_ID_PWD_EXIST 							= 36+AUD_BASE_ID_MAX,//密码已存在，请重新输入
	AUD_ID_NEW_ADMIN_FP 						= AUD_BASE_ID_PRESS_FP,//请按新的管理员指纹
	AUD_ID_ADD_NO1_ADMIN_FP_SUCESS 				= AUD_BASE_ID_SUCCESS,//1号管理指纹添加成功
	AUD_ID_ADD_NO2_ADMIN_FP_SUCESS 				= AUD_BASE_ID_SUCCESS,//2号管理指纹添加成功
	AUD_ID_CLOSE_PRO_AUDIO_SUCESS 				= AUD_BASE_ID_SET_SUCESS,//关闭提示音成功
	AUD_ID_CLOSE_PRO_AUDIO_FAIL 				= AUD_BASE_ID_SET_FAIL,//关闭提示音失败
	AUD_ID_OPEN_PRO_AUDIO_SUCESS 				= AUD_BASE_ID_SET_SUCESS,//开启提示音成功
	AUD_ID_OPEN_PRO_AUDIO_FAIL 					= AUD_BASE_ID_SET_FAIL,//开启提示音失败
	AUD_ID_SIN_OPEN_MODE_SUCESS 				= AUD_BASE_ID_SET_SUCESS,//单开门方式设置成功
	AUD_ID_SIN_OPEN_MODE_FAIL 					= AUD_BASE_ID_SET_FAIL,//单开门方式设置失败
	AUD_ID_DBL_OPEN_MODE_SUCESS 				= AUD_BASE_ID_SET_SUCESS,//双开门方式设置成功
	AUD_ID_DBL_OPEN_MODE_FAIL 					= AUD_BASE_ID_SET_FAIL,//双开门方式设置失败
	AUD_ID_RESTORE_SUCESS 						= AUD_BASE_ID_SYS_RESTORE_SUCCESS,//恢复出厂设置成功
	AUD_ID_RESTORE_FAIL 						= AUD_BASE_ID_SET_FAIL,//恢复出厂设置失败
	AUD_ID_ADD_ADMIN_PWD_FIRST 					= 39+AUD_BASE_ID_MAX,//为了您的使用安全，请先添加管理员密码，按#键结束
	AUD_ID_INPUT_ADMIN_PWD_INIT_AGAIN 			= 6+AUD_BASE_ID_MAX,//请再次输入管理员密码，按#键结束
	AUD_ID_ADD_ADMIN_PWD_INIT_SUCESS 			= AUD_BASE_ID_SUCCESS,//管理员密码添加成功
	AUD_ID_DOOR_OPEN 							= AUD_BASE_ID_DOOR_OPEN,//已开锁
	AUD_ID_DOOR_CLOSE 							= AUD_BASE_ID_DOOR_CLOSE,//已关锁
	AUD_ID_PWD_WRONG_TRY 						= 42+AUD_BASE_ID_MAX,//密码错误,请重试
	AUD_ID_FP_WRONG_TRY 						= 45+AUD_BASE_ID_MAX,//指纹错误，请重试
	AUD_ID_RFCARD_WRONG_TRY 					= 48+AUD_BASE_ID_MAX,//RF卡错误，请重试
	AUD_ID_RONG_TIMES_EXCEED 					= AUD_BASE_ID_RONG_TIMES_EXCEED,//错误次数已超限制，请**分钟后重试
	AUD_ID_LOW_BATTERY 							= AUD_BASE_ID_LOW_BATTERY,//电量低，请及时更换电池
	//AUD_ID_YOU_ARE_WELCOME 						= AUD_BASE_ID_YOU_ARE_WELCOME,//欢迎使用点趣物联智能锁
	AUD_ID_RESTORE_LOCK_CONTINUE_CONFIRM		= 21+AUD_BASE_ID_MAX,//按#恢复出厂设置，取消请按*
	AUD_ID_APP_SYN = AUD_BASE_ID_APP_SYN,//请使用app同步
	AUD_ID_APP_ADD_SUC = AUD_BASE_ID_SET_SUCESS,//app添加成功
	AUD_ID_APP_ADD_FAIL = AUD_BASE_ID_SET_FAIL,//app添加失败
#if defined(__LOCK_WIFI_SUPPORT__) && defined(__LOCK_110_SUPPORT__)
	AUD_ID_SYSTEM = 132+AUD_BASE_ID_MAX,//系统
#else
	AUD_ID_SYSTEM = 120+AUD_BASE_ID_MAX,//系统
#endif
	AUD_ID_SYSTEM2 = 81+AUD_BASE_ID_MAX,//系统2
	AUD_ID_SYS_PASSWORD = 89+AUD_BASE_ID_MAX,//密码
	AUD_ID_SYS_FP = 97+AUD_BASE_ID_MAX,//指纹
	AUD_ID_SYS_RFCARD = 105+AUD_BASE_ID_MAX,//RF卡
	AUD_ID_SYS_ADMIN = 51+AUD_BASE_ID_MAX,//管理员
	AUD_ID_SYS_ADMIN2 = 116+AUD_BASE_ID_MAX,//管理员
	AUD_ID_SYS_SETTING = 57+AUD_BASE_ID_MAX,//设置
	AUD_ID_SYS_CHG_ADMIN_PWD = AUD_BASE_ID_SYS_CHG_ADMIN_PWD,//修改管理员密码
	AUD_ID_SYS_CHG_ADMIN_FP = 63+AUD_BASE_ID_MAX,//修改管理员指纹
	AUD_ID_SYS_PRO_AUDIO = 69+AUD_BASE_ID_MAX,//提示音
	AUD_ID_SYS_OPEN_MODE = 75+AUD_BASE_ID_MAX,//开门方式
	AUD_ID_SYS_DBL_OPEN_MODE = AUD_BASE_ID_SYS_DBL_OPEN_MODE,//双开门方式
#if defined(__LOCK_WIFI_SUPPORT__) && defined(__LOCK_110_SUPPORT__)
	AUD_ID_SYS_110 = 120+AUD_BASE_ID_MAX,
	AUD_ID_SYS_FP_110 = 126+AUD_BASE_ID_MAX,
#endif

	AUD_ID_FM_KEY_INPUT = AUD_BASE_ID_FM_KEY_INPUT,//请测试所有按键
	AUD_ID_FM_MOTO = 21+AUD_BASE_ID_MAX,
	AUD_ID_FM_RESET = AUD_BASE_ID_FM_RESTORE,//请按复位键
	AUD_ID_FM_TEST_PASS = AUD_BASE_ID_SUCCESS,//测试成功
	AUD_ID_FM_TEST_FAIL = AUD_BASE_ID_FAIL,//测试失败
	AUD_ID_SET_SUCESS = AUD_BASE_ID_SET_SUCESS,
	AUD_ID_SET_FAIL = AUD_BASE_ID_SET_FAIL,
	AUD_ID_TIME_OUT = AUD_BASE_ID_FAIL,//操作超时
	AUD_ID_INPUT_MAX = AUD_BASE_ID_INPUT_END,//按#键结束
	AUD_ID_INPUT_BACK = AUD_BASE_ID_INPUT_BACK,//按*键返回
	// AUD_ID_OPRATION_FAIL = AUD_BASE_ID_FAIL，
	AUD_ID_WIFI_UNFINDE = AUD_BASE_ID_FAIL,
	AUD_ID_IS_BUSINESS = AUD_BASE_ID_FAIL,
	AUD_ID_WIFI_CONNECTING	= AUD_BASE_ID_WIFI_CONNECTING,//配网中
	AUD_ID_OUT_OPEN 		=	AUD_BASE_ID_OUT_OPEN,//开启出差模式	
	AUD_ID_OUT_CLOSED 		=	AUD_BASE_ID_OUT_CLOSED,//关闭出差模式

	AUD_ID_SYS_NUM_0 = AUD_BASE_ID_SYS_NUM_0,//0
	AUD_ID_SYS_NUM_1 = AUD_BASE_ID_SYS_NUM_1,//1
	AUD_ID_SYS_NUM_2 = AUD_BASE_ID_SYS_NUM_2,//2
	AUD_ID_SYS_NUM_3 = AUD_BASE_ID_SYS_NUM_3,//3
	AUD_ID_SYS_NUM_4 = AUD_BASE_ID_SYS_NUM_4,//4
	AUD_ID_SYS_NUM_5 = AUD_BASE_ID_SYS_NUM_5,//5
	AUD_ID_SYS_NUM_6 = AUD_BASE_ID_SYS_NUM_6,//6
	AUD_ID_SYS_NUM_7 = AUD_BASE_ID_SYS_NUM_7,//7
	AUD_ID_SYS_NUM_8 = AUD_BASE_ID_SYS_NUM_8,//8
	AUD_ID_SYS_NUM_9 = AUD_BASE_ID_SYS_NUM_9,//9
	AUD_ID_SYS_NUM_S = AUD_BASE_ID_SYS_NUM_S,//*
	AUD_ID_SYS_NUM_H = AUD_BASE_ID_SYS_NUM_H,//#

	AUD_ID_MAX_COUNT,
	AUD_ID_INVALID_INDEX = 0xFF,
}AUD_PLAY_ID;

/*
parameter: 
	none
return :
	none
*/
void mmi_dq_aud_init(void);

/*
parameter: 
	none
return :
	none
*/
unsigned char mmi_dq_aud_get_audio_id(unsigned char text_id);

/*
parameter: 
	none
return :
	none
*/
void mmi_dq_aud_stop(void);

/*
parameter: 
	none
return :
	none
*/
void mmi_dq_aud_play_with_id(unsigned char aud_id);

/*
parameter: 
	none
return :
	none
*/
void mmi_dq_aud_play_key_tone(void);

/*
parameter: 
	none
return :
	none
*/
void mmi_dq_aud_play_key_num(unsigned char key_val);

/*
parameter: 
	none
return :
	none
*/
unsigned char mmi_dq_aud_get_state(void);

/*
parameter: 
	none
return :
	none
*/
unsigned char mmi_dq_aud_get_end_flag(void);

#endif
#endif //__MMI_AUDIO_H__

