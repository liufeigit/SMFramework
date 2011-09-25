/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSMutableData, ATVTCPControlReceiver;

__attribute__((visibility("hidden")))
@interface ATVDirectionalRemoteConnectionHandler : NSObject {
@private
	ATVTCPControlReceiver *_controlReceiver;	// 4 = 0x4
	unsigned long _receiverDecryptionKey;	// 8 = 0x8
	NSMutableData *_remainderData;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x34c41a0d; S=0x34c41a1d; converted property
- (id)init;	// 0x34c41901
- (id)_checkDataIntegrity:(id)integrity;	// 0x34c41cfd
- (unsigned long)_decryptReceivedWord:(unsigned long)word;	// 0x34c42111
- (void)_processTouchCommand:(id)command;	// 0x34c42125
- (void)_promptReceived:(id)received;	// 0x34c424c1
- (void)_setupControlReceiver:(id)receiver encryptionKey:(unsigned long)key;	// 0x34c41f29
- (void)allConnectionsClosed:(id)closed;	// 0x34c41a2d
- (void)dealloc;	// 0x34c41975
// converted property getter: - (id)delegate;	// 0x34c41a0d
- (void)newBytesReceived:(id)received data:(id)data;	// 0x34c41a69
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x34c41a1d
@end
