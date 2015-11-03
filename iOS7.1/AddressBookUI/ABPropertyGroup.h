//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABAbstractPropertyGroup.h>

@class ABActionsController, ABCapabilitiesManager, NSMutableArray, NSMutableDictionary, NSString;

@interface ABPropertyGroup : ABAbstractPropertyGroup
{
    int _property;
    void *_context;
    NSMutableDictionary *_valuesByPerson;
    NSMutableArray *_recordInfoDictionaries;
    NSMutableArray *_propertyLabels;
    NSMutableDictionary *_lineInfosByIndex;
    ABActionsController *_actionsController;
    void *_defaultPolicy;
    NSMutableDictionary *_preinsertedRecordInfoDictionary;
    id _preinsertedValue;
    NSString *_preinsertedLabel;
    NSMutableDictionary *_insertionRecordInfoDictionary;
    id _insertionValue;
    NSString *_insertionLabel;
    NSMutableDictionary *_recordInfoDictionaryForItemBeingDeleted;
    NSMutableDictionary *_valueForItemBeingDeleted;
    NSString *_labelForItemBeingDeleted;
    long long _lastIndexWithAddedItem;
    ABCapabilitiesManager *_capabilitiesManager;
    _Bool _allowsVibrations;
    id _vibrationManager;
}

