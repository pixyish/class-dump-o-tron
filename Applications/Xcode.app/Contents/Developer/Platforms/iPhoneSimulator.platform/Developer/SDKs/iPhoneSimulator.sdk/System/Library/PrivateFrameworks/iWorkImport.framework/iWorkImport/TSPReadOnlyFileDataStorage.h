//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPFileDataStorage.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface TSPReadOnlyFileDataStorage : TSPFileDataStorage
{
    NSURL *_URL;
}

- (void).cxx_destruct;
- (_Bool)writeData:(id)arg1 toPackageWriter:(id)arg2 preferredFilename:(id)arg3 filename:(id *)arg4 didCopyDataToPackage:(_Bool *)arg5 isMissingData:(_Bool *)arg6;
- (_Bool)readOnly;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;

@end
