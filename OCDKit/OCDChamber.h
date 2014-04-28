//
//  OCDChamber.h
//  OCDKit
//
//  Created by Jeremy Carbaugh on 12/4/13.
//  Copyright (c) 2013 Jeremy Carbaugh. All rights reserved.
//

#import "OCDObject.h"

typedef NS_ENUM(NSInteger, OCDChamberType){
    OCDChamberTypeUnknown,
    OCDChamberTypeUpper,
    OCDChamberTypeLower,
    OCDChamberTypeJoint
};

@interface OCDChamber : OCDObject

+ (NSValueTransformer *)typeJSONTransformer;

@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly) NSString *title;
@property (nonatomic, assign, readonly) OCDChamberType type;

@end
