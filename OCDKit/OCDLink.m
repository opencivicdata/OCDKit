//
//  OCDLink.m
//  OCDKit
//
//  Created by Jeremy Carbaugh on 12/4/13.
//  Copyright (c) 2013 Jeremy Carbaugh. All rights reserved.
//

#import "OCDLink.h"

@implementation OCDLink

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    return @{
             @"name":     @"name",
             @"note":     @"note",
             @"mimetype": @"mimetype"
             };
}

+ (NSValueTransformer *)urlJSONTransformer {
    return [NSValueTransformer valueTransformerForName:MTLURLValueTransformerName];
}

@end
