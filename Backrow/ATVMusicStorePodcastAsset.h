/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRRSSMediaAsset.h"

@class NSDictionary, ATVMusicStoreShowInfo;

@interface ATVMusicStorePodcastAsset : BRRSSMediaAsset {
@private
	NSDictionary *_feedInfo;	// 16 = 0x10
	ATVMusicStoreShowInfo *_showInfo;	// 20 = 0x14
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x34c31ac1; S=0x34c31a99; converted property
@property(retain) NSDictionary *feedInfo;	// G=0x34c3138d; S=0x34c31355; converted property
- (id)initWithFeedInfo:(id)feedInfo;	// 0x34c31251
- (id)_podcastID;	// 0x34c31c49
- (id)_showInfo;	// 0x34c31c99
- (id)artist;	// 0x34c318c1
- (id)assetID;	// 0x34c3139d
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x34c31ac1
- (id)cast;	// 0x34c314a5
- (id)copyright;	// 0x34c3194d
- (id)coverArtID;	// 0x34c31651
- (id)dateAcquired;	// 0x34c316f9
- (id)datePublished;	// 0x34c316c9
- (id)datePublishedString;	// 0x34c3189d
- (void)dealloc;	// 0x34c312fd
- (id)description;	// 0x34c31995
- (id)directors;	// 0x34c31515
- (long)duration;	// 0x34c31439
// converted property getter: - (id)feedInfo;	// 0x34c3138d
- (id)genres;	// 0x34c317fd
- (BOOL)hasCoverArt;	// 0x34c31625
- (BOOL)hasVideoContent;	// 0x34c31829
- (void)incrementPerformanceCount;	// 0x34c31a39
- (BOOL)isExplicit;	// 0x34c319b9
- (id)mediaDescription;	// 0x34c31409
- (id)mediaSummary;	// 0x34c31939
- (id)mediaType;	// 0x34c3170d
- (id)mediaURL;	// 0x34c31555
- (long)performanceCount;	// 0x34c31a15
- (id)previewURL;	// 0x34c315ad
- (id)primaryCollectionTitle;	// 0x34c318fd
- (id)primaryGenre;	// 0x34c3175d
- (id)primaryGenreAsString;	// 0x34c3172d
- (id)producers;	// 0x34c31535
- (id)publisher;	// 0x34c31991
- (id)rating;	// 0x34c31825
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x34c31a99
// converted property setter: - (void)setFeedInfo:(id)info;	// 0x34c31355
- (void)setHasBeenPlayed:(BOOL)played;	// 0x34c31a71
- (id)thumbnailArtID;	// 0x34c316b5
- (id)thumbnailURL;	// 0x34c3197d
- (id)title;	// 0x34c313d9
- (float)userStarRating;	// 0x34c3181d
- (void)willBeginPlayback;	// 0x34c31ae5
@end

