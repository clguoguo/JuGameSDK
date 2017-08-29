//
//  JGConst.h
//  Pods
//
//  Created by Magician on 2017/8/10.
//
//

#ifndef JGConst_h
#define JGConst_h

// 不同屏幕尺寸/字体适配（效果图为IPHONE6 如果不是则根据实际情况修改）
#define JGScreenWidthRatio         (JGScreen_width / 375.0)
#define JGScreenHeightRatio        (JGScreen_height / 667.0)
#define JGAdaptedWidth(x)          ceilf((x) * JGScreenWidthRatio)
#define JGAdaptedHeight(x)         ceilf((x) * JGScreenHeightRatio)
#define JGAdaptedFontSize(R)       SYSTEMFONT(JGAdaptedWidth(R))
#define JGAdaptedGlobalFontSize(R) GLOBALFONT(JGAdaptedWidth(R))

// 屏幕宽高
#define JGScreen_height            [[UIScreen mainScreen] bounds].size.height
#define JGScreen_width             [[UIScreen mainScreen] bounds].size.width


// 字体颜色
#define JGColor_word_black         JGHEXCOLOR(0x333333)
#define JGColor_word_gray_1        JGHEXCOLOR(0x666666)
#define JGColor_word_gray_2        JGHEXCOLOR(0x999999)
#define JGColor_word_gray_3        JGHEXCOLOR(0xcccccc)
#define JGColor_word_gray_4        RGB(230, 230, 230)
#define JGColor_under_line         JGHEXCOLOR(0xDDDDDD)

#define JGLIGHTFONT(FONTSIZE)     [UIFont fontWithName:@"STHeitiSC-Light" size:FONTSIZE]

// 色值相关
#define JGRGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define JGRGB(r,g,b) JGRGBA(r,g,b,1.0f)

#define JGHEXCOLOR(hex) [UIColor colorWithRed:((float)((hex & 0xFF0000) >> 16)) / 255.0 green:((float)((hex & 0xFF00) >> 8)) / 255.0 blue:((float)(hex & 0xFF)) / 255.0 alpha:1]

#define JGCOLOR_RGB(rgbValue,a) [UIColor colorWithRed:((float)(((rgbValue) & 0xFF0000) >> 16))/255.0 green:((float)(((rgbValue) & 0xFF00)>>8))/255.0 blue: ((float)((rgbValue) & 0xFF))/255.0 alpha:(a)]

// 图片路径
//#define JGSrcName(file)               [@"JuGameSDK.bundle" stringByAppendingPathComponent:file]
//
//#define JGFrameworkSrcName(file)      [@"Frameworks/JuGameSDK.framework/Resources/JuGameSDK.bundle" stringByAppendingPathComponent:file]
//
//#define JGImage(file)                 [UIImage imageNamed:JGSrcName(file)] ? :[UIImage imageNamed:JGFrameworkSrcName(file)]


// 自定义打印
#ifdef DEBUG
#define JGLog(...) NSLog(__VA_ARGS__)
// 打印调试
#define JGLogFunc DLog(@"%s", __func__)
#else
#define JGLog(...)
#define JGLogFunc
#endif



// 获取 NSUserDefaults 存储信息

#define CPID    [[NSUserDefaults standardUserDefaults] objectForKey:@"cpid"]
#define GAMEID    [[NSUserDefaults standardUserDefaults] objectForKey:@"gameid"]
//#define SI    [[NSUserDefaults standardUserDefaults] objectForKey:@"si"]
#define ACCOUNT    [[NSUserDefaults standardUserDefaults] objectForKey:@"account"]
#define PASSWORD    [[NSUserDefaults standardUserDefaults] objectForKey:@"password"]
#define SID    [[NSUserDefaults standardUserDefaults] objectForKey:@"sid"]
#define TIMEOUT    [[NSUserDefaults standardUserDefaults] objectForKey:@"timeout"]
#define FORGETPWD_URL    [[NSUserDefaults standardUserDefaults] objectForKey:@"forgetpwd"]
#define USERCENTER_URL    [[NSUserDefaults standardUserDefaults] objectForKey:@"userCenterIndex"]
#define UPDATE_URL    [[NSUserDefaults standardUserDefaults] objectForKey:@"update_url"]
#define VERSION    [[NSUserDefaults standardUserDefaults] objectForKey:@"version"]
#define UPDATE    [[NSUserDefaults standardUserDefaults] objectForKey:@"need_update"]

// SDK编号(顺玩为 1)
#define SOURCE  @"1"

// 更新版本


// SDK 包名
#define GAME_PACKAGE   [JGCommonUtils getAppIdentifier]

// 正式环境
#define JG_BASE_SERVICE_URL    @"http://sdkserver.jugame.cn"
// 预发布环境
//#define JG_BASE_SERVICE_URL
// 开发环境
//#define JG_BASE_SERVICE_URL    @"http://192.168.0.82:9041"
// 测试环境
//#define JG_BASE_SERVICE_URL    @"http://192.168.0.50:9041"


/*
 * 系统模块URL(申请si,生成url,短信验证,获取广告)
 */
#define URL_SYSTEM_INDEX    @"m1/System.index"

/*
 * SDK初始化URL
 */
#define URL_SYSTEM_INIT    @"m1/System.init"

/*
 * 用户模块URL(注册,登录,改密,注销...)
 */
#define URL_USER_INDEX    @"m1/User.index"

#define URL_PAY_INDEX    @"m1/Pay.index"


/*
 * si申请接口
 */
#define GET_SI    @"si.apply"

/*
 * url生成接口
 */
#define GET_URL    @"server.url"

/*
 * 发送短信验证码接口
 */
#define GET_MOBILE_CODE    @"mobile.code.send"

/*
 * 获取广告接口
 */
#define GET_AD    @"ad.get"

/*
 * SDK初始化接口
 */
#define GET_SDK_INIT    @"system.init"

/*
 * 用户一键注册接口
 */
#define GET_USER_QREGISTER    @"user.qregister"

/*
 * 用户登录接口
 */
#define GET_USER_LOGIN    @"user.login"

/*
 * 检查登录态接口
 */
#define GET_CHECK_LOGIN    @"user.checkLogin"

/*
 * 刷新登录态接口
 */
#define GET_REFRESH_LOGIN    @"user.refreshLogin"

/*
 * 更改密码接口
 */
#define GET_UPDATE_PWD    @"update.pwd"

/*
 * 退出登录接口
 */
#define GET_LOGOUT    @"user.logout"

#define CREATE_ORDER  @"pay.create"

#define APPLE_VALIDATE @"pay.apple.validate"

#endif /* JGConst_h */
