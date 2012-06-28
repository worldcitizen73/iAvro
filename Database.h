//
//  AvroKeyboard
//
//  Created by Rifat Nabi on 6/28/12.
//  Copyright (c) 2012 OmicronLab. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Database : NSObject {
    NSMutableDictionary* _db;
}

+ (void)allocateSharedInstance;
+ (void)deallocateSharedInstance;
+ (Database *)sharedInstance;

- (NSArray*)find:(NSString*)term;

@end
