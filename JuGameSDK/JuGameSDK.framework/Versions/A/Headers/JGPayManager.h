//
//  JGPayManager.h
//  Pods
//
//  Created by Magician on 2017/8/18.
//
//

#import <Foundation/Foundation.h>
#import "JGPayManagerProtocol.h"

@interface JGPayManager : NSObject <JGPayManager>

- (void)payRequest:(JGPayRequest *)request
        completion:(void (^)(JGOrderInfo *response, NSError *error))completion;

@end
