// Generated by Apple Swift version 3.0.1 (swiftlang-800.0.58.6 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import Foundation;
@import CoreGraphics;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;

SWIFT_CLASS("_TtC15NativeCommunity11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIGestureRecognizer;
@class UIButton;
@class UITextView;
@class UITextField;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC15NativeCommunity29AskTheCommunityViewController")
@interface AskTheCommunityViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified chooseCategoryButton;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified descriptionTextView;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified titleTextField;
@property (nonatomic, copy) NSString * _Nullable forumid;
- (void)viewDidLoad;
- (void)descriptionTextFieldEmptier;
- (BOOL)gestureRecognizerWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer;
- (void)viewWillAppear:(BOOL)animated;
- (IBAction)categoryButtonHandler:(UIButton * _Nonnull)sender;
- (void)viewWillDisappear:(BOOL)animated;
- (void)postButtonHandler;
- (void)onCategoryPickedWithCategory:(NSString * _Nonnull)category forumid:(NSString * _Nonnull)forumid;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITapGestureRecognizer;
@class UIStackView;

SWIFT_CLASS("_TtC15NativeCommunity28ChooseCategoryViewController")
@interface ChooseCategoryViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIStackView * _Null_unspecified stackView;
@property (nonatomic, copy) NSArray<UIButton *> * _Null_unspecified buttonArray;
- (void)viewDidLoad;
- (void)selectedButtonWithSender:(UITapGestureRecognizer * _Nonnull)sender;
- (void)viewWillAppear:(BOOL)animated;
- (void)onCategoryPickedWithCategory:(NSString * _Nonnull)category forumid:(NSString * _Nonnull)forumid;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UILabel;
@class UIImageView;

SWIFT_CLASS("_TtC15NativeCommunity21CommentsTableViewCell")
@interface CommentsTableViewCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified commentsLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified categoryLabel;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified heartImageView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified likesNumberLabel;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSString;
@class UIImage;
@class UITableView;
@class ForumsPageTableViewCell;
@class UIScrollView;

SWIFT_CLASS("_TtC15NativeCommunity37CommunityFrontPageTableViewController")
@interface CommunityFrontPageTableViewController : UITableViewController
@property (nonatomic, copy) NSString * _Nullable currentForum;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) NSCache<NSString *, UIImage *> * _Nonnull imageCache;)
+ (NSCache<NSString *, UIImage *> * _Nonnull)imageCache;
+ (void)setImageCache:(NSCache<NSString *, UIImage *> * _Nonnull)value;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (void)tableView:(UITableView * _Nonnull)tableView willDisplayCell:(UITableViewCell * _Nonnull)cell forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)reformatCellWithCell2:(ForumsPageTableViewCell * _Nonnull)cell2;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15NativeCommunity25DetailedPostTableViewCell")
@interface DetailedPostTableViewCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified likesLabel;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified profileImageView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified usernameLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified timeLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified commentLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified categoryLabel;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified heartImageView;
- (void)layoutSubviews;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15NativeCommunity31DetailedPostTableViewController")
@interface DetailedPostTableViewController : UITableViewController
@property (nonatomic, readonly) NSInteger postDetailsIndex;
@property (nonatomic, readonly) NSInteger userPostAndProfileSection;
@property (nonatomic, readonly) NSInteger commentsSection;
@property (nonatomic, strong) UIButton * _Nullable writeCommentButton;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(BOOL)animated;
- (IBAction)executeLike:(UIButton * _Nonnull)sender;
- (void)incrementOrDecrementLikesWithNodeid:(NSString * _Nonnull)nodeid value:(NSInteger)value;
- (void)writeCommentButtonHandler;
- (NSString * _Nonnull)getDateWithSeconds:(double)seconds;
- (void)viewWillAppear:(BOOL)animated;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (NSString * _Nullable)tableView:(UITableView * _Nonnull)tableView titleForHeaderInSection:(NSInteger)section;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UINavigationBar;
@class UINavigationItem;

