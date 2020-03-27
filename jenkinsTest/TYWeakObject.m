//
//  TYWeakObject.m
//  test1
//
//  Created by TimorYang on 2018/8/2.
//  Copyright © 2018年 TimorYang. All rights reserved.
//

#import "TYWeakObject.h"

@interface TYWeakObject()

@property(weak, nonatomic) id weakObject;

@end

@implementation TYWeakObject

- (instancetype)initWithWeakObject:(id)obj {
    _weakObject = obj;
    return self;
}

+ (instancetype)proxyWithWeakObject:(id)obj {
    return [[TYWeakObject alloc] initWithWeakObject:obj];
}

/**
 * 消息转发，对象转发，让_weakObject响应事件
 */
- (id)forwardingTargetForSelector:(SEL)aSelector {
    return _weakObject;
}

- (void)forwardInvocation:(NSInvocation *)invocation {
    void *null = NULL;
    [invocation setReturnValue:&null];
}

- (BOOL)respondsToSelector:(SEL)aSelector {
    return [_weakObject respondsToSelector:aSelector];
}

- (NSMethodSignature *)methodSignatureForSelector:(SEL)selector {
    return [NSObject instanceMethodSignatureForSelector:@selector(init)];
}

- (Class)class {
    return [_weakObject class];
}

- (Class)superclass {
    return [_weakObject superclass];
}

- (BOOL)isKindOfClass:(Class)aClass {
    return [_weakObject isKindOfClass:aClass];
}

- (BOOL)isMemberOfClass:(Class)aClass {
    return [_weakObject isMemberOfClass:aClass];
}

@end
