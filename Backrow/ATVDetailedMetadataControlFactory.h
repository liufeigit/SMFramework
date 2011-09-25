/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library
#import "BRControlFactory.h"


@interface ATVDetailedMetadataControlFactory : NSObject <BRControlFactory> {
}
+ (id)factory;	// 0x34bef195
- (void)_populateActors:(id)actors forControl:(id)control;	// 0x34befa15
- (void)_populateDirectors:(id)directors forControl:(id)control;	// 0x34befa7d
- (void)_populateMovieDetails:(id)details forControl:(id)control isTrailer:(BOOL)trailer;	// 0x34bef5d1
- (void)_populateProducers:(id)producers forControl:(id)control;	// 0x34befb05
- (id)_setupBaseDetailedMetadataControl:(id)control;	// 0x34bef34d
- (id)_setupMusicDetailedMetadataControl:(id)control;	// 0x34bef45d
- (void)_setupSpecificDetailedMetadataControl:(id)control forControl:(id)control2;	// 0x34bef4a5
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x34bef1c5
@end