SWIFT_CLASS("_TtC15NativeCommunity25EditProfileViewController")
@interface EditProfileViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified profileImageView;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified statusTextField;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified aboutTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified birthdayTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified locationTextField;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified interestsTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified birthYearTextField;
@property (nonatomic, weak) IBOutlet UINavigationBar * _Null_unspecified navBar;
@property (nonatomic, weak) IBOutlet UINavigationItem * _Null_unspecified navItem;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull editProfileData1;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull editProfileStrings;
@property (nonatomic, readonly) NSInteger aboutMeIndex;
@property (nonatomic, readonly) NSInteger birthdayIndex;
@property (nonatomic, readonly) NSInteger locationIndex;
@property (nonatomic, readonly) NSInteger interestsIndex;
@property (nonatomic, readonly) NSInteger statusIndex;
- (void)viewDidLoad;
- (void)setUpTextFields;
- (void)setUpNavBar;
- (void)saveButtonHandler;
- (void)profileImageButtonHandler;
- (IBAction)changeButtonHandler:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15NativeCommunity23ForumsPageTableViewCell")
@interface ForumsPageTableViewCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified questionLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified descriptionLabel;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified profileImageView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified categoryLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified usernameLabel;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified heartIconImageView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified conversationIconImageView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified viewCountIconImageView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified postedInLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified replyCountLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified viewCountLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified likesCountLabel;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class VBulletinApiCalls;
@class OS_dispatch_semaphore;
@class UIRefreshControl;
@class UIStoryboardSegue;
@class UIBezierPath;
@class UIToolbar;
@class UIView;
@class UIBarButtonItem;

