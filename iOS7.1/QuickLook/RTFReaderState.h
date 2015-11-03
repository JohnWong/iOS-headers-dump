//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableData, NSMutableDictionary, RTFTextTable;

__attribute__((visibility("hidden")))
@interface RTFReaderState : NSObject
{
    id _delegate;
    unsigned int _defaultToUniCharEncoding;
    NSMutableDictionary *_documentInfoDictionary;
    struct CGSize _paperSize;
    double _lMargin;
    double _rMargin;
    double _bMargin;
    double _tMargin;
    struct CGSize _viewSize;
    int _viewScale;
    int _viewKind;
    NSMutableArray *_attributesStack;
    NSMutableDictionary *_curAttributes;
    unsigned int _level;
    struct _NSAttributeInfo _attributeInfo;
    NSMutableData *_attributeInfoStack;
    long long _tableNestingLevel;
    _Bool _isRTLDocument;
    NSArray *_textBlocks;
    NSMutableArray *_nestedTables;
    RTFTextTable *_currentTable;
    RTFTextTable *_previousTable;
    NSMutableArray *_currentRowArray;
    NSMutableArray *_previousRowArray;
    int _currentRow;
    int _currentColumn;
    int _currentDefinitionColumn;
    _Bool _currentRowIsLast;
    _Bool _setTableCells;
    unsigned long long _currentBorderEdge;
    _Bool _currentBorderIsTable;
    NSMutableDictionary *_listDefinitions;
    int _currentListNumber;
    int _currentListLevel;
}

- (void)_notifyEndTableCellWithCell:(id)arg1;
- (void)_notifyStartTableCell;
- (void)_notifyEndTableRow;
- (void)_notifyStartTableRow;
- (void)_notifyEndTable;
- (void)_notifyStartTable;
- (void)_notifyEndParagraph;
- (void)_notifyStartParagraph;
- (void)_notifyProcessString:(id)arg1;
- (void)addOverride:(long long)arg1 forKey:(long long)arg2;
- (void)addListDefinition:(id)arg1 forKey:(long long)arg2;
- (id)listDefinitions;
- (void)setCurrentListLevel:(long long)arg1;
- (long long)currentListLevel;
- (void)setCurrentListNumber:(long long)arg1;
- (long long)currentListNumber;
- (void)setCurrentBorderEdge:(unsigned long long)arg1 isTable:(_Bool)arg2;
- (void)mergeTableCellsVertically;
- (void)mergeTableCellsHorizontally;
- (void)endTableRow;
- (_Bool)isLastTableRow;
- (void)lastTableRow;
- (void)endTableCell;
- (void)_paragraphInTable;
- (void)endTableCellDefinition;
- (void)startTableRowDefinition;
- (void)setTableNestingLevel:(long long)arg1;
- (void)_clearTableCells;
- (void)_setTableCells;
- (void)_popTableState;
- (void)_pushTableState;
- (void)_setCurrentBorderEdge:(unsigned long long)arg1 isTable:(_Bool)arg2;
- (_Bool)_currentTableCellIsPlaceholder;
- (_Bool)currentBorderIsTable;
- (unsigned long long)currentBorderEdge;
- (id)currentTableCell;
- (id)currentTable;
- (void)_beginTableRow;
- (void)_ensureTableCells;
- (_Bool)currentTableCellIsPlaceholder;
- (void)setTableFlags:(unsigned long long)arg1;
- (void)paragraphInTable;
- (void)_updateAttributes;
- (void)processString:(id)arg1;
- (void)endParagraph;
- (void)startParagraph;
- (id)currentParagraphStyle;
- (id)mutableParagraphStyle;
- (id)defaultParagraphStyle;
- (void)removeAttributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (long long)baseWritingDirection;
- (void)setBaseWritingDirection:(long long)arg1;
- (_Bool)hasWritingDirectionAttribute;
- (void)setHasWritingDirectionAttribute:(_Bool)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (_Bool)italic;
- (void)setItalic:(_Bool)arg1;
- (_Bool)bold;
- (void)setBold:(_Bool)arg1;
- (void)setFontIsValid:(_Bool)arg1;
- (unsigned int)unicodeAlternativeLength;
- (void)setUnicodeAlternativeLength:(unsigned int)arg1;
- (_Bool)multiByteEncoding;
- (void)setMultiByteEncoding:(_Bool)arg1;
- (unsigned int)codePageEncoding;
- (void)setCodePageEncoding:(unsigned int)arg1;
- (unsigned int)toUniCharEncoding;
- (void)setToUniCharEncoding:(unsigned int)arg1;
- (unsigned int)defaultToUniCharEncoding;
- (void)setDefaultToUniCharEncoding:(unsigned int)arg1;
- (unsigned int)level;
- (id)currentAttributes;
- (id)mutableAttributes;
- (void)setViewScale:(long long)arg1;
- (void)setViewKind:(long long)arg1;
- (struct CGSize)viewSize;
- (void)setViewSize:(struct CGSize)arg1;
- (double)bottomMargin;
- (void)setBottomMargin:(double)arg1;
- (double)topMargin;
- (void)setTopMargin:(double)arg1;
- (double)rightMargin;
- (void)setRightMargin:(double)arg1;
- (double)leftMargin;
- (void)setLeftMargin:(double)arg1;
- (struct CGSize)paperSize;
- (void)setPaperSize:(struct CGSize)arg1;
- (id)documentInfoDictionary;
- (void)popState;
- (void)pushState;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
