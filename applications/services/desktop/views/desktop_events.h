#pragma once

typedef enum {
    DesktopMainEventOpenLockMenu,
    DesktopMainEventOpenArchive,
    DesktopMainEventOpenFavoritePrimary,
    DesktopMainEventOpenClock,
    DesktopMainEventOpenFavoriteSecondary,
    DesktopMainEventOpenMenu,
    DesktopMainEventOpenGames,
    DesktopMainEventOpenDebug,
    DesktopMainEventOpenPassport,
    DesktopMainEventOpenPowerOff,

    DesktopMainEventOpenGameMenu,

    DesktopLockedEventUnlocked,
    DesktopLockedEventUpdate,
    DesktopLockedEventShowPinInput,

    DesktopPinInputEventResetWrongPinLabel,
    DesktopPinInputEventUnlocked,
    DesktopPinInputEventUnlockFailed,
    DesktopPinInputEventBack,

    DesktopPinTimeoutExit,

    DesktopDebugEventDeed,
    DesktopDebugEventWrongDeed,
    DesktopDebugEventSaveState,
    DesktopDebugEventExit,

    DesktopLockMenuEventLock,
    DesktopLockMenuEventPinLock,
    DesktopLockMenuEventPinLockShutdown,
    DesktopLockMenuEventExit,
    DesktopLockMenuEventDummyModeOn,
    DesktopLockMenuEventDummyModeOff,

    DesktopAnimationEventCheckAnimation,
    DesktopAnimationEventNewIdleAnimation,
    DesktopAnimationEventInteractAnimation,

    DesktopSlideshowCompleted,
    DesktopSlideshowPoweroff,

    // Global events
    DesktopGlobalBeforeAppStarted,
    DesktopGlobalAfterAppFinished,
    DesktopGlobalAutoLock,
} DesktopEvent;