SWIFT_CLASS("_TtC15NativeCommunity18MainViewController")
@interface MainViewController : UIViewController
@property (nonatomic, weak) IBOutlet UINavigationItem * _Null_unspecified navItem;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified latoFontLabel;
@property (nonatomic, copy) NSArray<NSDictionary<NSString *, id> *> * _Nonnull rawThreadData;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) VBulletinApiCalls * _Nullable caller;)
+ (VBulletinApiCalls * _Nullable)caller;
+ (void)setCaller:(VBulletinApiCalls * _Nullable)value;
@property (nonatomic, copy) NSString * _Nullable currentForumID;
@property (nonatomic, strong) OS_dispatch_semaphore * _Nonnull mutex;
@property (nonatomic, copy) NSArray<UIButton *> * _Nonnull toolBarButtons;
@property (nonatomic, strong) UIButton * _Nullable askTheCommunityButton;
@property (nonatomic, strong) CommunityFrontPageTableViewController * _Nullable communityFrontPageViewController;
@property (nonatomic, strong) UIRefreshControl * _Nullable refreshControl;
@property (nonatomic, weak) IBOutlet UIToolbar * _Null_unspecified toolbar;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified containerView;
@property (nonatomic, weak) IBOutlet UIBarButtonItem * _Null_unspecified topBarButton;
@property (nonatomic, weak) IBOutlet UIBarButtonItem * _Null_unspecified newBarButton;
@property (nonatomic, weak) IBOutlet UIBarButtonItem * _Null_unspecified periodQuestionBarButton;
@property (nonatomic, weak) IBOutlet UIBarButtonItem * _Null_unspecified offTopicBarButton;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)setUpVBulletinData;
- (void)setupAskTheCommunityButton;
- (void)setupScrollingButtonBar;
- (UIBezierPath * _Nonnull)drawBezierPathWithRect:(CGRect)rect topOffset:(CGFloat)topOffset bottomOffset:(CGFloat)bottomOffset;
- (void)setupNavBar;
- (void)backButtonHandler;
- (void)profileImageButtonHandler;
- (void)askTheCommunityButtonHandler;
- (void)barButtonHandler:(UIButton * _Nonnull)sender;
- (void)refreshData;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15NativeCommunity21PostsTabTableViewCell")
@interface PostsTabTableViewCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified titleLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified descriptionLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified timeLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified categoryLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified likesLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified viewsLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified replyLabel;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified heartImageView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified viewsImageView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified replyImageView;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15NativeCommunity30ProfilePageTableViewController")
@interface ProfilePageTableViewController : UITableViewController
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull profileDataObject;
@property (nonatomic, copy) NSArray<NSDictionary<NSString *, id> *> * _Nonnull dataObject;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull tabNames;
@property (nonatomic, readonly) NSInteger profileTabIndex;
@property (nonatomic, readonly) NSInteger postsTabIndex;
@property (nonatomic, readonly) NSInteger commentsTabIndex;
@property (nonatomic, readonly) NSInteger settingsTabIndex;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull profileSectionStrings;
@property (nonatomic, readonly) NSInteger aboutMeIndex;
@property (nonatomic, readonly) NSInteger birthdayIndex;
@property (nonatomic, readonly) NSInteger locationIndex;
@property (nonatomic, readonly) NSInteger interestsIndex;
@property (nonatomic, readonly) NSInteger statusIndex;
@property (nonatomic, copy) NSString * _Nullable currentTab;
@property (nonatomic) NSInteger currentPageNumber;
- (void)viewDidLoad;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (NSString * _Nullable)tableView:(UITableView * _Nonnull)tableView titleForHeaderInSection:(NSInteger)section;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView willDisplayCell:(UITableViewCell * _Nonnull)cell forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15NativeCommunity23ProfileTabTableViewCell")
@interface ProfileTabTableViewCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified detailsLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified sectionLabel;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15NativeCommunity21ProfileViewController")
@interface ProfileViewController : UIViewController
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified titleLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified numberOfPostsLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified userNameLabel;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified profileImageView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified innerView;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull profileDescription;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull profileData;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull profileDataStrings;
@property (nonatomic, readonly) NSInteger usernameIndex;
@property (nonatomic, readonly) NSInteger postsIndex;
@property (nonatomic, readonly) NSInteger titleIndex;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull tabNames;
@property (nonatomic, readonly) NSInteger profileTabIndex;
@property (nonatomic, readonly) NSInteger postsTabIndex;
@property (nonatomic, readonly) NSInteger commentsTabIndex;
@property (nonatomic, readonly) NSInteger settingsTabIndex;
@property (nonatomic) NSInteger currentPageNumber;
@property (nonatomic, strong) UIButton * _Nullable editProfileBut;
@property (nonatomic, weak) IBOutlet UIToolbar * _Null_unspecified toolbar;
@property (nonatomic, copy) NSArray<UIButton *> * _Nonnull toolBarButtons;
@property (nonatomic, strong) ProfilePageTableViewController * _Nullable profilePageTableViewController;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)setupButtonBar;
- (void)barButtonHandler:(UIButton * _Nonnull)sender;
- (void)setupVBulletinData;
- (UIBezierPath * _Nonnull)drawBezierPathWithRect:(CGRect)rect topOffset:(CGFloat)topOffset bottomOffset:(CGFloat)bottomOffset;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (void)viewDidAppear:(BOOL)animated;
- (void)editProfileButtonHandler;
- (void)backButtonHandler;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIPageViewController;
@class NSMutableArray;
@class UIColor;
@class UICollectionView;
@protocol UIBarPositioning;
@class UICollectionViewCell;
@class UICollectionViewLayout;
@protocol RGPageViewControllerDataSource;
@protocol RGPageViewControllerDelegate;

