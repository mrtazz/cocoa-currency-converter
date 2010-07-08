//
//  Converter.h
//  cocoa-example-app
//
//  Created by Daniel Schauenberg
//

#import <Cocoa/Cocoa.h>


@interface Converter : NSObject {
    float sourceCurrencyAmount, rate;
}

@property (retain) float sourceCurrencyAmount, rate;

- (float) convertCurrency;

@end
