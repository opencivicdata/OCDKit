//
//  OCDBill.h
//  OCDKit
//
//  Created by Jeremy Carbaugh on 12/4/13.
//  Copyright (c) 2013 Jeremy Carbaugh. All rights reserved.
//

#import "OCDObject.h"
#import "OCDOrganization.h"
#import "OCDSession.h"

typedef NS_ENUM(NSInteger, OCDChamber){
    OCDChamberUpper,
    OCDChamberLower,
    OCDChamberJoint
};

@interface OCDBill : OCDObject

@property (nonatomic, copy, readonly) NSString *ocdId;
@property (nonatomic, copy, readonly) NSString *organizationId;
@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, assign, readonly) OCDChamber chamber;
@property (nonatomic, copy, readonly) NSString *title;
@property (nonatomic, copy, readonly) NSArray *type;
@property (nonatomic, copy, readonly) NSArray *subjects;
@property (nonatomic, copy, readonly) NSArray *summaries; // ????? (note, text)
@property (nonatomic, copy, readonly) NSArray *otherTitles; // (note, title)
@property (nonatomic, copy, readonly) NSArray *otherNames; // OCDName
@property (nonatomic, copy, readonly) NSArray *relatedBills; // (session, name, relation_type:companion)

@end
