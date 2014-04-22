//
//  OCDKitTests.m
//  OCDKitTest
//
//  Created by Daniel Cloud on 4/22/14.
//
//

#import "OCDTestsBase.h"

@interface OCDKitTests : OCDTestsBase

@end

@implementation OCDKitTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testClientURL {
    XCTAssertEqual(self.client.baseURL.absoluteString , @"https://api.opencivicdata.org");
}

@end
