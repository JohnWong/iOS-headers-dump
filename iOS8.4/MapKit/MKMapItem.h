//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOURLSerializable.h"

@class GEOAddress, GEOFeatureStyleAttributes, GEOMapRegion, GEOPDBusinessClaim, GEOPDFlyover, GEOPlace, MKMapItemMetadata, MKPlacemark, NSData, NSString, NSURL, _MKMapItemPhotosAttribution, _MKMapItemPlaceAttribution, _MKMapItemReviewsAttribution;

@interface MKMapItem : NSObject <GEOURLSerializable>
{
    _Bool _isCurrentLocation;
    _Bool _isPlaceHolder;
    id <GEOMapItemPrivate> _geoMapItem;
    _MKMapItemPlaceAttribution *_attribution;
    _MKMapItemPhotosAttribution *_photosAttribution;
    _MKMapItemReviewsAttribution *_reviewsAttribution;
    MKMapItemMetadata *_metadata;
    GEOPlace *_place;
}

+ (id)urlForMapItems:(id)arg1 options:(id)arg2;
+ (id)urlForMapItem:(id)arg1 options:(id)arg2;
+ (id)mapItemsFromURL:(id)arg1 options:(id *)arg2;
+ (id)_sharedSessionURLForPunchoutURL:(id)arg1;
+ (id)mapItemWithDictionary:(id)arg1;
+ (id)standardOptionsFromPlistCompatibleDictionary:(id)arg1;
+ (id)plistCompatibleDictionaryFromStandardOptions:(id)arg1;
+ (_Bool)openMapsWithItems:(id)arg1 launchOptions:(id)arg2;
+ (id)mapItemForCurrentLocation;
+ (void)_mapItemsWithSerializedPlaceDataResponse:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)mapItemWithSerializedPlaceData:(id)arg1;
+ (id)_itemWithAddressBookRef:(void *)arg1 geoMapItem:(id)arg2;
+ (id)_itemWithGeoMapItem:(id)arg1;
+ (id)_mapItemWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned int)arg9 normalizedUserRatingScore:(float)arg10;
+ (void)_fillOutRequest:(id)arg1 withMapsDataString:(id)arg2;
@property(readonly, nonatomic, getter=_reviewsAttribution) _MKMapItemReviewsAttribution *reviewsAttribution; // @synthesize reviewsAttribution=_reviewsAttribution;
@property(readonly, nonatomic, getter=_photosAttribution) _MKMapItemPhotosAttribution *photosAttribution; // @synthesize photosAttribution=_photosAttribution;
@property(readonly, nonatomic, getter=_attribution) _MKMapItemPlaceAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) _Bool isPlaceHolder; // @synthesize isPlaceHolder=_isPlaceHolder;
@property(readonly, nonatomic) GEOPlace *place; // @synthesize place=_place;
@property(readonly, nonatomic) MKMapItemMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool isCurrentLocation; // @synthesize isCurrentLocation=_isCurrentLocation;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_businessClaim) GEOPDBusinessClaim *businessClaim;
@property(readonly, nonatomic, getter=_hasBusinessClaim) _Bool hasBusinessClaim;
@property(readonly, nonatomic, getter=_customIconID) unsigned long long customIconID;
@property(readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
- (id)_reviewsAttributionWithSourceStringFormat:(id)arg1 moreSourceStringFormat:(id)arg2;
- (id)_photoAttributionWithSourceStringFormat:(id)arg1 moreSourceStringFormat:(id)arg2;
- (id)_infoAttributionWithSourceStringFormat:(id)arg1 moreSourceStringFormat:(id)arg2;
- (id)_attributionWithDisplayName:(id)arg1 attributionFormat:(id)arg2 logo:(id)arg3;
@property(readonly, nonatomic, getter=_reviewsDisplayName) NSString *reviewsDisplayName;
@property(readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property(readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property(readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
@property(readonly, nonatomic, getter=_needsAttribution) _Bool needsAttribution;
- (_Bool)_isEquivalentURLRepresentationTo:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (id)urlRepresentation;
- (id)dictionaryRepresentation;
- (_Bool)openInMapsWithLaunchOptions:(id)arg1;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (int)_recommendedTransportType;
@property(readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
@property(readonly, nonatomic, getter=_placeAsData) NSData *placeAsData;
@property(readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property(readonly, nonatomic, getter=_openingHoursOptions) unsigned long long openingHoursOptions;
@property(readonly, nonatomic, getter=_disambiguationName) NSString *disambiguationName;
@property(readonly, nonatomic, getter=_localizedOperatingHours) NSString *localizedOperatingHours;
@property(readonly, nonatomic, getter=_hasLocalizedOperatingHours) _Bool hasLocalizedOperatingHours;
@property(readonly, nonatomic, getter=_hasOperatingHours) _Bool hasOperatingHours;
@property(readonly, nonatomic, getter=_hasResolvablePartialInformation) _Bool hasResolvablePartialInformation;
@property(readonly, nonatomic, getter=_takesReservations) _Bool takesReservations;
@property(readonly, nonatomic, getter=_hasTakesReservationsAmenity) _Bool hasTakesReservationsAmenity;
@property(readonly, nonatomic, getter=_goodForKids) _Bool goodForKids;
@property(readonly, nonatomic, getter=_hasGoodForKidsAmenity) _Bool hasGoodForKidsAmenity;
@property(readonly, nonatomic, getter=_hasDelivery) _Bool hasDelivery;
@property(readonly, nonatomic, getter=_hasDeliveryAmenity) _Bool hasDeliveryAmenity;
@property(readonly, nonatomic, getter=_hasAnyAmenities) _Bool hasAnyAmenities;
@property(readonly, nonatomic, getter=_firstLocalizedCategoryName) NSString *firstLocalizedCategoryName;
- (_Bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
@property(readonly, nonatomic, getter=_shortAddress) NSString *shortAddress;
@property(readonly, nonatomic, getter=_geoAddress) GEOAddress *geoAddress;
@property(readonly, nonatomic, getter=_formattedTelephone) NSString *formattedTelephone;
@property(readonly, nonatomic, getter=_hasFormattedTelephone) _Bool hasFormattedTelephone;
@property(readonly, nonatomic, getter=_priceRangeString) NSString *priceRangeString;
@property(readonly, nonatomic, getter=_hasPriceRange) _Bool hasPriceRange;
@property(readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property(readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property(readonly, nonatomic, getter=_hasUserRatingScore) _Bool hasUserRatingScore;
@property(readonly, nonatomic, getter=_muid) unsigned long long muid;
@property(readonly, nonatomic, getter=_hasMUID) _Bool hasMUID;
@property(readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncement;
@property(readonly, nonatomic, getter=_hasFlyoverAnnouncementMessage) _Bool hasFlyoverAnnouncement;
@property(readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property(readonly, nonatomic, getter=_hasFlyover) _Bool hasFlyover;
@property(readonly, nonatomic, getter=_geoFenceMapRegion) GEOMapRegion *geoFenceMapRegion;
@property(readonly, nonatomic, getter=_displayMapRegion) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic, getter=_coordinate) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) NSString *yelpID;
@property(retain, nonatomic) NSURL *url;
@property(copy, nonatomic) NSString *phoneNumber;
- (id)_getBusiness;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic, getter=_geoMapItem) id <GEOMapItemPrivate> geoMapItem;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)_didResolveAttribution:(id)arg1;
- (void)_refreshAttribution;
@property(readonly, nonatomic) MKPlacemark *placemark;
- (void)dealloc;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithAddressDictionary:(id)arg1;
- (id)initWithPlace:(id)arg1 isPlaceHolderPlace:(_Bool)arg2;
- (id)initWithPlace:(id)arg1;
- (id)initWithGeoMapItem:(id)arg1 isPlaceHolderPlace:(_Bool)arg2;
- (id)thumbnailWithSize:(struct CGSize)arg1 annotationView:(id)arg2;
- (id)sharingURL;
@property(readonly, nonatomic) NSString *formattedNumberOfReviewsIncludingProvider;
@property(readonly, nonatomic) NSString *formattedNumberOfReviews;
@property(readonly, getter=_hasDisplayableAmenities) _Bool hasDisplayableAmenities;
- (id)_mapsDataString;
- (void)_setRecord:(void *)arg1 property:(int)arg2 stringValue:(id)arg3 label:(id)arg4;
- (id)_placeCardContact;
@property(readonly, getter=_isEmptyContactMapItem) _Bool isEmptyContactMapItem;
- (id)initWithContact:(id)arg1;
- (id)_localizedBusinessHoursWithCurrentOpeningHoursOptions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