SWIFT_CLASS("_TtC15NativeCommunity20RGPageViewController")
@interface RGPageViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIToolbarDelegate, UIBarPositioningDelegate>
@property (nonatomic, weak) id <RGPageViewControllerDataSource> _Nullable datasource;
@property (nonatomic, weak) id <RGPageViewControllerDelegate> _Nullable delegate;
@property (nonatomic, strong) id <UIScrollViewDelegate> _Nullable pageViewScrollDelegate;
@property (nonatomic) BOOL animatingToTab;
@property (nonatomic) BOOL needsSetup;
@property (nonatomic) BOOL needsLayoutSubviews;
@property (nonatomic) NSInteger currentPageIndex;
@property (nonatomic, strong) UIPageViewController * _Null_unspecified pager;
@property (nonatomic, readonly) UIPageViewControllerNavigationOrientation pagerOrientation;
@property (nonatomic, strong) UIScrollView * _Null_unspecified pagerScrollView;
@property (nonatomic, strong) NSMutableArray * _Nonnull pageViewControllers;
@property (nonatomic) NSInteger currentTabIndex;
@property (nonatomic) CGFloat tabWidth;
@property (nonatomic, readonly) CGFloat tabbarWidth;
@property (nonatomic, readonly) CGFloat tabbarHeight;
@property (nonatomic, readonly) CGFloat tabIndicatorWidthOrHeight;
@property (nonatomic, readonly, strong) UIColor * _Nonnull tabIndicatorColor;
@property (nonatomic, readonly) CGFloat tabMargin;
@property (nonatomic, readonly) BOOL tabbarHidden;
@property (nonatomic, readonly) CGFloat tabbarTop;
@property (nonatomic, strong) UIView * _Null_unspecified tabbar;
@property (nonatomic, readonly, strong) UIColor * _Nullable barTintColor;
@property (nonatomic, strong) UICollectionView * _Null_unspecified tabScrollView;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (void)selectTabAtIndex:(NSInteger)index updatePage:(BOOL)updatePage;
- (void)updateTabColorWithIndex:(NSInteger)index;
- (void)reloadData;
- (UIBarPosition)positionForBar:(id <UIBarPositioning> _Nonnull)bar;
- (UIViewController * _Nullable)pageViewController:(UIPageViewController * _Nonnull)pageViewController viewControllerBeforeViewController:(UIViewController * _Nonnull)viewController;
- (UIViewController * _Nullable)pageViewController:(UIPageViewController * _Nonnull)pageViewController viewControllerAfterViewController:(UIViewController * _Nonnull)viewController;
- (void)pageViewController:(UIPageViewController * _Nonnull)pageViewController didFinishAnimating:(BOOL)finished previousViewControllers:(NSArray<UIViewController *> * _Nonnull)previousViewControllers transitionCompleted:(BOOL)completed;
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumLineSpacingForSectionAtIndex:(NSInteger)section;
- (UIEdgeInsets)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout insetForSectionAtIndex:(NSInteger)section;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (BOOL)scrollViewShouldScrollToTop:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidScrollToTop:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewWillBeginDragging:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewWillEndDragging:(UIScrollView * _Nonnull)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(CGPoint * _Nonnull)targetContentOffset;
- (void)scrollViewDidEndDragging:(UIScrollView * _Nonnull)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewWillBeginDecelerating:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewWillBeginZooming:(UIScrollView * _Nonnull)scrollView withView:(UIView * _Nullable)view;
- (void)scrollViewDidZoom:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndZooming:(UIScrollView * _Nonnull)scrollView withView:(UIView * _Nullable)view atScale:(CGFloat)scale;
- (UIView * _Nullable)viewForZoomingInScrollView:(UIScrollView * _Nonnull)scrollView;
@end


