//
//  OCHamcrest - HCIsTypeOf.h
//  Copyright 2013 hamcrest.org. See LICENSE.txt
//
//  Created by: Jon Reid, http://qualitycoding.org/
//  Docs: http://hamcrest.github.com/OCHamcrest/
//  Source: https://github.com/hamcrest/OCHamcrest
//

#import <OCHamcrest/HCBaseMatcher.h>


@interface HCIsTypeOf : HCBaseMatcher
{
    Class theClass;
}

+ (id)isTypeOf:(Class)type;
- (id)initWithType:(Class)type;

@end


OBJC_EXPORT id<HCMatcher> HC_isA(Class aClass);

/**
    isA(aClass) -
    Matches if object is an instance of a given class (but not of a subclass).
    
    @param aClass  The class to compare against as the expected class.
    
    This matcher checks whether the evaluated object is an instance of @a aClass.

    Example:
    @li @ref isA([Foo class])

    (In the event of a name clash, don't \#define @c HC_SHORTHAND and use the synonym
    @c HC_isA instead.)

    @ingroup object_matchers
 */
#ifdef HC_SHORTHAND
    #define isA HC_isA
#endif
