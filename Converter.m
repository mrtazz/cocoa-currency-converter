//
//  Converter.m
//  cocoa-example-app
//
//  Created by Daniel Schauenberg
//

#import "Converter.h"


@implementation Converter
@synthesize sourceCurrencyAmount, rate;

- (float) convertCurrency
{
	return self.sourceCurrencyAmount * self.rate;
}

@end
