//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MKURLSerializer : NSObject
{
}

- (id)mapItemsFromUrl:(id)arg1 options:(id *)arg2;
- (id)urlToPresentDirectionsFromMapItem:(id)arg1 toMapItem:(id)arg2 directionsMode:(long long)arg3 options:(id)arg4;
- (id)urlForDirectionsFromMapItem:(id)arg1 toMapItem:(id)arg2 directionsMode:(long long)arg3 options:(id)arg4;
- (id)_urlForDirectionsFromMapItem:(id)arg1 toMapItem:(id)arg2 directionsMode:(long long)arg3 options:(id)arg4 precision:(_Bool)arg5;
- (id)urlToPresentMapItems:(id)arg1 options:(id)arg2;
- (id)urlForOpeningMapItems:(id)arg1 options:(id)arg2;
- (id)_urlForOpeningMapItems:(id)arg1 options:(id)arg2 precision:(_Bool)arg3;

@end

