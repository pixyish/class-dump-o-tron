//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct ConversionCandidate {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
};

struct LearningDictionary {
    struct __CFString *_field1;
    int _field2;
    unsigned char _field3;
    unsigned char _field4;
    double _field5;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field6;
    struct LearningDictionaryTrie *_field7;
    struct vector<EntryField, std::__1::allocator<EntryField>> _field8;
    void *_field9;
    void *_field10;
    void *_field11;
    int _field12;
    void *_field13;
};

struct LearningDictionaryTrie;

struct MecabraCandidateBase {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct vector<EntryField, std::__1::allocator<EntryField>> {
    CDStruct_183601bc *_field1;
    CDStruct_183601bc *_field2;
    struct __compressed_pair<EntryField *, std::__1::allocator<EntryField>> {
        CDStruct_183601bc *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct CDStruct_183601bc;

