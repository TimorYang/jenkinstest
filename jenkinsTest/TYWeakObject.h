//
//  TYWeakObject.h
//  test1
//
//  Created by TimorYang on 2018/8/2.
//  Copyright © 2018年 TimorYang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TYWeakObject : NSObject

- (instancetype)initWithWeakObject:(id)obj;

+ (instancetype)proxyWithWeakObject:(id)obj;

@end
