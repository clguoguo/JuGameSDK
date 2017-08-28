// 
//  JuGameSDKStatusCode.h
//  Pods
// 
//  Created by Magician on 2017/8/22.
//
// 

#ifndef JuGameSDKStatusCode
#define JuGameSDKStatusCode

/**
 状态码
 */
typedef NS_ENUM(NSUInteger, JGStatusCode) {
    JGSTATUS_SUCCESS      =  1,             // 操作成功
    JGSTATUS_PARAMS_ERROR =  10,            // 解析请求参数出错",10
    JGSTATUS_SERVER_ERROR =  99,            // 服务器内部错误",99
    JGSTATUS_CLIENTINFO_ERROR = 110,        // 记录客户端信息出错",110
    JGSTATUS_LOGIN_NOTACCOUNT_ERROR = 111,  // 登录失败，账号不存在",111
    JGSTATUS_LOGIN_PASSWORD_ERROR = 112,    // 登录失败，密码不正确",112
    JGSTATUS_LOGIN_ACCOUNTLOCK_ERROR = 113, // 登录失败，账号已锁定",113
    JGSTATUS_LOGIN_INVALID_ERROR = 114,     // 会话刷新失败，用户登录会话不存在",114
    JGSTATUS_LOGIN_REFRESH_ERROR = 115,     // 会话刷新失败，更新最近一次登录时间出错",115
    JGSTATUS_PAY_UNLOGIN_ERROR = 116,       // 支付失败，用户未登录或会话已超时",116
    JGSTATUS_UNLOGIN_ERROR = 117,           // 用户未登录或会话已超时,%s",117
    JGSTATUS_NOORDERINFO_ERROR = 118,       // 订单状态查询失败，找不到相关订单信息",118
    JGSTATUS_CONFIGURE_ERROR = 121,         // 游戏id与cpid不匹配",121
    JGSTATUS_CPORDER_ERROR = 122,           // 游戏cp订单号为空",122
    JGSTATUS_ADDORDER_ERROR = 123,          // 新增订单失败",123
    JGSTATUS_NOORDERID_ERROR = 124,         // 订单ID为空",124
    JGSTATUS_REFRESHORDER_ERROR = 125,      // 更新订单失败",125
    JGSTATUS_GETORDERCONFIG_ERROR = 126,    // 获取订单配置失败",126
    JGSTATUS_USERID_INVALID_ERROR = 127,    // 非法用户ID",127
    JGSTATUS_GAMEID_INVALID_ERROR = 128,    // 非法游戏ID",128
    JGSTATUS_PAY_AMOUNT_ERROR = 130,        // 非法支付金额",130
    JGSTATUS_PAY_NOTENOUGH_ERROR = 132,     // 不足以支付所需金额",132
    JGSTATUS_CREATEORDER_UNLOGIN_ERROR = 134,// 创建订单失败，用户未登录或会话已超时",134
    JGSTATUS_PAY_GETORDER_ERROR = 135,      // 获取订单失败",135
    JGSTATUS_UNSUPPORTGAME_ERROR = 137,     // 不支持的游戏源",137
    JGSTATUS_ACCOUNT_CREATE_ERROR = 138,    // 创建账号失败",138
    JGSTATUS_PASSWORD_UPDATE_ERROR = 139,   // 密码修改失败",139
    JGSTATUS_PHONENUM_BINDING_ERROR = 140,  // 手机绑定失败",140
    JGSTATUS_ACCOUNT_NOTEXISTE_ERROR = 141, // 用户不存在",141
    JGSTATUS_PASSWORD_ERROR = 142,          // 密码输入错误",142
    JGSTATUS_PHONENUM_ERROR = 143,          // 非法手机号",143
    JGSTATUS_PAY_RECORD_ERROR = 171,        // 生成支付充值记录失败",171
    JGSTATUS_PAY_NEEDREALNAME_ERROR = 182,  // 创建订单失败，用户必须实名认证",182
    JGSTATUS_IAP_ERROR = 600,               // 内购错误，商品暂无法进行内购
    JGSTATUS_IAP_PRODUCT_ERROR = 601,       // 内购错误，未找到该商品
    JGSTATUS_IAP_PAY_ERROR = 602,           // 内购错误，内购错误，支付失败
    JGSTATUS_IAP_VALIDATE_ERROR = 603,      // 内购错误，服务器校验失败
    JGSTATUS_SESSION_INVALID_ERROR = 999,   // 用户未登录或会话已超时,请重新登录",999
};

#endif /* JuGameSDKStatusCode_ERROR = h */
