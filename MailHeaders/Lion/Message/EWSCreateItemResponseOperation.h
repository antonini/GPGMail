/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/EWSResponseOperation.h>

@class NSString;

@interface EWSCreateItemResponseOperation : EWSResponseOperation
{
    NSString *_itemId;
}

- (void)dealloc;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;
- (void)executeOperation;
@property(copy) NSString *itemId; // @synthesize itemId=_itemId;

@end

