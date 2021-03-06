//
//  SHRMJavaScriptBridgeProtocol.h
//  Hybrid-framework
//
//  Created by Kevin on 2019/4/20.
//  Copyright © 2019 王凯. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SHRMJavaScriptBridgeProtocol <NSObject>

/**
 native 调用 js接口

 @param javaScriptString js
 @param completionHandler 结果回调
 */
- (void)evaluateJavaScript:(NSString *)javaScriptString completionHandler:(void (^)(id, NSError *))completionHandler;
@end

NS_ASSUME_NONNULL_END
