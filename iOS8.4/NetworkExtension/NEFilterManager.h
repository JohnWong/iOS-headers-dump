//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NEConfiguration, NEConfigurationManager, NEContentFilterPlugin, NSArray, NSString;

@interface NEFilterManager : NSObject
{
    _Bool _hasLoaded;
    NSArray *_entitlements;
    NEConfiguration *_configuration;
    NEConfigurationManager *_configurationManager;
}

+ (id)sharedManager;
@property(readonly) NEConfigurationManager *configurationManager; // @synthesize configurationManager=_configurationManager;
@property(retain) NEConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) NSArray *entitlements; // @synthesize entitlements=_entitlements;
@property _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
- (void).cxx_destruct;
@property(copy) NSString *localizedDescription;
@property(getter=isEnabled) _Bool enabled;
@property(retain) NEContentFilterPlugin *pluginConfiguration;
- (void)saveToPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initFilterManager;
- (void)createEmptyConfiguration;
- (id)init;

@end