SWIFT_PROTOCOL("_TtP15NativeCommunity30RGPageViewControllerDataSource_")
@protocol RGPageViewControllerDataSource
/**
  Asks dataSource how many pages will there be.
  \param pageViewController the RGPageViewController instance that’s subject to


  returns:
  the total number of pages
*/
- (NSInteger)numberOfPagesForViewController:(RGPageViewController * _Nonnull)pageViewController;
/**
  Asks dataSource to give a view to display as a tab item.
  \param pageViewController the RGPageViewController instance that’s subject to

  \param index the index of the tab whose view is asked


  returns:
  a UIView instance that will be shown as tab at the given index
*/
- (UIView * _Nonnull)tabViewForPageAtIndex:(RGPageViewController * _Nonnull)pageViewController index:(NSInteger)index;
/**
  The content for any tab. Return a UIViewController instance and RGPageViewController will use its view to show as content.
  \param pageViewController the RGPageViewController instance that’s subject to

  \param index the index of the content whose view is asked


  returns:
  a UIViewController instance whose view will be shown as content
*/
- (UIViewController * _Nullable)viewControllerForPageAtIndex:(RGPageViewController * _Nonnull)pageViewController index:(NSInteger)index;
@end


SWIFT_PROTOCOL("_TtP15NativeCommunity28RGPageViewControllerDelegate_")
@protocol RGPageViewControllerDelegate
@optional
/**
  Delegate objects can implement this method if want to be informed when a page changed.
  \param index the index of the active page

*/
- (void)willChangePageToIndex:(NSInteger)index fromIndex:(NSInteger)from;
/**
  Delegate objects can implement this method if want to be informed when a page changed.
  \param index the index of the active page

*/
- (void)didChangePageToIndex:(NSInteger)index;
/**
  Delegate objects can implement this method if tabs use dynamic width.
  \param index the index of the tab


  returns:
  the width for the tab at the given index
*/
- (CGFloat)widthForTabAtIndex:(NSInteger)index;
/**
  Delegate objects can implement this method if tabs use dynamic height.
  \param index the index of the tab


  returns:
  the height for the tab at the given index
*/
- (CGFloat)heightForTabAtIndex:(NSInteger)index;
@end


SWIFT_CLASS("_TtC15NativeCommunity12RGTabBarItem")
@interface RGTabBarItem : UIView
@property (nonatomic) BOOL selected;
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic, strong) UIImage * _Nullable image;
@property (nonatomic, strong) UILabel * _Nullable textLabel;
@property (nonatomic, strong) UIImageView * _Nullable imageView;
@property (nonatomic, strong) UIColor * _Nullable normalColor;
- (nonnull instancetype)initWithFrame:(CGRect)frame text:(NSString * _Nullable)text image:(UIImage * _Nullable)image color:(UIColor * _Nullable)color OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)initSelf SWIFT_METHOD_FAMILY(none);
- (void)setSelectedState;
@end


SWIFT_CLASS("_TtC15NativeCommunity19StatusTableViewCell")
@interface StatusTableViewCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified statusLabel;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface UINavigationBar (SWIFT_EXTENSION(NativeCommunity))
- (void)hideHairline;
- (void)showHairline;
- (UIImageView * _Nullable)findHairlineImageViewWithContainedIn:(UIView * _Nonnull)view;
@end

@class NSMutableDictionary;
@class OS_dispatch_queue;

