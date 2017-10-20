//
//  JGPayRequest.h
//  Pods
//
//  Created by Magician on 2017/8/18.
//
//

#import <Foundation/Foundation.h>

@interface JGPayRequest : NSObject

/**
 iTunes应用后台登记的商品ID（内购时必传，其他支付方式不传）
 */
@property (nonatomic, strong) NSString *productId;

/**
 支付金额
 */
@property (nonatomic, strong) NSNumber *payAmount;

/**
 支付名称
 */
@property (nonatomic, strong) NSString *payName;

/**
 支付方式(内购传0，其他支付方式传1)
 */
@property (nonatomic, strong) NSNumber *payWay;

/**
 角色ID
 */
@property (nonatomic, strong) NSString *roleId;

/**
 代金券
 */
@property (nonatomic, strong) NSArray *couponIdList;

/**
 银行卡号(内购不传)
 */
@property (nonatomic, strong) NSString *cardno;

/**
 密码(内购不传)
 */
@property (nonatomic, strong) NSString *cardpwd;

/**
 银行卡类型(内购不传)
 */
@property (nonatomic, strong) NSNumber *cardType;

/**
 服务Id
 */
@property (nonatomic, strong) NSNumber *serverId;

/**
 扩展信息
 */
@property (nonatomic, strong) NSString *ext;

@end
