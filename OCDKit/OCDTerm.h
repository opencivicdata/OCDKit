//
//  OCDTerm.h
//  OCDKit
//
//  Created by Jeremy Carbaugh on 12/4/13.
//  Copyright (c) 2013 Jeremy Carbaugh. All rights reserved.
//

#import "OCDObject.h"

@interface OCDTerm : OCDObject

@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly) NSArray *sessions;

@property (nonatomic, assign) NSUInteger endYear;
@property (nonatomic, assign) NSUInteger startYear;

@end
