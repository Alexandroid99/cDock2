//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Tile.h"

#import "DOCKStackActionHandling.h"
#import "DOCKStackCollapsedDataSource.h"
#import "DOCKStackExpandedDataSource.h"

@class DOCKStack, NSArray, NSMutableArray, NSString;

@interface DOCKSmartFolderTile : Tile <DOCKStackActionHandling, DOCKStackExpandedDataSource, DOCKStackCollapsedDataSource>
{
    DOCKStack *_stack;
    NSMutableArray *_items;
    id _query;
    struct __CFDictionary *_itemMap;
    unsigned char _viewAs;
    int _arrangement;
    int _preferredItemSize;
    int _displayAs;
    NSArray *_extraSortAttributes;
    NSArray *_scope;
    NSArray *_resolvedScope;
    NSString *_filelocation;
    NSArray *_sortedTypeAheadArray;
    NSString *_queryAttr;
    NSMutableArray *_blocksToPerformOnStackClose;
    unsigned int _finderFilesOnly:1;
    unsigned int _userFilesOnly:1;
}

@property(nonatomic) int preferredItemSize; // @synthesize preferredItemSize=_preferredItemSize;
@property(nonatomic) int displayAs; // @synthesize displayAs=_displayAs;
@property(nonatomic) unsigned char viewAs; // @synthesize viewAs=_viewAs;
@property(nonatomic) int arrangement; // @synthesize arrangement=_arrangement;
- (id)stack;
- (void).cxx_destruct;
- (id)_createFunction:(id)arg1;
- (void)_addStackCloseBlock:(CDUnknownBlockType)arg1;
- (void)_queryUpdate:(id)arg1;
- (void)_queryFinish:(id)arg1;
- (void)_releaseQuery;
- (BOOL)_createQuery:(id)arg1;
- (BOOL)_createQuery:(id)arg1 searchScopes:(id)arg2;
- (BOOL)showMenu:(BOOL)arg1 options:(int)arg2;
- (void)render;
- (void)spring:(unsigned int)arg1;
- (_Bool)allowsForcedSpringing;
- (void)doCommand:(unsigned int)arg1;
- (struct OpaqueMenuRef *)createMenu:(CDUnknownFunctionPointerType)arg1 options:(int)arg2;
- (BOOL)doAction:(unsigned int)arg1 fromKeyboard:(BOOL)arg2;
- (id)copyTilePlist;
- (id)typeString;
- (void)collapseStack;
@property(readonly, nonatomic) const char *messageTracerStackType;
- (id)expandedStackValueForKey:(id)arg1 withInfo:(id)arg2;
- (id)expandedStackValueForKey:(id)arg1 atIndex:(unsigned long long)arg2 withItemInfo:(id)arg3 maximumViewableItems:(unsigned long long)arg4;
- (id)collapsedStackValueForKey:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfExpandedStackItems;
- (unsigned long long)numberOfCollapsedStackItems;
- (void)showStackAsMenu:(BOOL)arg1;
- (void)stackDidClose;
- (void)endStackTypeAhead;
- (unsigned long long)indexForStackTypeAhead:(id)arg1;
- (void)beginStackTypeAhead:(id)arg1;
- (BOOL)performStackActionAtIndex:(unsigned long long)arg1 withEvent:(id)arg2 sender:(id)arg3;
@property(readonly, nonatomic) NSArray *sortAttributes; // @dynamic sortAttributes;
- (void)dealloc;
- (id)initWithPlist:(id)arg1;
- (id)initWithCannedFSRef:(const struct FSRef *)arg1;
- (id)initWithFSRef:(const struct FSRef *)arg1;
- (id)_initWithFSRef:(const struct FSRef *)arg1 containerRef:(const struct FSRef *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

