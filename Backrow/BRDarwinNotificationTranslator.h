/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSMutableDictionary;

@interface BRDarwinNotificationTranslator : BRSingleton {
@private
	NSMutableDictionary *_registrations;	// 4 = 0x4
}
+ (BOOL)deregisterDarwinNotification:(const char *)notification;	// 0x34dbe7ed
+ (int)notificationTokenForDarwinNotification:(const char *)darwinNotification;	// 0x34dbe81d
+ (BOOL)registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x34dbe7b9
+ (void)setSingleton:(id)singleton;	// 0x34dbe655
+ (id)singleton;	// 0x34dbe649
- (id)init;	// 0x34dbe661
- (BOOL)_deregisterDarwinNotification:(const char *)notification;	// 0x34dbeadd
- (BOOL)_registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x34dbe879
- (id)_registrationForDarwinNotification:(const char *)darwinNotification;	// 0x34dbebe1
- (id)_registrationForToken:(int)token;	// 0x34dbec21
- (void)dealloc;	// 0x34dbe6c1
@end