- (_Bool)multiCellContentView:(id)arg1 alwaysShowsClearButtonAtIndexPath:(id)arg2;
- (id)keyboardSettingsForKey:(id)arg1 info:(id)arg2;
- (id)placeholderTextForKey:(id)arg1 info:(id)arg2;
- (id)valueForKey:(id)arg1 info:(id)arg2;
- (id)displayTextForInfo:(id)arg1;
- (id)labelTextForInfo:(id)arg1;
- (id)lineInfosForInfo:(id)arg1;
- (id)propertyValueForInfo:(id)arg1;
- (id)peopleFromInfo:(id)arg1 whenEditing:(_Bool)arg2;
- (id)accountBadgeFromInfo:(id)arg1 whenEditing:(_Bool)arg2;
- (_Bool)editableFlagFromInfo:(id)arg1;
- (long long)_indexFromInfo:(id)arg1;
- (void)_getIndex:(long long *)arg1 andEditableFlag:(_Bool *)arg2 fromInfo:(id)arg3;
- (id)_getFromLineInfos:(id)arg1 key:(id)arg2 valueForKey:(id)arg3;
- (long long)indexOfIdentifier:(int)arg1 person:(id)arg2;
- (void)prepareActionsController:(id)arg1 withValueAtIndex:(long long)arg2;
- (id)actionsControllerPreparedWithValueAtIndex:(long long)arg1;
- (_Bool)shouldDisambiguateNotes;
- (void)setCapabilitiesManager:(id)arg1;
- (void)refreshVibrations;
- (id)_vibrationManager;
- (void)setAllowsVibrations:(_Bool)arg1;
- (_Bool)allowsVibrations;
- (_Bool)shouldShowAlertsWhenEditing:(_Bool)arg1;
- (_Bool)shouldShowTextVibrationWhenEditing:(_Bool)arg1;
- (_Bool)shouldShowCallVibrationWhenEditing:(_Bool)arg1;
- (_Bool)shouldShowTextToneWhenEditing:(_Bool)arg1;
- (_Bool)shouldShowRingtoneWhenEditing:(_Bool)arg1;
- (_Bool)hasTextVibration;
- (_Bool)hasCallVibration;
- (_Bool)hasTextTone;
- (_Bool)hasRingtone;
- (_Bool)hasMultipleAlertsAtIndex:(long long)arg1;
- (int)alertIdentifierAtIndex:(long long)arg1;
- (long long)indexOfTextVibrationInAlertEquivalentMultiValue;
- (long long)indexOfCallVibrationInAlertEquivalentMultiValue;
- (long long)indexOfTextToneInAlertEquivalentMultiValue;
- (long long)indexOfRingtoneInAlertEquivalentMultiValue;
- (void)setService:(id)arg1 atIndex:(long long)arg2;
- (id)serviceAtIndex:(long long)arg1;
- (id)shortServiceForService:(id)arg1;
- (void)trimValueForCountryCodeAtIndex:(long long)arg1;
- (void)setCountryCode:(id)arg1 atIndex:(long long)arg2;
- (void)_setCountryCode:(id)arg1 atIndex:(long long)arg2 withCountryName:(_Bool)arg3;
- (id)countryCodeAtIndex:(long long)arg1;
- (_Bool)removeItemAtRow:(long long)arg1 whenEditing:(_Bool)arg2;
- (_Bool)removeItemAtRow:(long long)arg1;
- (void)addPreinsertedItem;
- (void)setPropertyValue:(id)arg1 atIndex:(long long)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 forIndex:(long long)arg3;
- (_Bool)setEmptyValueAtRow:(long long)arg1 whenEditing:(_Bool)arg2;
- (_Bool)setEmptyValueAtIndex:(long long)arg1 editableFlag:(_Bool)arg2 whenEditing:(_Bool)arg3;
- (id)lineInfosAtIndex:(long long)arg1;
- (id)localizedPropertyLabelAtIndex:(long long)arg1;
- (id)actualPropertyLabelAtIndex:(long long)arg1 forPerson:(id)arg2;
- (id)propertyLabelAtIndex:(long long)arg1;
- (id)propertyLabelAtIndex:(long long)arg1 forceUseReadonly:(_Bool)arg2;
- (void)setPropertyLabel:(id)arg1 atIndex:(long long)arg2;
- (void)_setPropertyLabel:(id)arg1 atIndex:(long long)arg2 markChanged:(_Bool)arg3;
- (_Bool)areLabelsEditable;
- (_Bool)canSave;
- (_Bool)_canSaveAtIndex:(long long)arg1;
- (_Bool)canSaveAtIndex:(long long)arg1 editableFlag:(_Bool)arg2;
- (_Bool)canDeleteAtIndex:(long long)arg1 editableFlag:(_Bool)arg2;
- (void)getAnyIdentifier:(int *)arg1 andPerson:(id *)arg2 atIndex:(long long)arg3;
- (id)writablePeopleAtIndex:(long long)arg1;
- (id)propertyValueAtIndex:(long long)arg1 forceUseReadonly:(_Bool)arg2;
- (id)propertyValueAtIndex:(long long)arg1;
- (id)stringValueAtIndex:(long long)arg1;
- (id)rowsToInsertInTransition:(_Bool)arg1;
- (id)rowsToDeleteInTransition:(_Bool)arg1;
- (long long)rowCountWhenEditing:(_Bool)arg1;
- (void)getIndex:(long long *)arg1 andEditableFlag:(_Bool *)arg2 forRow:(long long)arg3 whenEditing:(_Bool)arg4;
- (long long)rowForIndex:(long long)arg1 editableFlag:(_Bool)arg2 whenEditing:(_Bool)arg3;
- (void)reloadFromModel;
- (void)updateRecord;
- (id)description;
- (id)allRecordInfosAtIndex:(long long)arg1;
- (long long)itemCount;
- (_Bool)allowsAdding;
- (_Bool)allowsAddingForPerson:(id)arg1;
- (_Bool)instantMessageServiceIsSupported;
- (_Bool)_instantMessageServiceIsSupportedForPerson:(id)arg1;
- (void *)defaultPolicy;
- (void)setDefaultPolicy:(void *)arg1;
- (void *)_policyForPerson:(id)arg1;
- (void *)context;
- (int)property;
- (void)dealloc;
- (id)initWithProperty:(int)arg1 context:(void *)arg2;
- (long long)insertionIndex;
- (void)_reloadPreinsertedStuff:(_Bool)arg1 insertionStuff:(_Bool)arg2;
- (id)_allRecordInfosInRecordInfoDictionary:(id)arg1;
- (id)_recordInfoDictionaryForPerson:(id)arg1;
- (id)_recordInfoDictionaryForPerson:(id)arg1 identifier:(int)arg2;
- (id)_recordInfoForPerson:(id)arg1;
- (id)_recordInfoForPerson:(id)arg1 identifier:(int)arg2;
- (id)_recordInfoDictionaryWithAllPeople;
- (void)_setRecordInfoDictionary:(id)arg1 atIndex:(long long)arg2;
- (id)_recordInfoDictionaryAtIndex:(long long)arg1;
- (_Bool)_recordInfoDictionary:(id)arg1 containsPerson:(id)arg2;
- (void)_insertSingleValue:(id)arg1 label:(id)arg2 identifier:(int)arg3 forPerson:(id)arg4 indicesAndLabelsForValuesSeenAlready:(id)arg5;
- (id)_findFuzzyMatchingValue:(id)arg1 inDictionary:(id)arg2;
- (_Bool)_isPropertyValue:(id)arg1 equivalentTo:(id)arg2;
- (_Bool)_isBirthdayDate:(id)arg1 equivalentTo:(id)arg2;
- (_Bool)_isSocialProfile:(id)arg1 equivalentTo:(id)arg2;
- (_Bool)_updateCacheWithPropertyValue:(id)arg1 atIndex:(long long)arg2;
- (_Bool)_updateCacheWithPropertyLabel:(id)arg1 atIndex:(long long)arg2;
- (_Bool)_updateCacheWithPropertyValue:(id)arg1 propertyLabel:(id)arg2 recordInfoDictionaryAtIndex:(unsigned long long)arg3 shouldSetValue:(_Bool)arg4 shouldSetLabel:(_Bool)arg5;
- (_Bool)_updateCacheForPerson:(id)arg1 identifier:(int *)arg2 value:(id)arg3 label:(struct __CFString *)arg4 shouldSetValue:(_Bool)arg5 shouldSetLabel:(_Bool)arg6;
- (id)_valueForCheckingExistenceOfPropertyValue:(id)arg1;
- (id)_sortedPeople:(id)arg1;
- (id)_peopleInCache;
- (id)_newLocalizedCountryNameForCountryCode:(id)arg1;
- (id)_stringRepresentationOfPropertyValue:(id)arg1;
- (_Bool)_isEmptyValue:(id)arg1 isPreinserted:(_Bool)arg2;
- (id)_newLocalizedPlaceholderForKey:(id)arg1;
- (_Bool)_propertyIsDate;
- (void)_clearAllCachedInfo;
- (void)_getFromCacheAnyPropertyValue:(id *)arg1 andLabel:(id *)arg2 forRecordInfoDictionary:(id)arg3;
- (void)_getAnyIdentifier:(int *)arg1 person:(id *)arg2 propertyValue:(id *)arg3 propertyLabel:(id *)arg4 fromRecordInfoDictionary:(id)arg5;
- (id)_bestValueBetween:(id)arg1 and:(id)arg2;
- (void)_getFromCachePropertyValue:(id *)arg1 andLabel:(id *)arg2 forPerson:(id)arg3 identifier:(int)arg4;
- (void)_addValuesToCache;
- (_Bool)_hasNonNullSoundForIdentifier:(int)arg1;
- (_Bool)_removeValueInCacheForPerson:(id)arg1;
- (_Bool)_setValueInCache:(void *)arg1 forPerson:(id)arg2 preventLabelChange:(_Bool)arg3;
- (_Bool)_setValueInCache:(void *)arg1 forPerson:(id)arg2;
- (id)_valueFromCacheForPerson:(id)arg1;
- (void *)_copyCachedValueForPerson:(id)arg1;

@end