SWIFT_CLASS("_TtC15NativeCommunity17VBulletinApiCalls")
@interface VBulletinApiCalls : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) VBulletinApiCalls * _Nullable caller;)
+ (VBulletinApiCalls * _Nullable)caller;
+ (void)setCaller:(VBulletinApiCalls * _Nullable)value;
@property (nonatomic, strong) NSMutableDictionary * _Nullable communityClientInfo;
@property (nonatomic, strong) NSMutableDictionary * _Nullable recentActivity;
@property (nonatomic, copy) NSDictionary<NSString *, NSArray<NSDictionary<NSString *, id> *> *> * _Nonnull rawDataOrganizer;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull likesData;
@property (nonatomic, copy) NSArray<NSDictionary<NSString *, id> *> * _Nullable rawThreadData;
@property (nonatomic, copy) NSArray<NSDictionary<NSString *, id> *> * _Nullable rawArrayData;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable rawData;
@property (nonatomic, copy) NSString * _Nullable periodTrackerForumId;
@property (nonatomic, strong) OS_dispatch_queue * _Nullable queue;
@property (nonatomic, strong) OS_dispatch_semaphore * _Nonnull forumsMutex;
@property (nonatomic, strong) OS_dispatch_semaphore * _Nonnull threadsMutex;
@property (nonatomic, strong) OS_dispatch_semaphore * _Nonnull likesMutex;
@property (nonatomic, strong) OS_dispatch_semaphore * _Nonnull activityMutex;
@property (nonatomic, strong) OS_dispatch_semaphore * _Nonnull nodeActivityMutex;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) OS_dispatch_semaphore * _Nonnull refreshMutex;)
+ (OS_dispatch_semaphore * _Nonnull)refreshMutex;
+ (void)setRefreshMutex:(OS_dispatch_semaphore * _Nonnull)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) OS_dispatch_semaphore * _Nonnull lock;)
+ (OS_dispatch_semaphore * _Nonnull)lock;
+ (void)setLock:(OS_dispatch_semaphore * _Nonnull)value;
- (nonnull instancetype)initWithCopy:(VBulletinApiCalls * _Nonnull)copy OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)performForumApiSignatureCall;
- (void)performApiAppCall;
- (void)performApiForumCallWithId:(NSString * _Nonnull)id pageNum:(NSString * _Nonnull)pageNum;
- (void)performApiCallHasVotedWithNodeid:(NSString * _Nonnull)nodeid;
- (void)performApiCallVoteUpWithNodeid:(NSString * _Nonnull)nodeid;
- (void)performApiCallUnvoteWithNodeid:(NSString * _Nonnull)nodeid;
- (void)performApiCallGetTopThreads;
- (void)performApiGetThreadCallWithId:(NSString * _Nonnull)id;
- (void)performGetNodeWithNodeid:(NSString * _Nonnull)nodeid;
- (void)performApiLoginUserCallWithUsername:(NSString * _Nonnull)username password:(NSString * _Nonnull)password;
- (void)performApiFetchCurrentUserInfoWithUserid:(NSString * _Nonnull)userid;
- (void)performApiFetchAvatarUrlWithUserid:(NSString * _Nonnull)userid;
- (void)performApiFetchActivityFromNodeWithId:(NSString * _Nonnull)id;
- (void)performApiFetchUserActivityWithId:(NSString * _Nonnull)id pageNumber:(NSString * _Nonnull)pageNumber;
- (void)performApiUpdateStatusWithUserid:(NSString * _Nonnull)userid status:(NSString * _Nonnull)status;
- (void)performApiUpdateProfileCallWithUserid:(NSString * _Nonnull)userid aboutMe:(NSString * _Nonnull)aboutMe status:(NSString * _Nonnull)status birthdate:(NSString * _Nonnull)birthdate location:(NSString * _Nonnull)location interests:(NSString * _Nonnull)interests occupation:(NSString * _Nonnull)occupation;
- (void)performApiNewThreadCallWithForumid:(NSString * _Nonnull)forumid message:(NSString * _Nonnull)message subject:(NSString * _Nonnull)subject;
- (void)performApiNewReplyCallWithThreadid:(NSString * _Nonnull)threadid message:(NSString * _Nonnull)message;
- (NSString * _Nonnull)md5:(NSString * _Nonnull)string;
- (NSString * _Nonnull)percentEncodeUrlStringWithUrlString:(NSString * _Nonnull)urlString;
@end


SWIFT_CLASS("_TtC15NativeCommunity26WriteCommentViewController")
@interface WriteCommentViewController : UIViewController
@property (nonatomic, copy) NSString * _Nullable threadid;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified commentTextView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)descriptionTextFieldEmptier;
- (BOOL)gestureRecognizerWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer;
- (void)postButtonHandler;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
