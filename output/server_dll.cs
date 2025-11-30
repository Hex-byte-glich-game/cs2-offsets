// Generated using https://github.com/a2x/cs2-dumper
// 2025-11-30 05:42:48.431405700 UTC

namespace CS2Dumper.Schemas {
    // Module: server.dll
    // Class count: 166
    // Enum count: 92
    public static class ServerDll {
        // Alignment: 4
        // Member count: 4
        public enum CFuncMover__TransitionToPathNodeAction_t : uint {
            TRANSITION_TO_PATH_NODE_ACTION_NONE = 0x0,
            TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 0x1,
            TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 0x2,
            TRANSITION_TO_PATH_NODE_TRANSITIONING = 0x3
        }
        // Alignment: 4
        // Member count: 9
        public enum CFuncMover__OrientationUpdate_t : uint {
            ORIENTATION_FORWARD_PATH = 0x0,
            ORIENTATION_FORWARD_PATH_AND_FIXED_PITCH = 0x1,
            ORIENTATION_FORWARD_PATH_AND_UP_CONTROL_POINT = 0x2,
            ORIENTATION_MATCH_CONTROL_POINT = 0x3,
            ORIENTATION_FIXED = 0x4,
            ORIENTATION_FACE_PLAYER = 0x5,
            ORIENTATION_FORWARD_MOVEMENT_DIRECTION = 0x6,
            ORIENTATION_FORWARD_MOVEMENT_DIRECTION_AND_UP_CONTROL_POINT = 0x7,
            ORIENTATION_FACE_ENTITY = 0x8
        }
        // Alignment: 4
        // Member count: 29
        public enum C_EconItemView : uint {
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0
        }
        // Alignment: 1
        // Member count: 36
        public enum CGameSceneNode : byte {
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0,
             = 0x0
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CRangeFloat {
            public const nint m_pValue = 0x0; // float32[2]
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MFgdHelper
        public static class CDestructiblePart {
            public const nint m_DebugName = 0x0; // CGlobalSymbol
            public const nint m_nHitGroup = 0x8; // HitGroup_t
            public const nint m_bDisableHitGroupWhenDestroyed = 0xC; // bool
            public const nint m_nOtherHitgroupsToDestroyWhenFullyDestructed = 0x10; // CUtlVector<HitGroup_t>
            public const nint m_bOnlyDestroyWhenGibbing = 0x28; // bool
            public const nint m_sBodyGroupName = 0x30; // CGlobalSymbol
            public const nint m_DamageLevels = 0x38; // CUtlVector<CDestructiblePart_DamageLevel>
        }
        // Parent: None
        // Field count: 0
        public static class CAnimEventQueueListener {
        }
        // Parent: Relationship_t
        // Field count: 2
        public static class RelationshipOverride_t {
            public const nint entity = 0x8; // CHandle<CBaseEntity>
            public const nint classType = 0xC; // Class_T
        }
        // Parent: None
        // Field count: 2
        public static class AutoRoomDoorwayPairs_t {
            public const nint vP1 = 0x0; // Vector
            public const nint vP2 = 0xC; // Vector
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CRemapFloat {
            public const nint m_pValue = 0x0; // float32[4]
        }
        // Parent: None
        // Field count: 3
        public static class CHintMessage {
            public const nint m_hintString = 0x0; // char*
            public const nint m_args = 0x8; // CUtlVector<char*>
            public const nint m_duration = 0x20; // float32
        }
        // Parent: None
        // Field count: 7
        public static class ParticleNode_t {
            public const nint m_hEntity = 0x0; // CHandle<CBaseEntity>
            public const nint m_iIndex = 0x4; // ParticleIndex_t
            public const nint m_flStartTime = 0x8; // GameTime_t
            public const nint m_flGrowthDuration = 0xC; // float32
            public const nint m_vecGrowthOrigin = 0x10; // Vector
            public const nint m_flEndcapTime = 0x1C; // float32
            public const nint m_bMarkedForDelete = 0x20; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyCustomFGDType
        public static class CFootstepTableHandle {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDecalGroupVData {
            public const nint m_vecOptions = 0x0; // CUtlVector<DecalGroupOption_t>
            public const nint m_flTotalProbability = 0x18; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CNmSnapWeaponTask {
        }
        // Parent: None
        // Field count: 1
        public static class CPlayerControllerComponent {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
        }
        // Parent: None
        // Field count: 1
        public static class CResponseQueue {
            public const nint m_ExpresserTargets = 0x38; // CUtlVector<CAI_Expresser*>
        }
        // Parent: None
        // Field count: 2
        public static class CScriptUniformRandomStream {
            public const nint m_hScriptScope = 0x8; // HSCRIPT
            public const nint m_nInitialSeed = 0x9C; // int32
        }
        // Parent: None
        // Field count: 6
        public static class lerpdata_t {
            public const nint m_hEnt = 0x0; // CHandle<CBaseEntity>
            public const nint m_MoveType = 0x4; // MoveType_t
            public const nint m_flStartTime = 0x8; // GameTime_t
            public const nint m_vecStartOrigin = 0xC; // Vector
            public const nint m_qStartRot = 0x20; // Quaternion
            public const nint m_nFXIndex = 0x30; // ParticleIndex_t
        }
        // Parent: None
        // Field count: 0
        public static class WrappedPhysicsJoint_t {
        }
        // Parent: None
        // Field count: 3
        public static class SimpleConstraintSoundProfile {
            public const nint eKeypoints = 0x8; // SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
            public const nint m_keyPoints = 0xC; // float32[2]
            public const nint m_reversalSoundThresholds = 0x14; // float32[3]
        }
        // Parent: None
        // Field count: 2
        public static class CSimpleSimTimer {
            public const nint m_flNext = 0x0; // GameTime_t
            public const nint m_nWorldGroupId = 0x4; // WorldGroupId_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPhysicsBodyGameMarkupData {
            public const nint m_PhysicsBodyMarkupByBoneName = 0x0; // CUtlOrderedMap<CUtlString,CPhysicsBodyGameMarkup>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSkillDamage {
            public const nint m_flDamage = 0x0; // CSkillFloat
            public const nint m_flNPCDamageScalarVsNPC = 0x10; // float32
            public const nint m_flPhysicsForceDamage = 0x14; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CFloatExponentialMovingAverage {
        }
        // Parent: None
        // Field count: 0
        public static class CAnimEventListenerBase {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmEventConsumer {
        }
        // Parent: None
        // Field count: 3
        public static class CNetworkViewOffsetVector {
            public const nint m_vecX = 0x10; // CNetworkedQuantizedFloat
            public const nint m_vecY = 0x18; // CNetworkedQuantizedFloat
            public const nint m_vecZ = 0x20; // CNetworkedQuantizedFloat
        }
        // Parent: None
        // Field count: 1
        public static class AmmoIndex_t {
            public const nint m_Value = 0x0; // int8
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDestructiblePartsSystemData {
            public const nint m_PartsDataByHitGroup = 0x0; // CUtlOrderedMap<HitGroup_t,CDestructiblePart>
            public const nint m_nMinMaxNumberHitGroupsToDestroyWhenGibbing = 0x28; // CRangeInt
        }
        // Parent: None
        // Field count: 2
        public static class CRopeOverlapHit {
            public const nint m_hEntity = 0x0; // CHandle<CBaseEntity>
            public const nint m_vecOverlappingLinks = 0x8; // CUtlVector<int32>
        }
        // Parent: None
        // Field count: 3
        public static class ResponseContext_t {
            public const nint m_iszName = 0x0; // CUtlSymbolLarge
            public const nint m_iszValue = 0x8; // CUtlSymbolLarge
            public const nint m_fExpirationTime = 0x10; // GameTime_t
        }
        // Parent: None
        // Field count: 1
        public static class CNavVolumeSphericalShell {
            public const nint m_flRadiusInner = 0x88; // float32
        }
        // Parent: None
        // Field count: 1
        public static class CPlayerPawnComponent {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
        }
        // Parent: None
        // Field count: 0
        public static class CCSGOPlayerAnimGraphState {
        }
        // Parent: None
        // Field count: 25
        public static class CDecalInstance {
            public const nint m_sDecalGroup = 0x0; // CGlobalSymbol
            public const nint m_hMaterial = 0x8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_sSequenceName = 0x10; // CUtlStringToken
            public const nint m_hEntity = 0x14; // CHandle<CBaseEntity>
            public const nint m_nBoneIndex = 0x18; // int32
            public const nint m_nTriangleIndex = 0x1C; // int32
            public const nint m_vPositionLS = 0x20; // Vector
            public const nint m_vNormalLS = 0x2C; // Vector
            public const nint m_vSAxisLS = 0x38; // Vector
            public const nint m_nFlags = 0x44; // DecalFlags_t
            public const nint m_Color = 0x48; // Color
            public const nint m_flWidth = 0x4C; // float32
            public const nint m_flHeight = 0x50; // float32
            public const nint m_flDepth = 0x54; // float32
            public const nint m_flAnimationScale = 0x58; // float32
            public const nint m_flAnimationStartTime = 0x5C; // float32
            public const nint m_flPlaceTime = 0x60; // GameTime_t
            public const nint m_flFadeStartTime = 0x64; // float32
            public const nint m_flFadeDuration = 0x68; // float32
            public const nint m_flLightingOriginOffset = 0x6C; // float32
            public const nint m_flBoundingRadiusSqr = 0x78; // float32
            public const nint m_nSequenceIndex = 0x7C; // int16
            public const nint m_bIsAdjacent = 0x7E; // bool
            public const nint m_bDoDecalLightmapping = 0x7F; // bool
            public const nint m_nSkinnedModelMode = 0x80; // DecalMode_t
        }
        // Parent: None
        // Field count: 18
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CGameScriptedMoveData {
            public const nint m_vAccumulatedRootMotion = 0x0; // Vector
            public const nint m_angAccumulatedRootMotionRotation = 0xC; // QAngle
            public const nint m_vSrc = 0x18; // VectorWS
            public const nint m_angSrc = 0x24; // QAngle
            public const nint m_angCurrent = 0x30; // QAngle
            public const nint m_flLockedSpeed = 0x3C; // float32
            public const nint m_flAngRate = 0x40; // float32
            public const nint m_flDuration = 0x44; // float32
            public const nint m_flStartTime = 0x48; // GameTime_t
            public const nint m_bActive = 0x4C; // bool
            public const nint m_bTeleportOnEnd = 0x4D; // bool
            public const nint m_bIgnoreRotation = 0x4E; // bool
            public const nint m_bSuccess = 0x4F; // bool
            public const nint m_nForcedCrouchState = 0x50; // ForcedCrouchState_t
            public const nint m_bIgnoreCollisions = 0x54; // bool
            public const nint m_vDest = 0x58; // Vector
            public const nint m_angDst = 0x64; // QAngle
            public const nint m_hDestEntity = 0x70; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Field count: 1
        public static class CSkeletonAnimationController {
            public const nint m_pSkeletonInstance = 0x8; // CSkeletonInstance*
        }
        // Parent: None
        // Field count: 0
        public static class CNavVolumeMarkupVolume {
        }
        // Parent: None
        // Field count: 2
        public static class CResponseCriteriaSet {
            public const nint m_nNumPrefixedContexts = 0x30; // int32
            public const nint m_bOverrideOnAppend = 0x34; // bool
        }
        // Parent: None
        // Field count: 11
        public static class CAI_Expresser {
            public const nint m_flStopTalkTime = 0x60; // GameTime_t
            public const nint m_flStopTalkTimeWithoutDelay = 0x64; // GameTime_t
            public const nint m_flQueuedSpeechTime = 0x68; // GameTime_t
            public const nint m_flBlockedTalkTime = 0x6C; // GameTime_t
            public const nint m_voicePitch = 0x70; // int32
            public const nint m_flLastTimeAcceptedSpeak = 0x74; // GameTime_t
            public const nint m_bAllowSpeakingInterrupts = 0x78; // bool
            public const nint m_bConsiderSceneInvolvementAsSpeech = 0x79; // bool
            public const nint m_bSceneEntityDisabled = 0x7A; // bool
            public const nint m_nLastSpokenPriority = 0x7C; // int32
            public const nint m_pOuter = 0x98; // CBaseFlex*
        }
        // Parent: None
        // Field count: 0
        public static class IChoreoServices {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmEventConsumerAttributes {
        }
        // Parent: CStopwatchBase
        // Field count: 1
        public static class CStopwatch {
            public const nint m_flInterval = 0xC; // float32
        }
        // Parent: None
        // Field count: 3
        public static class ResponseParams {
            public const nint odds = 0x10; // int16
            public const nint flags = 0x12; // int16
            public const nint m_pFollowup = 0x18; // ResponseFollowup*
        }
        // Parent: None
        // Field count: 8
        public static class ConstraintSoundInfo {
            public const nint m_vSampler = 0x8; // VelocitySampler
            public const nint m_soundProfile = 0x20; // SimpleConstraintSoundProfile
            public const nint m_forwardAxis = 0x40; // Vector
            public const nint m_iszTravelSoundFwd = 0x50; // CUtlSymbolLarge
            public const nint m_iszTravelSoundBack = 0x58; // CUtlSymbolLarge
            public const nint m_iszReversalSounds = 0x78; // CUtlSymbolLarge[3]
            public const nint m_bPlayTravelSound = 0x90; // bool
            public const nint m_bPlayReversalSound = 0x91; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPhysicsBodyGameMarkup {
            public const nint m_TargetBody = 0x0; // CUtlString
            public const nint m_Tag = 0x8; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PointCameraSettings_t {
            public const nint m_flNearBlurryDistance = 0x0; // float32
            public const nint m_flNearCrispDistance = 0x4; // float32
            public const nint m_flFarCrispDistance = 0x8; // float32
            public const nint m_flFarBlurryDistance = 0xC; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CVectorMovingAverage {
        }
        // Parent: None
        // Field count: 4
        public static class CSoundEnvelope {
            public const nint m_current = 0x0; // float32
            public const nint m_target = 0x4; // float32
            public const nint m_rate = 0x8; // float32
            public const nint m_forceupdate = 0xC; // bool
        }
        // Parent: None
        // Field count: 25
        public static class dynpitchvol_base_t {
            public const nint preset = 0x0; // int32
            public const nint pitchrun = 0x4; // int32
            public const nint pitchstart = 0x8; // int32
            public const nint spinup = 0xC; // int32
            public const nint spindown = 0x10; // int32
            public const nint volrun = 0x14; // int32
            public const nint volstart = 0x18; // int32
            public const nint fadein = 0x1C; // int32
            public const nint fadeout = 0x20; // int32
            public const nint lfotype = 0x24; // int32
            public const nint lforate = 0x28; // int32
            public const nint lfomodpitch = 0x2C; // int32
            public const nint lfomodvol = 0x30; // int32
            public const nint cspinup = 0x34; // int32
            public const nint cspincount = 0x38; // int32
            public const nint pitch = 0x3C; // int32
            public const nint spinupsav = 0x40; // int32
            public const nint spindownsav = 0x44; // int32
            public const nint pitchfrac = 0x48; // int32
            public const nint vol = 0x4C; // int32
            public const nint fadeinsav = 0x50; // int32
            public const nint fadeoutsav = 0x54; // int32
            public const nint volfrac = 0x58; // int32
            public const nint lfofrac = 0x5C; // int32
            public const nint lfomult = 0x60; // int32
        }
        // Parent: CSimpleSimTimer
        // Field count: 1
        public static class CStopwatchBase {
            public const nint m_fIsRunning = 0x8; // bool
        }
        // Parent: None
        // Field count: 1
        public static class CNavVolumeVector {
            public const nint m_bHasBeenPreFiltered = 0x80; // bool
        }
        // Parent: None
        // Field count: 2
        public static class NavGravity_t {
            public const nint m_vGravity = 0x0; // Vector
            public const nint m_bDefault = 0xC; // bool
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseScriptedSequenceData_t {
            public const nint m_nActorID = 0x0; // int32
            public const nint m_szPreIdleSequence = 0x8; // CUtlString
            public const nint m_szEntrySequence = 0x10; // CUtlString
            public const nint m_szSequence = 0x18; // CUtlString
            public const nint m_szExitSequence = 0x20; // CUtlString
            public const nint m_nMoveTo = 0x28; // ScriptedMoveTo_t
            public const nint m_nMoveToGait = 0x2C; // SharedMovementGait_t
            public const nint m_nHeldWeaponBehavior = 0x30; // ScriptedHeldWeaponBehavior_t
            public const nint m_bLoopPreIdleSequence = 0x34; // bool
            public const nint m_bLoopActionSequence = 0x35; // bool
            public const nint m_bLoopPostIdleSequence = 0x36; // bool
            public const nint m_bIgnoreLookAt = 0x37; // bool
        }
        // Parent: None
        // Field count: 2
        public static class RotatorQueueEntry_t {
            public const nint qTarget = 0x0; // Quaternion
            public const nint eSpace = 0x10; // RotatorTargetSpace_t
        }
        // Parent: None
        // Field count: 1
        public static class CPhysicsShake {
            public const nint m_force = 0x8; // Vector
        }
        // Parent: None
        // Field count: 3
        public static class VelocitySampler {
            public const nint m_prevSample = 0x0; // Vector
            public const nint m_fPrevSampleTime = 0xC; // GameTime_t
            public const nint m_fIdealSampleRate = 0x10; // float32
        }
        // Parent: None
        // Field count: 8
        public static class CTakeDamageResult {
            public const nint m_pOriginatingInfo = 0x0; // CTakeDamageInfo*
            public const nint m_nHealthLost = 0x8; // int32
            public const nint m_nHealthBefore = 0xC; // int32
            public const nint m_nDamageDealt = 0x10; // int32
            public const nint m_flPreModifiedDamage = 0x14; // float32
            public const nint m_nTotalledHealthLost = 0x18; // int32
            public const nint m_nTotalledDamageDealt = 0x1C; // int32
            public const nint m_bWasDamageSuppressed = 0x20; // bool
        }
        // Parent: None
        // Field count: 20
        public static class CCS2WeaponGraphController {
            public const nint m_action = 0x80; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_bActionReset = 0xA0; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_flWeaponActionSpeedScale = 0xB8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_weaponCategory = 0xD0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_weaponType = 0xF0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_weaponExtraInfo = 0x110; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_flWeaponAmmo = 0x130; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flWeaponAmmoMax = 0x148; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flWeaponAmmoReserve = 0x160; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_bWeaponIsSilenced = 0x178; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_flWeaponIronsightAmount = 0x190; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_bIsUsingLegacyModel = 0x1A8; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_idleVariation = 0x1C0; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_deployVariation = 0x1D8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_attackType = 0x1F0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_attackThrowStrength = 0x210; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flAttackVariation = 0x228; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_inspectVariation = 0x240; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_inspectExtraInfo = 0x258; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_reloadStage = 0x278; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
        }
        // Parent: None
        // Field count: 1
        public static class SceneEventId_t {
            public const nint m_Value = 0x0; // uint32
        }
        // Parent: None
        // Field count: 10
        public static class CCommentarySystem {
            public const nint m_bCommentaryConvarsChanging = 0x11; // bool
            public const nint m_bCommentaryEnabledMidGame = 0x12; // bool
            public const nint m_flNextTeleportTime = 0x14; // GameTime_t
            public const nint m_iTeleportStage = 0x18; // int32
            public const nint m_bCheatState = 0x1C; // bool
            public const nint m_bIsFirstSpawnGroupToLoad = 0x1D; // bool
            public const nint m_hCurrentNode = 0x38; // CHandle<CPointCommentaryNode>
            public const nint m_hActiveCommentaryNode = 0x3C; // CHandle<CPointCommentaryNode>
            public const nint m_hLastCommentaryNode = 0x40; // CHandle<CPointCommentaryNode>
            public const nint m_vecNodes = 0x48; // CUtlVector<CHandle<CPointCommentaryNode>>
        }
        // Parent: None
        // Field count: 8
        public static class ResponseFollowup {
            public const nint followup_concept = 0x0; // char*
            public const nint followup_contexts = 0x8; // char*
            public const nint followup_delay = 0x10; // float32
            public const nint followup_target = 0x14; // char*
            public const nint followup_entityiotarget = 0x1C; // char*
            public const nint followup_entityioinput = 0x24; // char*
            public const nint followup_entityiodelay = 0x2C; // float32
            public const nint bFired = 0x30; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AmmoTypeInfo_t {
            public const nint m_nMaxCarry = 0x10; // int32
            public const nint m_nSplashSize = 0x1C; // CRangeInt
            public const nint m_nFlags = 0x24; // AmmoFlags_t
            public const nint m_flMass = 0x28; // float32
            public const nint m_flSpeed = 0x2C; // CRangeFloat
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNavLinkAnimgraphVar {
            public const nint m_sAnimGraphNavlinkType = 0x0; // CGlobalSymbol
            public const nint m_unAlignmentDegrees = 0x8; // uint32
        }
        // Parent: None
        // Field count: 1
        public static class CNetworkTransmitComponent {
            public const nint m_nTransmitStateOwnedCounter = 0x184; // uint8
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNavLinkMovementVData {
            public const nint m_sToolsOnlyOwnerModelName = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_bIsInterpolated = 0xE0; // bool
            public const nint m_unRecommendedDistance = 0xE4; // uint32
            public const nint m_vecAnimgraphVars = 0xE8; // CUtlVector<CNavLinkAnimgraphVar>
        }
        // Parent: None
        // Field count: 5
        public static class CPathQueryUtil {
            public const nint m_PathToEntityTransform = 0x10; // CTransform
            public const nint m_vecPathSamplePositions = 0x30; // CUtlVector<Vector>
            public const nint m_vecPathSampleParameters = 0x48; // CUtlVector<float32>
            public const nint m_vecPathSampleDistances = 0x60; // CUtlVector<float32>
            public const nint m_bIsClosedLoop = 0x78; // bool
        }
        // Parent: None
        // Field count: 5
        public static class RagdollCreationParams_t {
            public const nint m_vForce = 0x0; // Vector
            public const nint m_nForceBone = 0xC; // int32
            public const nint m_bForceCurrentWorldTransform = 0x10; // bool
            public const nint m_bUseLRURetirement = 0x11; // bool
            public const nint m_nHealthToGrant = 0x14; // int32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CRangeInt {
            public const nint m_pValue = 0x0; // int32[2]
        }
        // Parent: None
        // Field count: 2
        public static class CWorldCompositionChunkReferenceElement_t {
            public const nint m_strMapToLoad = 0x0; // CUtlString
            public const nint m_strLandmarkName = 0x8; // CUtlString
        }
        // Parent: CStopwatchBase
        // Field count: 2
        public static class CRandStopwatch {
            public const nint m_flMinInterval = 0xC; // float32
            public const nint m_flMaxInterval = 0x10; // float32
        }
        // Parent: None
        // Field count: 2
        public static class CMovementStatsProperty {
            public const nint m_nUseCounter = 0x10; // int32
            public const nint m_emaMovementDirection = 0x14; // CVectorExponentialMovingAverage
        }
        // Parent: None
        // Field count: 5
        public static class CGameChoreoServices {
            public const nint m_hOwner = 0x8; // CHandle<CBaseAnimGraph>
            public const nint m_hScriptedSequence = 0xC; // CHandle<CScriptedSequence>
            public const nint m_scriptState = 0x10; // IChoreoServices::ScriptState_t
            public const nint m_choreoState = 0x14; // IChoreoServices::ChoreoState_t
            public const nint m_flTimeStartedState = 0x18; // GameTime_t
        }
        // Parent: None
        // Field count: 0
        public static class CSimpleStopwatch {
        }
        // Parent: None
        // Field count: 28
        public static class CShatterGlassShard {
            public const nint m_hShardHandle = 0x8; // uint32
            public const nint m_vecPanelVertices = 0x10; // CUtlVector<Vector2D>
            public const nint m_vLocalPanelSpaceOrigin = 0x28; // Vector2D
            public const nint m_hModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_hPhysicsEntity = 0x38; // CHandle<CShatterGlassShardPhysics>
            public const nint m_hParentPanel = 0x3C; // CHandle<CFuncShatterglass>
            public const nint m_hParentShard = 0x40; // uint32
            public const nint m_ShatterStressType = 0x44; // ShatterGlassStressType
            public const nint m_vecStressVelocity = 0x48; // Vector
            public const nint m_bCreatedModel = 0x54; // bool
            public const nint m_flLongestEdge = 0x58; // float32
            public const nint m_flShortestEdge = 0x5C; // float32
            public const nint m_flLongestAcross = 0x60; // float32
            public const nint m_flShortestAcross = 0x64; // float32
            public const nint m_flSumOfAllEdges = 0x68; // float32
            public const nint m_flArea = 0x6C; // float32
            public const nint m_nOnFrameEdge = 0x70; // OnFrame
            public const nint m_nSubShardGeneration = 0x74; // int32
            public const nint m_vecAverageVertPosition = 0x78; // Vector2D
            public const nint m_bAverageVertPositionIsValid = 0x80; // bool
            public const nint m_vecPanelSpaceStressPositionA = 0x84; // Vector2D
            public const nint m_vecPanelSpaceStressPositionB = 0x8C; // Vector2D
            public const nint m_bStressPositionAIsValid = 0x94; // bool
            public const nint m_bStressPositionBIsValid = 0x95; // bool
            public const nint m_bFlaggedForRemoval = 0x96; // bool
            public const nint m_flPhysicsEntitySpawnedAtTime = 0x98; // GameTime_t
            public const nint m_hEntityHittingMe = 0x9C; // CHandle<CBaseEntity>
            public const nint m_vecNeighbors = 0xA0; // CUtlVector<uint32>
        }
        // Parent: None
        // Field count: 4
        public static class ragdollelement_t {
            public const nint originParentSpace = 0x0; // Vector
            public const nint parentIndex = 0x20; // int32
            public const nint m_flRadius = 0x24; // float32
            public const nint m_nHeight = 0x28; // int32
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CGameScriptedMoveDef_t {
            public const nint m_vDestOffset = 0x0; // Vector
            public const nint m_hDestEntity = 0xC; // CHandle<CBaseEntity>
            public const nint m_angDest = 0x10; // QAngle
            public const nint m_flDuration = 0x1C; // float32
            public const nint m_flAngRate = 0x20; // float32
            public const nint m_flMoveSpeed = 0x24; // float32
            public const nint m_bAimDisabled = 0x28; // bool
            public const nint m_bIgnoreRotation = 0x29; // bool
            public const nint m_nForcedCrouchState = 0x2C; // ForcedCrouchState_t
        }
        // Parent: None
        // Field count: 7
        public static class CNetworkOriginCellCoordQuantizedVector {
            public const nint m_cellX = 0x10; // uint16
            public const nint m_cellY = 0x12; // uint16
            public const nint m_cellZ = 0x14; // uint16
            public const nint m_nOutsideWorld = 0x16; // uint16
            public const nint m_vecX = 0x18; // CNetworkedQuantizedFloat
            public const nint m_vecY = 0x20; // CNetworkedQuantizedFloat
            public const nint m_vecZ = 0x28; // CNetworkedQuantizedFloat
        }
        // Parent: None
        // Field count: 8
        public static class DynamicVolumeDef_t {
            public const nint m_source = 0x0; // CHandle<CBaseEntity>
            public const nint m_target = 0x4; // CHandle<CBaseEntity>
            public const nint m_nHullIdx = 0x8; // int32
            public const nint m_vSourceAnchorPos = 0xC; // Vector
            public const nint m_vTargetAnchorPos = 0x18; // Vector
            public const nint m_nAreaSrc = 0x24; // uint32
            public const nint m_nAreaDst = 0x28; // uint32
            public const nint m_bAttached = 0x2C; // bool
        }
        // Parent: None
        // Field count: 3
        public static class CNetworkOriginQuantizedVector {
            public const nint m_vecX = 0x10; // CNetworkedQuantizedFloat
            public const nint m_vecY = 0x18; // CNetworkedQuantizedFloat
            public const nint m_vecZ = 0x20; // CNetworkedQuantizedFloat
        }
        // Parent: None
        // Field count: 1
        public static class magnetted_objects_t {
            public const nint hEntity = 0x8; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Field count: 3
        public static class CHintMessageQueue {
            public const nint m_tmMessageEnd = 0x0; // float32
            public const nint m_messages = 0x8; // CUtlVector<CHintMessage*>
            public const nint m_pPlayerController = 0x20; // CBasePlayerController*
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSkillInt {
            public const nint m_pValue = 0x0; // int32[4]
        }
        // Parent: None
        // Field count: 4
        public static class thinkfunc_t {
            public const nint m_hFn = 0x8; // HSCRIPT
            public const nint m_nContext = 0x10; // CUtlStringToken
            public const nint m_nNextThinkTick = 0x14; // GameTick_t
            public const nint m_nLastThinkTick = 0x18; // GameTick_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNavHullPresetVData {
            public const nint m_vecNavHulls = 0x0; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSkillFloat {
            public const nint m_pValue = 0x0; // float32[4]
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WaterWheelFrictionScale_t {
            public const nint m_flFractionOfWheelSubmerged = 0x0; // float32
            public const nint m_flFrictionScale = 0x4; // float32
        }
        // Parent: None
        // Field count: 2
        public static class ragdollhierarchyjoint_t {
            public const nint parentIndex = 0x0; // int32
            public const nint childIndex = 0x4; // int32
        }
        // Parent: None
        // Field count: 13
        public static class CSceneEventInfo {
            public const nint m_iLayer = 0x0; // int32
            public const nint m_iPriority = 0x4; // int32
            public const nint m_hSequence = 0x8; // HSequence
            public const nint m_flWeight = 0xC; // float32
            public const nint m_bHasArrived = 0x10; // bool
            public const nint m_nType = 0x14; // int32
            public const nint m_flNext = 0x18; // GameTime_t
            public const nint m_bIsGesture = 0x1C; // bool
            public const nint m_bShouldRemove = 0x1D; // bool
            public const nint m_hTarget = 0x44; // CHandle<CBaseEntity>
            public const nint m_nSceneEventId = 0x48; // SceneEventId_t
            public const nint m_bClientSide = 0x4C; // bool
            public const nint m_bStarted = 0x4D; // bool
        }
        // Parent: None
        // Field count: 5
        public static class SoundeventPathCornerPairNetworked_t {
            public const nint vP1 = 0x0; // Vector
            public const nint vP2 = 0xC; // Vector
            public const nint flPathLengthSqr = 0x18; // float32
            public const nint flP1Pct = 0x1C; // float32
            public const nint flP2Pct = 0x20; // float32
        }
        // Parent: None
        // Field count: 13
        public static class CSoundPatch {
            public const nint m_pitch = 0x8; // CSoundEnvelope
            public const nint m_volume = 0x18; // CSoundEnvelope
            public const nint m_shutdownTime = 0x3C; // float32
            public const nint m_flLastTime = 0x40; // float32
            public const nint m_iszSoundScriptName = 0x48; // CUtlSymbolLarge
            public const nint m_hEnt = 0x50; // CHandle<CBaseEntity>
            public const nint m_soundEntityIndex = 0x54; // CEntityIndex
            public const nint m_soundOrigin = 0x58; // Vector
            public const nint m_isPlaying = 0x64; // int32
            public const nint m_Filter = 0x68; // CCopyRecipientFilter
            public const nint m_flCloseCaptionDuration = 0xA0; // float32
            public const nint m_bUpdatedSoundOrigin = 0xA4; // bool
            public const nint m_iszClassName = 0xA8; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 10
        public static class CCS2ChickenGraphController {
            public const nint m_action = 0x80; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_actionSubtype = 0xA0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_bActionReset = 0xC0; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_idleVariation = 0xD8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_runVariation = 0xF0; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_panicVariation = 0x108; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_squatVariation = 0x120; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_bInWater = 0x138; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_bHasActionCompletedEvent = 0x150; // bool
            public const nint m_bWaitingForCompletedEvent = 0x151; // bool
        }
        // Parent: None
        // Field count: 3
        public static class locksound_t {
            public const nint sLockedSound = 0x8; // CUtlSymbolLarge
            public const nint sUnlockedSound = 0x10; // CUtlSymbolLarge
            public const nint flwaitSound = 0x18; // GameTime_t
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class DecalGroupOption_t {
            public const nint m_hMaterial = 0x0; // CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
            public const nint m_sSequenceName = 0x8; // CGlobalSymbol
            public const nint m_flProbability = 0x10; // float32
            public const nint m_bEnableAngleBetweenNormalAndGravityRange = 0x14; // bool
            public const nint m_flMinAngleBetweenNormalAndGravity = 0x18; // float32
            public const nint m_flMaxAngleBetweenNormalAndGravity = 0x1C; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CBtNode {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CFiringModeFloat {
            public const nint m_flValues = 0x0; // float32[2]
        }
        // Parent: None
        // Field count: 3
        public static class CCopyRecipientFilter {
            public const nint m_Flags = 0x8; // int32
            public const nint m_Recipients = 0x10; // CUtlVector<CPlayerSlot>
            public const nint m_slotPlayerExcludedDueToPrediction = 0x30; // CPlayerSlot
        }
        // Parent: None
        // Field count: 0
        public static class CFloatMovingAverage {
        }
        // Parent: None
        // Field count: 5
        public static class CSmoothFunc {
            public const nint m_flSmoothAmplitude = 0x8; // float32
            public const nint m_flSmoothBias = 0xC; // float32
            public const nint m_flSmoothDuration = 0x10; // float32
            public const nint m_flSmoothRemainingTime = 0x14; // float32
            public const nint m_nSmoothDir = 0x18; // int32
        }
        // Parent: None
        // Field count: 0
        public static class IHasAttributes {
        }
        // Parent: None
        // Field count: 5
        public static class ragdoll_t {
            public const nint list = 0x0; // CUtlVector<ragdollelement_t>
            public const nint hierarchyJoints = 0x18; // CUtlVector<ragdollhierarchyjoint_t>
            public const nint boneIndex = 0x30; // CUtlVector<int32>
            public const nint allowStretch = 0x48; // bool
            public const nint unused = 0x49; // bool
        }
        // Parent: None
        // Field count: 10
        public static class HullFlags_t {
            public const nint m_bHull_Human = 0x0; // bool
            public const nint m_bHull_SmallCentered = 0x1; // bool
            public const nint m_bHull_WideHuman = 0x2; // bool
            public const nint m_bHull_Tiny = 0x3; // bool
            public const nint m_bHull_Medium = 0x4; // bool
            public const nint m_bHull_TinyCentered = 0x5; // bool
            public const nint m_bHull_Large = 0x6; // bool
            public const nint m_bHull_LargeCentered = 0x7; // bool
            public const nint m_bHull_MediumTall = 0x8; // bool
            public const nint m_bHull_Small = 0x9; // bool
        }
        // Parent: None
        // Field count: 0
        public static class ISkeletonAnimationController {
        }
        // Parent: None
        // Field count: 2
        public static class RotatorHistoryEntry_t {
            public const nint qInvChange = 0x0; // Quaternion
            public const nint flTimeRotationStart = 0x10; // GameTime_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class GameAmmoTypeInfo_t {
            public const nint m_nBuySize = 0x38; // int32
            public const nint m_nCost = 0x3C; // int32
        }
        // Parent: None
        // Field count: 4
        public static class CMotorController {
            public const nint m_speed = 0x8; // float32
            public const nint m_maxTorque = 0xC; // float32
            public const nint m_axis = 0x10; // VectorWS
            public const nint m_inertiaFactor = 0x1C; // float32
        }
        // Parent: CSimpleSimTimer
        // Field count: 1
        public static class CSimTimer {
            public const nint m_flInterval = 0x8; // float32
        }
        // Parent: None
        // Field count: 6
        public static class CBaseIssue {
            public const nint m_szTypeString = 0x20; // char[64]
            public const nint m_szDetailsString = 0x60; // char[260]
            public const nint m_iNumYesVotes = 0x164; // int32
            public const nint m_iNumNoVotes = 0x168; // int32
            public const nint m_iNumPotentialVotes = 0x16C; // int32
            public const nint m_pVoteController = 0x170; // CVoteController*
        }
        // Parent: None
        // Field count: 4
        public static class SummaryTakeDamageInfo_t {
            public const nint nSummarisedCount = 0x0; // int32
            public const nint info = 0x8; // CTakeDamageInfo
            public const nint result = 0x130; // CTakeDamageResult
            public const nint hTarget = 0x158; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Field count: 2
        public static class DestructibleHitGroupToDestroy_t {
            public const nint m_nHitGroup = 0x0; // HitGroup_t
            public const nint m_nMaxDamageLevel = 0x4; // int32
        }
        // Parent: None
        // Field count: 10
        public static class CRR_Response {
            public const nint m_Type = 0x0; // uint8
            public const nint m_szResponseName = 0x1; // char[192]
            public const nint m_szMatchingRule = 0xC1; // char[128]
            public const nint m_Params = 0x160; // ResponseParams
            public const nint m_fMatchScore = 0x180; // float32
            public const nint m_bAnyMatchingRulesInCooldown = 0x184; // bool
            public const nint m_szSpeakerContext = 0x188; // char*
            public const nint m_szWorldContext = 0x190; // char*
            public const nint m_Followup = 0x198; // ResponseFollowup
            public const nint m_recipientFilter = 0x1CA; // CUtlSymbol
        }
        // Parent: None
        // Field count: 0
        public static class CVectorExponentialMovingAverage {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmAimCSNode__CDefinition {
            public const nint m_nVerticalAngleNodeIdx = 0x18; // int16
            public const nint m_nHorizontalAngleNodeIdx = 0x1A; // int16
            public const nint m_nWeaponCategoryNodeIdx = 0x1C; // int16
            public const nint m_nEnabledNodeIdx = 0x1E; // int16
            public const nint m_flBlendTimeSeconds = 0x20; // float32
        }
        // Parent: None
        // Field count: 4
        public static class CConstantForceController {
            public const nint m_linear = 0xC; // Vector
            public const nint m_angular = 0x18; // RotationVector
            public const nint m_linearSave = 0x24; // Vector
            public const nint m_angularSave = 0x30; // RotationVector
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class WaterWheelDrag_t {
            public const nint m_flFractionOfWheelSubmerged = 0x0; // float32
            public const nint m_flWheelDrag = 0x4; // float32
        }
        // Parent: None
        // Field count: 22
        public static class CTakeDamageInfo {
            public const nint m_vecDamageForce = 0x8; // Vector
            public const nint m_vecDamagePosition = 0x14; // VectorWS
            public const nint m_vecReportedPosition = 0x20; // VectorWS
            public const nint m_vecDamageDirection = 0x2C; // Vector
            public const nint m_hInflictor = 0x38; // CHandle<CBaseEntity>
            public const nint m_hAttacker = 0x3C; // CHandle<CBaseEntity>
            public const nint m_hAbility = 0x40; // CHandle<CBaseEntity>
            public const nint m_flDamage = 0x44; // float32
            public const nint m_flTotalledDamage = 0x48; // float32
            public const nint m_bitsDamageType = 0x4C; // DamageTypes_t
            public const nint m_iDamageCustom = 0x50; // int32
            public const nint m_iAmmoType = 0x54; // AmmoIndex_t
            public const nint m_flOriginalDamage = 0x60; // float32
            public const nint m_bShouldBleed = 0x64; // bool
            public const nint m_bShouldSpark = 0x65; // bool
            public const nint m_nDamageFlags = 0x70; // TakeDamageFlags_t
            public const nint m_sDamageSourceName = 0x78; // CGlobalSymbol
            public const nint m_iHitGroupId = 0x80; // HitGroup_t
            public const nint m_nNumObjectsPenetrated = 0x84; // int32
            public const nint m_flFriendlyFireDamageReductionRatio = 0x88; // float32
            public const nint m_nDestructibleHitGroupsToForceDestroy = 0x108; // CUtlVector<DestructibleHitGroupToDestroy_t>
            public const nint m_bInTakeDamageFlow = 0x120; // bool
        }
        // Parent: CSimpleSimTimer
        // Field count: 2
        public static class CRandSimTimer {
            public const nint m_flMinInterval = 0x8; // float32
            public const nint m_flMaxInterval = 0xC; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CBtNodeComposite {
        }
        // Parent: None
        // Field count: 4
        public static class CRelativeLocation {
            public const nint m_Type = 0x18; // RelativeLocationType_t
            public const nint m_vRelativeOffset = 0x1C; // Vector
            public const nint m_vWorldSpacePos = 0x28; // VectorWS
            public const nint m_hEntity = 0x34; // CHandle<CBaseEntity>
        }
        // Parent: None
        // Field count: 2
        public static class Extent {
            public const nint lo = 0x0; // VectorWS
            public const nint hi = 0xC; // VectorWS
        }
        // Parent: None
        // Field count: 5
        public static class sndopvarlatchdata_t {
            public const nint m_iszStack = 0x8; // CUtlSymbolLarge
            public const nint m_iszOperator = 0x10; // CUtlSymbolLarge
            public const nint m_iszOpvar = 0x18; // CUtlSymbolLarge
            public const nint m_flVal = 0x20; // float32
            public const nint m_vPos = 0x24; // Vector
        }
        // Parent: None
        // Field count: 0
        public static class IEconItemInterface {
        }
        // Parent: None
        // Field count: 1
        public static class CMultiplayer_Expresser {
            public const nint m_bAllowMultipleScenes = 0xA0; // bool
        }
        // Parent: None
        // Field count: 15
        public static class CBaseAnimGraphAnimGraphController {
            public const nint m_sDestructiblePartDestroyedHitGroup = 0x80; // CAnimGraphParamOptionalRef<CGlobalSymbol>
            public const nint m_nDestructiblePartDestroyedPartIndex = 0xA8; // CAnimGraphParamOptionalRef<int32>
            public const nint m_bHITGROUP_INVALID_Destroyed = 0xC8; // CAnimGraphParamOptionalRef<bool>
            public const nint m_bHITGROUP_GENERIC_Destroyed = 0xE8; // CAnimGraphParamOptionalRef<bool>
            public const nint m_bHITGROUP_HEAD_Destroyed = 0x108; // CAnimGraphParamOptionalRef<bool>
            public const nint m_bHITGROUP_CHEST_Destroyed = 0x128; // CAnimGraphParamOptionalRef<bool>
            public const nint m_bHITGROUP_STOMACH_Destroyed = 0x148; // CAnimGraphParamOptionalRef<bool>
            public const nint m_bHITGROUP_LEFTARM_Destroyed = 0x168; // CAnimGraphParamOptionalRef<bool>
            public const nint m_bHITGROUP_RIGHTARM_Destroyed = 0x188; // CAnimGraphParamOptionalRef<bool>
            public const nint m_bHITGROUP_LEFTLEG_Destroyed = 0x1A8; // CAnimGraphParamOptionalRef<bool>
            public const nint m_bHITGROUP_RIGHTLEG_Destroyed = 0x1C8; // CAnimGraphParamOptionalRef<bool>
            public const nint m_bHITGROUP_NECK_Destroyed = 0x1E8; // CAnimGraphParamOptionalRef<bool>
            public const nint m_bHITGROUP_UNUSED_Destroyed = 0x208; // CAnimGraphParamOptionalRef<bool>
            public const nint m_bHITGROUP_GEAR_Destroyed = 0x228; // CAnimGraphParamOptionalRef<bool>
            public const nint m_bHITGROUP_SPECIAL_Destroyed = 0x248; // CAnimGraphParamOptionalRef<bool>
        }
        // Parent: None
        // Field count: 0
        public static class CNavVolume {
        }
        // Parent: None
        // Field count: 0
        public static class QuestProgress {
        }
        // Parent: None
        // Field count: 0
        public static class CNmAimCSTask {
        }
        // Parent: None
        // Field count: 1
        public static class ParticleIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Field count: 0
        public static class CAI_ExpresserWithFollowup {
        }
        // Parent: None
        // Field count: 1
        public static class CTakeDamageSummaryScopeGuard {
            public const nint m_vecSummaries = 0x8; // CUtlVector<SummaryTakeDamageInfo_t*>
        }
        // Parent: None
        // Field count: 4
        public static class CIronSightController {
            public const nint m_bIronSightAvailable = 0x8; // bool
            public const nint m_flIronSightAmount = 0xC; // float32
            public const nint m_flIronSightAmountGained = 0x10; // float32
            public const nint m_flIronSightAmountBiased = 0x14; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmEventConsumerSound {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmEventConsumerLegacy {
        }
        // Parent: None
        // Field count: 1
        public static class CInButtonState {
            public const nint m_pButtonStates = 0x8; // uint64[3]
        }
        // Parent: None
        // Field count: 3
        public static class ServerAuthoritativeWeaponSlot_t {
            public const nint unClass = 0x30; // uint16
            public const nint unSlot = 0x32; // uint16
            public const nint unItemDefIdx = 0x34; // uint16
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmEventConsumerParticle {
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNavHullVData {
            public const nint m_bAgentEnabled = 0x0; // bool
            public const nint m_agentRadius = 0x4; // float32
            public const nint m_agentHeight = 0x8; // float32
            public const nint m_agentShortHeightEnabled = 0xC; // bool
            public const nint m_agentShortHeight = 0x10; // float32
            public const nint m_agentCrawlEnabled = 0x14; // bool
            public const nint m_agentCrawlHeight = 0x18; // float32
            public const nint m_agentMaxClimb = 0x1C; // float32
            public const nint m_agentMaxSlope = 0x20; // int32
            public const nint m_agentMaxJumpDownDist = 0x24; // float32
            public const nint m_agentMaxJumpHorizDistBase = 0x28; // float32
            public const nint m_agentMaxJumpUpDist = 0x2C; // float32
            public const nint m_agentBorderErosion = 0x30; // int32
            public const nint m_flowMapGenerationEnabled = 0x34; // bool
            public const nint m_flowMapNodeMaxRadius = 0x38; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmSnapWeaponNode__CDefinition {
            public const nint m_nEnabledNodeIdx = 0x18; // int16
            public const nint m_nLockLeftHandNodeIdx = 0x1A; // int16
            public const nint m_flBlendTimeSeconds = 0x1C; // float32
        }
        // Parent: None
        // Field count: 3
        public static class SoundOpvarTraceResult_t {
            public const nint vPos = 0x0; // Vector
            public const nint bDidHit = 0xC; // bool
            public const nint flDistSqrToCenter = 0x10; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CAnimEventListener {
        }
        // Parent: None
        // Field count: 0
        public static class CNavVolumeCalculatedVector {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CFiringModeInt {
            public const nint m_nValues = 0x0; // int32[2]
        }
        // Parent: None
        // Field count: 0
        public static class CBtNodeDecorator {
        }
        // Parent: None
        // Field count: 6
        public static class CSAdditionalPerRoundStats_t {
            public const nint m_numChickensKilled = 0x0; // int32
            public const nint m_killsWhileBlind = 0x4; // int32
            public const nint m_bombCarrierkills = 0x8; // int32
            public const nint m_flBurnDamageInflicted = 0xC; // float32
            public const nint m_flBlastDamageInflicted = 0x10; // float32
            public const nint m_iDinks = 0x14; // int32
        }
        // Parent: None
        // Field count: 1
        public static class ModelConfigHandle_t {
            public const nint m_Value = 0x0; // uint32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataNodeType
        // MVDataOverlayType
        public static class CEntitySubclassVDataBase {
        }
        // Parent: None
        // Field count: 2
        public static class CBreakableStageHelper {
            public const nint m_nCurrentStage = 0x8; // int32
            public const nint m_nStageCount = 0xC; // int32
        }
        // Parent: None
        // Field count: 2
        public static class CNavVolumeBreadthFirstSearch {
            public const nint m_vStartPos = 0xA8; // Vector
            public const nint m_flSearchDist = 0xB4; // float32
        }
        // Parent: dynpitchvol_base_t
        // Field count: 0
        public static class dynpitchvol_t {
        }
        // Parent: None
        // Field count: 12
        public static class CSAdditionalMatchStats_t {
            public const nint m_numRoundsSurvived = 0x18; // int32
            public const nint m_maxNumRoundsSurvived = 0x1C; // int32
            public const nint m_numRoundsSurvivedTotal = 0x20; // int32
            public const nint m_iRoundsWonWithoutPurchase = 0x24; // int32
            public const nint m_iRoundsWonWithoutPurchaseTotal = 0x28; // int32
            public const nint m_numFirstKills = 0x2C; // int32
            public const nint m_numClutchKills = 0x30; // int32
            public const nint m_numPistolKills = 0x34; // int32
            public const nint m_numSniperKills = 0x38; // int32
            public const nint m_iNumSuicides = 0x3C; // int32
            public const nint m_iNumTeamKills = 0x40; // int32
            public const nint m_flTeamDamage = 0x44; // float32
        }
        // Parent: None
        // Field count: 0
        public static class IRagdoll {
        }
        // Parent: None
        // Field count: 6
        public static class hudtextparms_t {
            public const nint color1 = 0x0; // Color
            public const nint color2 = 0x4; // Color
            public const nint effect = 0x8; // uint8
            public const nint channel = 0x9; // uint8
            public const nint x = 0xC; // float32
            public const nint y = 0x10; // float32
        }
        // Parent: None
        // Field count: 1
        public static class CAnimGraphControllerBase {
            public const nint m_vecParamsToResetInPostGraphUpdate = 0x28; // CUtlVectorFixedGrowable<CGlobalSymbol,8>
        }
        // Parent: None
        // Field count: 3
        public static class CNetworkVelocityVector {
            public const nint m_vecX = 0x10; // CNetworkedQuantizedFloat
            public const nint m_vecY = 0x18; // CNetworkedQuantizedFloat
            public const nint m_vecZ = 0x20; // CNetworkedQuantizedFloat
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDestructiblePart_DamageLevel {
            public const nint m_sName = 0x0; // CUtlString
            public const nint m_sBreakablePieceName = 0x8; // CGlobalSymbol
            public const nint m_nBodyGroupValue = 0x10; // int32
            public const nint m_nHealth = 0x14; // CSkillInt
            public const nint m_flCriticalDamagePercent = 0x24; // float32
            public const nint m_nDamagePassthroughType = 0x28; // EDestructiblePartDamagePassThroughType
            public const nint m_nDestructionDeathBehavior = 0x2C; // DestructiblePartDestructionDeathBehavior_t
            public const nint m_sCustomDeathHandshake = 0x30; // CGlobalSymbol
            public const nint m_bShouldDestroyOnDeath = 0x38; // bool
            public const nint m_flDeathDestroyTime = 0x3C; // CRangeFloat
        }
        // Parent: None
        // Field count: 0
        public static class CNavVolumeAll {
        }
        // Parent: None
        // Field count: 2
        public static class CNavVolumeSphere {
            public const nint m_vCenter = 0x78; // Vector
            public const nint m_flRadius = 0x84; // float32
        }
        // Parent: None
        // Field count: 2
        public static class Relationship_t {
            public const nint disposition = 0x0; // Disposition_t
            public const nint priority = 0x4; // int32
        }
        // Parent: None
        // Field count: 0
        public static class position {
        }
        // Parent: None
        // Field count: 0
        public static class ______ {
        }
        // Parent: ______
        // Field count: 569
        public static class _ {
            public const nint  = 0x48FFFFFF; // 
            public const nint  = 0xD8D48B8; // 
            public const nint  = 0x480B75C0; // 
            public const nint  = 0x5A0FF3CE; // 
            public const nint  = 0x2F3840F7; // 
            public const nint  = 0x8B56EBDE; // 
            public const nint  = 0xD8D48FF; // 
            public const nint  = 0x4AF1CC; // 
            public const nint  = 0x31F97315; // 
            public const nint  = 0x7A830675; // 
            public const nint  = 0x8B483F74; // 
            public const nint  = 0x48088B48; // 
            public const nint  = 0xFD8B4806; // 
            public const nint  = 0xE0BA0F12; // 
            public const nint  = 0xC824948D; // 
            public const nint  = 0x48004AF1; // 
            public const nint  = 0xF17E0F49; // 
            public const nint  = 0xBE8D4924; // 
            public const nint  = 0x280F4400; // 
            public const nint  = 0x8B4C0000; // 
            public const nint  = 0x850FF01; // 
            public const nint  = 0x6630244C; // 
            public const nint  = 0xC16F0F66; // 
            public const nint  = 0xC1FF4808; // 
            public const nint  = 0x197C0098; // 
            public const nint  = 0x6690104F; // 
            public const nint  = 0xF663024; // 
            public const nint  = 0x48F0CA7E; // 
            public const nint  = 0x8B480000; // 
            public const nint  = 0x85480000; // 
            public const nint  = 0x55C48B48; // 
            public const nint  = 0x593A158D; // 
            public const nint  = 0x682444C7; // 
            public const nint  = 0x100FF270; // 
            public const nint  = 0x8B490045; // 
            public const nint  = 0x908D8D49; // 
            public const nint  = 0xFD08B48; // 
            public const nint  = 0x840031F7; // 
            public const nint  = 0x45CC0174; // 
            public const nint  = 0x8148D43; // 
            public const nint  = 0x8B44C044; // 
            public const nint  = 0x634BE8; // 
            public const nint  = 0x2C4BCBE8; // 
            public const nint  = 0x4008E0F; // 
            public const nint  = 0x48004AEE; // 
            public const nint  = 0x4C000000; // 
            public const nint  = 0x8944FFFF; // 
            public const nint  = 0x68B58B4D; // 
            public const nint  = 0x448D4808; // 
            public const nint  = 0x458B0000; // 
            public const nint  = 0x45110FF2; // 
            public const nint  = 0xF41F248; // 
            public const nint  = 0x48C6FF14; // 
            public const nint  = 0xC68B4C00; // 
            public const nint  = 0xF13215FF; // 
            public const nint  = 0x2B860F7F; // 
            public const nint  = 0xF284; // 
            public const nint  = 0xD1840F; // 
            public const nint  = 0xFF81410D; // 
            public const nint  = 0xCB8B0000; // 
            public const nint  = 0x8BC68B44; // 
            public const nint  = 0x33048D0E; // 
            public const nint  = 0x4DC2940F; // 
            public const nint  = 0xFF3345FC; // 
            public const nint  = 0xF03B441F; // 
            public const nint  = 0xC48B4D42; // 
            public const nint  = 0x460; // 
            public const nint  = 0x4806B70F; // 
            public const nint  = 0x8B444824; // 
            public const nint  = 0x4AEAE305; // 
            public const nint  = 0x4AEA4C; // 
            public const nint  = 0x4AEA2B0D; // 
            public const nint  = 0x480031EF; // 
            public const nint  = 0x85483775; // 
            public const nint  = 0x8548FF33; // 
            public const nint  = 0x74DAE840; // 
            public const nint  = 0x480B75C0; // 
            public const nint  = 0xF0450F4C; // 
            public const nint  = 0xFFBF0000; // 
            public const nint  = 0x36870FC7; // 
            public const nint  = 0x1E0; // 
            public const nint  = 0xBA0F1272; // 
            public const nint  = 0x50558D48; // 
            public const nint  = 0x2DB3EC; // 
            public const nint  = 0x830A750C; // 
            public const nint  = 0x10890FF; // 
            public const nint  = 0xFFC88B48; // 
            public const nint  = 0x446630B7; // 
            public const nint  = 0x32EAE805; // 
            public const nint  = 0x15FF004A; // 
            public const nint  = 0x49003935; // 
            public const nint  = 0x4FEB0039; // 
            public const nint  = 0x8D48FFFE; // 
            public const nint  = 0x31EFCC; // 
            public const nint  = 0x894CDE28; // 
            public const nint  = 0xFF334580; // 
            public const nint  = 0xC2FF3024; // 
            public const nint  = 0x280F7824; // 
            public const nint  = 0x110; // 
            public const nint  = 0x4C000004; // 
            public const nint  = 0x8148D7FF; // 
            public const nint  = 0x20247C89; // 
            public const nint  = 0x8B48F68B; // 
            public const nint  = 0xC7FF0000; // 
            public const nint  = 0x50FF018B; // 
            public const nint  = 0x3046110F; // 
            public const nint  = 0x4101B141; // 
            public const nint  = 0x9115FFD5; // 
            public const nint  = 0x0; // 
            public const nint  = 0x31EA64; // 
            public const nint  = 0x15FFC58B; // 
            public const nint  = 0x992F048D; // 
            public const nint  = 0x5DC83F7; // 
            public const nint  = 0xDC838B00; // 
            public const nint  = 0x5C883; // 
            public const nint  = 0x58247C8B; // 
            public const nint  = 0x8B4CF28B; // 
            public const nint  = 0x80C0FF48; // 
            public const nint  = 0xA4894C28; // 
            public const nint  = 0xB20031EA; // 
            public const nint  = 0x5CB20031; // 
            public const nint  = 0x8B4C284D; // 
            public const nint  = 0x15FFE84D; // 
            public const nint  = 0x48C0458D; // 
            public const nint  = 0x48B8458B; // 
            public const nint  = 0x24A48B4C; // 
            public const nint  = 0x7F; // 
            public const nint  = 0x5AC; // 
            public const nint  = 0x48C80348; // 
            public const nint  = 0x4CC78B44; // 
            public const nint  = 0x481850FF; // 
            public const nint  = 0xA024BC; // 
            public const nint  = 0x450EC81; // 
            public const nint  = 0xC7C03345; // 
            public const nint  = 0xFF202444; // 
            public const nint  = 0x54894844; // 
            public const nint  = 0x767FFFFF; // 
            public const nint  = 0x74894450; // 
            public const nint  = 0xEEB3824; // 
            public const nint  = 0x31E8DC; // 
            public const nint  = 0x710D8B48; // 
            public const nint  = 0x50FF1314; // 
            public const nint  = 0x47024; // 
            public const nint  = 0xD1058B48; // 
            public const nint  = 0x4C8D4844; // 
            public const nint  = 0x245C8948; // 
            public const nint  = 0x48000080; // 
            public const nint  = 0x80702484; // 
            public const nint  = 0x48FFFD84; // 
            public const nint  = 0x48000005; // 
            public const nint  = 0x8B480000; // 
            public const nint  = 0xE66A15FF; // 
            public const nint  = 0x15FFCF8B; // 
            public const nint  = 0x53C48B48; // 
            public const nint  = 0xC7480000; // 
            public const nint  = 0x10688948; // 
            public const nint  = 0xE6A215FF; // 
            public const nint  = 0xE8868B48; // 
            public const nint  = 0xFFFFA912; // 
            public const nint  = 0x1850FF01; // 
            public const nint  = 0xA912EB28; // 
            public const nint  = 0x244C8B00; // 
            public const nint  = 0x2CFA3D8D; // 
            public const nint  = 0x48038B48; // 
            public const nint  = 0xD08B4810; // 
            public const nint  = 0x90FFCE8B; // 
            public const nint  = 0x8D483FFF; // 
            public const nint  = 0x2024548D; // 
            public const nint  = 0x5C8; // 
            public const nint  = 0x8B480000; // 
            public const nint  = 0x20BA03; // 
            public const nint  = 0xB70F2374; // 
            public const nint  = 0x89480039; // 
            public const nint  = 0xD233D7FF; // 
            public const nint  = 0xB8818B48; // 
            public const nint  = 0x30818B48; // 
            public const nint  = 0x245C8948; // 
            public const nint  = 0x290B18D; // 
            public const nint  = 0x48E84589; // 
            public const nint  = 0xFF000002; // 
            public const nint  = 0x8B48C803; // 
            public const nint  = 0xC08548C0; // 
            public const nint  = 0x392A7B15; // 
            public const nint  = 0xE21215FF; // 
            public const nint  = 0xC9E8084E; // 
            public const nint  = 0x74C08400; // 
            public const nint  = 0x49E8C845; // 
            public const nint  = 0xFF204D8D; // 
            public const nint  = 0x48DC8B4C; // 
            public const nint  = 0x8949E843; // 
            public const nint  = 0xFFFD7D3C; // 
            public const nint  = 0x8B7FFFFF; // 
            public const nint  = 0x31DFDC; // 
            public const nint  = 0x48047418; // 
            public const nint  = 0x48FF8548; // 
            public const nint  = 0x49DC8B4C; // 
            public const nint  = 0x8949E043; // 
            public const nint  = 0x85480450; // 
            public const nint  = 0x7EBC933; // 
            public const nint  = 0x48C98548; // 
            public const nint  = 0xA0FF4800; // 
            public const nint  = 0x48DA8B48; // 
            public const nint  = 0x74F08141; // 
            public const nint  = 0x95096941; // 
            public const nint  = 0x8349C233; // 
            public const nint  = 0xF41C033; // 
            public const nint  = 0xDE8C1D3; // 
            public const nint  = 0x1115FF00; // 
            public const nint  = 0xCCCCCC00; // 
            public const nint  = 0x302444; // 
            public const nint  = 0x8B480000; // 
            public const nint  = 0x80C2FF48; // 
            public const nint  = 0xC28B4102; // 
            public const nint  = 0xC88B5BD1; // 
            public const nint  = 0xFA831074; // 
            public const nint  = 0xC1334100; // 
            public const nint  = 0xC1C18B5B; // 
            public const nint  = 0x402444C7; // 
            public const nint  = 0x44C74800; // 
            public const nint  = 0x1874D285; // 
            public const nint  = 0x45003925; // 
            public const nint  = 0x30244C8D; // 
            public const nint  = 0x8B480031; // 
            public const nint  = 0xC0818B48; // 
            public const nint  = 0x245C8948; // 
            public const nint  = 0x15FF304F; // 
            public const nint  = 0x50FF018B; // 
            public const nint  = 0x7E0F4866; // 
            public const nint  = 0x4866D88B; // 
            public const nint  = 0x8948C5FF; // 
            public const nint  = 0x15FF0039; // 
            public const nint  = 0xF668E75; // 
            public const nint  = 0x730F66C1; // 
            public const nint  = 0xFFF02824; // 
            public const nint  = 0x245C8948; // 
            public const nint  = 0x840FC085; // 
            public const nint  = 0xB8411A74; // 
            public const nint  = 0x8D480000; // 
            public const nint  = 0x5915FFCB; // 
            public const nint  = 0x30249C8B; // 
            public const nint  = 0xCCC35F00; // 
            public const nint  = 0x8B4800; // 
            public const nint  = 0xE6840FFA; // 
            public const nint  = 0x840F0038; // 
            public const nint  = 0x93840F01; // 
            public const nint  = 0x8B480039; // 
            public const nint  = 0x79358D48; // 
            public const nint  = 0xD8BA15FF; // 
            public const nint  = 0x708B4800; // 
            public const nint  = 0xE8D38B00; // 
            public const nint  = 0x89C48B48; // 
            public const nint  = 0x8948C28B; // 
            public const nint  = 0xBC8948F9; // 
            public const nint  = 0xFFC93301; // 
            public const nint  = 0x858B7; // 
            public const nint  = 0x7FFFFFFF; // 
            public const nint  = 0xCCEBF08B; // 
            public const nint  = 0x63480855; // 
            public const nint  = 0xC384; // 
            public const nint  = 0x9B850F; // 
            public const nint  = 0xFFE28101; // 
            public const nint  = 0xFF830E75; // 
            public const nint  = 0xA8248C; // 
            public const nint  = 0x31D714; // 
            public const nint  = 0xC4FF41F8; // 
            public const nint  = 0xFFFEEB85; // 
            public const nint  = 0x48CF8B4D; // 
            public const nint  = 0xD6FA15FF; // 
            public const nint  = 0x410D8D48; // 
            public const nint  = 0x3166258D; // 
            public const nint  = 0xFFFF0000; // 
            public const nint  = 0x8D480134; // 
            public const nint  = 0x4C202444; // 
            public const nint  = 0x8B56EB00; // 
            public const nint  = 0xD8D48FF; // 
            public const nint  = 0x4AD04C; // 
            public const nint  = 0x4800397C; // 
            public const nint  = 0x15FFD445; // 
            public const nint  = 0x4C8D480B; // 
            public const nint  = 0x8B440000; // 
            public const nint  = 0x4CC00000; // 
            public const nint  = 0x48317578; // 
            public const nint  = 0x8B481274; // 
            public const nint  = 0x245C8948; // 
            public const nint  = 0x33C0048D; // 
            public const nint  = 0xD18B48F8; // 
            public const nint  = 0x75F53B66; // 
            public const nint  = 0xE8057501; // 
            public const nint  = 0x4ACEAB0D; // 
            public const nint  = 0x58B5074; // 
            public const nint  = 0xC90D8D48; // 
            public const nint  = 0x480031D7; // 
            public const nint  = 0xC140245C; // 
            public const nint  = 0xB9411068; // 
            public const nint  = 0xF18B4C00; // 
            public const nint  = 0x8D4CF633; // 
            public const nint  = 0xF40FD83; // 
            public const nint  = 0xFFCD8B44; // 
            public const nint  = 0x678968B; // 
            public const nint  = 0x9915FF30; // 
            public const nint  = 0x713D8D48; // 
            public const nint  = 0x248C8B48; // 
            public const nint  = 0x397954; // 
            public const nint  = 0x2E6BE8; // 
            public const nint  = 0xFEFA8C0F; // 
            public const nint  = 0x48000000; // 
            public const nint  = 0x48308840; // 
            public const nint  = 0x15FF0039; // 
            public const nint  = 0x201D0; // 
            public const nint  = 0xFF003978; // 
            public const nint  = 0x41565540; // 
            public const nint  = 0x8C8D4800; // 
            public const nint  = 0x330031D7; // 
            public const nint  = 0x2474894C; // 
            public const nint  = 0x24948D48; // 
            public const nint  = 0x548D4800; // 
            public const nint  = 0x8C8B4800; // 
            public const nint  = 0xFF008B4C; // 
            public const nint  = 0xC7484024; // 
            public const nint  = 0x48000000; // 
            public const nint  = 0x28247C89; // 
            public const nint  = 0xC0; // 
            public const nint  = 0x4808408B; // 
            public const nint  = 0xD0FF41D3; // 
            public const nint  = 0x46F70000; // 
            public const nint  = 0x31CF6315; // 
            public const nint  = 0x8B0031CF; // 
            public const nint  = 0x993B048D; // 
            public const nint  = 0xC3634CC0; // 
            public const nint  = 0x3FFFFFFF; // 
            public const nint  = 0xC0248C8D; // 
            public const nint  = 0xFF0031D6; // 
            public const nint  = 0x24BC8B48; // 
            public const nint  = 0x24548948; // 
            public const nint  = 0xFFFFFFA9; // 
            public const nint  = 0x31CDF4; // 
            public const nint  = 0x4808478B; // 
            public const nint  = 0x24548948; // 
            public const nint  = 0x448D4C08; // 
            public const nint  = 0x245C8948; // 
            public const nint  = 0x41C71079; // 
            public const nint  = 0xCF6A15FF; // 
            public const nint  = 0x58B4818; // 
            public const nint  = 0x63894404; // 
            public const nint  = 0x538B4800; // 
            public const nint  = 0x2C638944; // 
            public const nint  = 0x31CC7305; // 
            public const nint  = 0x24748B48; // 
            public const nint  = 0x245C8948; // 
            public const nint  = 0x74FFFF83; // 
            public const nint  = 0xC74FFFA; // 
            public const nint  = 0xD1058B48; // 
            public const nint  = 0xA9E8084B; // 
            public const nint  = 0x890C438B; // 
            public const nint  = 0x8B48088B; // 
            public const nint  = 0xC35F20C4; // 
            public const nint  = 0x8D4C1071; // 
            public const nint  = 0x24B4894C; // 
            public const nint  = 0x48000000; // 
            public const nint  = 0x88B4890; // 
            public const nint  = 0x4C01498D; // 
            public const nint  = 0xC27E0F48; // 
            public const nint  = 0x8B4C014A; // 
            public const nint  = 0xF0C27E0F; // 
            public const nint  = 0x58894D20; // 
            public const nint  = 0x8D48FFFF; // 
            public const nint  = 0xF10D8B48; // 
            public const nint  = 0x8B48DE75; // 
            public const nint  = 0x8948304F; // 
            public const nint  = 0x56555340; // 
            public const nint  = 0x24BC8948; // 
            public const nint  = 0x24848B48; // 
            public const nint  = 0x24848B48; // 
            public const nint  = 0x8B490000; // 
            public const nint  = 0x24447F0F; // 
            public const nint  = 0xE9382454; // 
            public const nint  = 0x66084B10; // 
            public const nint  = 0x24548948; // 
            public const nint  = 0x8B490031; // 
            public const nint  = 0x1F0F3074; // 
            public const nint  = 0x481853FF; // 
            public const nint  = 0x8949185F; // 
            public const nint  = 0xFF485B5D; // 
            public const nint  = 0x24448D4C; // 
            public const nint  = 0x8B484914; // 
            public const nint  = 0x490F8B48; // 
            public const nint  = 0x4EBC033; // 
            public const nint  = 0xCCCCCCC3; // 
            public const nint  = 0x76BE8; // 
            public const nint  = 0x245C8948; // 
            public const nint  = 0x8B480000; // 
            public const nint  = 0x3934EB0D; // 
            public const nint  = 0x49068B49; // 
            public const nint  = 0x1008A; // 
            public const nint  = 0x48038948; // 
            public const nint  = 0xC748C78B; // 
            public const nint  = 0x1C748; // 
            public const nint  = 0x2024; // 
            public const nint  = 0x48004AAD; // 
            public const nint  = 0x890D8D48; // 
            public const nint  = 0x24448948; // 
            public const nint  = 0x60245C8B; // 
            public const nint  = 0x245C894C; // 
            public const nint  = 0x24448B48; // 
            public const nint  = 0x20244489; // 
            public const nint  = 0x4894C39; // 
            public const nint  = 0x8D8730F; // 
            public const nint  = 0x14A8D48; // 
            public const nint  = 0x49F0C27E; // 
            public const nint  = 0xC08B4920; // 
            public const nint  = 0xCCCCC35B; // 
            public const nint  = 0x4C10598D; // 
            public const nint  = 0x24448B48; // 
            public const nint  = 0x20244489; // 
            public const nint  = 0x4894C39; // 
            public const nint  = 0x8D8730F; // 
            public const nint  = 0x14A8D48; // 
            public const nint  = 0x49F0C27E; // 
            public const nint  = 0xC08B4920; // 
            public const nint  = 0xCCCCCCC3; // 
            public const nint  = 0x8D480000; // 
            public const nint  = 0x245C8948; // 
            public const nint  = 0x20247429; // 
            public const nint  = 0x89483889; // 
            public const nint  = 0x89483055; // 
            public const nint  = 0x10890; // 
            public const nint  = 0xD8B48D0; // 
            public const nint  = 0x15FFC88B; // 
            public const nint  = 0x270; // 
            public const nint  = 0x4D8D4810; // 
            public const nint  = 0xE090FF01; // 
            public const nint  = 0x458B184E; // 
            public const nint  = 0x8B485824; // 
            public const nint  = 0xC4834820; // 
            public const nint  = 0xC172058B; // 
            public const nint  = 0xFC840F; // 
            public const nint  = 0x74FF047A; // 
            public const nint  = 0x8B48108B; // 
            public const nint  = 0x8B48108B; // 
            public const nint  = 0x100; // 
            public const nint  = 0x61058D48; // 
            public const nint  = 0x8B48306B; // 
            public const nint  = 0x891C478B; // 
            public const nint  = 0x8B48C35F; // 
            public const nint  = 0x83485340; // 
            public const nint  = 0x75482444; // 
            public const nint  = 0x30C48348; // 
            public const nint  = 0xC48348C0; // 
            public const nint  = 0xB70FF28B; // 
            public const nint  = 0xB9; // 
            public const nint  = 0xC084C0FF; // 
            public const nint  = 0xBF52058B; // 
            public const nint  = 0xBE48; // 
            public const nint  = 0x48085F89; // 
            public const nint  = 0x4C004BA0; // 
            public const nint  = 0x48245C8B; // 
            public const nint  = 0x8B480789; // 
            public const nint  = 0x38247C8B; // 
            public const nint  = 0x1010101; // 
            public const nint  = 0x51058B48; // 
            public const nint  = 0x83840FC0; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xD8B481F; // 
            public const nint  = 0xC738948; // 
            public const nint  = 0x4848247C; // 
            public const nint  = 0x5E4120C4; // 
            public const nint  = 0x71058B48; // 
            public const nint  = 0x83840FC0; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xD8B481F; // 
            public const nint  = 0xC738948; // 
            public const nint  = 0x4848247C; // 
            public const nint  = 0x5E4120C4; // 
            public const nint  = 0x91058B48; // 
            public const nint  = 0x83840FC0; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xD8B481F; // 
            public const nint  = 0xC738948; // 
            public const nint  = 0x4848247C; // 
            public const nint  = 0x5E4120C4; // 
            public const nint  = 0x9F62058D; // 
            public const nint  = 0x31C2BB15; // 
            public const nint  = 0x480031C2; // 
            public const nint  = 0x28; // 
            public const nint  = 0x48382474; // 
            public const nint  = 0x245C8948; // 
            public const nint  = 0x10BAD88B; // 
            public const nint  = 0x4803EB08; // 
            public const nint  = 0x9CBA0D8B; // 
            public const nint  = 0x4C118B48; // 
            public const nint  = 0x48000002; // 
            public const nint  = 0x48004B9C; // 
            public const nint  = 0x18B4818; // 
            public const nint  = 0x48C3450F; // 
            public const nint  = 0xEB038B48; // 
            public const nint  = 0x245C8948; // 
            public const nint  = 0x88B4800; // 
            public const nint  = 0x4830246C; // 
            public const nint  = 0x18B4860; // 
            public const nint  = 0x48003927; // 
            public const nint  = 0x390D8B48; // 
            public const nint  = 0x47B70F0B; // 
            public const nint  = 0x89480000; // 
            public const nint  = 0xC68B4818; // 
            public const nint  = 0x6C7; // 
            public const nint  = 0x28EC8348; // 
            public const nint  = 0x38244489; // 
            public const nint  = 0x245C8948; // 
            public const nint  = 0x18578B48; // 
            public const nint  = 0xD78B4800; // 
            public const nint  = 0x246C8948; // 
            public const nint  = 0x41F70000; // 
            public const nint  = 0xB7E7FFF; // 
            public const nint  = 0x1718D3F; // 
            public const nint  = 0x8D0EEBFF; // 
            public const nint  = 0xC0000000; // 
            public const nint  = 0xC1F7; // 
            public const nint  = 0xE8B4108; // 
            public const nint  = 0x245C8948; // 
            public const nint  = 0xD98B4CFA; // 
            public const nint  = 0x33443501; // 
            public const nint  = 0x8DE03344; // 
            public const nint  = 0x75ED8566; // 
            public const nint  = 0x1FB70F41; // 
            public const nint  = 0x400C8D48; // 
            public const nint  = 0xF8834110; // 
            public const nint  = 0xF20738B; // 
            public const nint  = 0xF8C148C2; // 
            public const nint  = 0xEBC08B41; // 
            public const nint  = 0xFFF98341; // 
            public const nint  = 0x8B4C03; // 
            public const nint  = 0x8B44088B; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xE0EBC18B; // 
            public const nint  = 0xD98B48F2; // 
            public const nint  = 0xFFFFFFE2; // 
            public const nint  = 0x48000001; // 
            public const nint  = 0xB60F41C6; // 
            public const nint  = 0x69C8330D; // 
            public const nint  = 0x14E850F; // 
            public const nint  = 0x41FF458D; // 
            public const nint  = 0x8B480453; // 
            public const nint  = 0x3B2574FF; // 
            public const nint  = 0x8310C854; // 
            public const nint  = 0x4747FFF; // 
            public const nint  = 0xC78B4812; // 
            public const nint  = 0x30438B4C; // 
            public const nint  = 0x438B4804; // 
            public const nint  = 0xFFFFFFFD; // 
            public const nint  = 0x3C6B8310; // 
            public const nint  = 0x4C48247C; // 
            public const nint  = 0x20247C89; // 
            public const nint  = 0x413B8B41; // 
            public const nint  = 0x18E9C1C8; // 
            public const nint  = 0x69C2330D; // 
            public const nint  = 0xEBC93304; // 
            public const nint  = 0x83418004; // 
            public const nint  = 0x8B4C03EB; // 
            public const nint  = 0x45028B4C; // 
            public const nint  = 0xB88C0F; // 
            public const nint  = 0xF8C148C2; // 
            public const nint  = 0xEBC08B41; // 
            public const nint  = 0xFFF88341; // 
            public const nint  = 0x49088B4C; // 
            public const nint  = 0x448B4500; // 
            public const nint  = 0x48FFFFFF; // 
            public const nint  = 0x880FD285; // 
            public const nint  = 0x247C8948; // 
            public const nint  = 0xCD248D; // 
        }
        // Parent: None
        // Field count: 25
        public static class _H____ {
            public const nint 3V�� = 0x158B; // 
            public const nint  = 0x6F66; // 
            public const nint 3V�� = 0x6DC; // 
            public const nint ���W. = 0x6FF; // 
            public const nint `��W. = 0x0; // 
            public const nint �r�W. = 0x15A4; // 
            public const nint  = 0x666E692D; // 
            public const nint `��W. = 0x6E0; // 
            public const nint �6]�� = 0x44080000; // 
            public const nint ���W. = 0x6E0; // 
            public const nint @��W. = 0x0; // 
            public const nint �#R�� = 0xFFFFFFFF; // 
            public const nint 3V�� = 0x892; // 
            public const nint ���W. = 0xFFFFFFFF; // 
            public const nint ���W. = 0xFFFF0068; // 
            public const nint `��W. = 0x6D4; // 
            public const nint `r�W. = 0x666E692D; // 
            public const nint �}�W. = 0x15A5; // 
            public const nint  ��W. = 0x37302E37; // 
            public const nint �e`�� = 0x0; // 
            public const nint ���W. = 0x0; // 
            public const nint ���W. = 0x13EB; // 
            public const nint ���W. = 0x15A8; // 
            public const nint ���W. = 0xFFFFFFFF; // 
            public const nint 3V�� = 0x6DF; // 
        }
        // Parent: None
        // Field count: 0
        public static class ______ {
        }
        // Parent: None
        // Field count: 103
        public static class __o__ {
            public const nint 3V�� = 0x805; // 
            public const nint  ��W. = 0x6DC; // 
            public const nint  = 0x751; // 
            public const nint ���W. = 0x891; // 
            public const nint  = 0x666E692D; // 
            public const nint 3V�� = 0x15A4; // 
            public const nint 3V�� = 0x6D6; // 
            public const nint `y�W. = 0x6D6; // 
            public const nint `��W. = 0xFFFFFFFF; // 
            public const nint @��W. = 0x6DC; // 
            public const nint @��W. = 0x666E692D; // 
            public const nint P��� = 0x7E4; // 
            public const nint ���W. = 0x666E692D; // 
            public const nint �~�W. = 0x6F66; // 
            public const nint ���� = 0x36636B90; // 
            public const nint ���W. = 0x752; // 
            public const nint 3V�� = 0x751; // 
            public const nint ���W. = 0x6DF; // 
            public const nint `��W. = 0x773; // 
            public const nint ���W. = 0x44080000; // 
            public const nint 3V�� = 0x6D7; // 
            public const nint  ��W. = 0x666E692D; // 
            public const nint  ��W. = 0x6D9; // 
            public const nint `��W. = 0x15A3; // 
            public const nint  = 0x6FE; // 
            public const nint ���W. = 0x0; // 
            public const nint 3V�� = 0x6E0; // 
            public const nint �e`�� = 0x3F800000; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint �v�W. = 0x666E692D; // 
            public const nint ���W. = 0x0; // 
            public const nint  ��W. = 0x6DF; // 
            public const nint  = 0x158B; // 
            public const nint  z�W. = 0x6F66; // 
            public const nint 3V�� = 0x159A; // 
            public const nint ��� = 0x152F; // 
            public const nint  = 0x666E692D; // 
            public const nint `��W. = 0x68; // 
            public const nint ���W. = 0x44080000; // 
            public const nint `��W. = 0x0; // 
            public const nint @��W. = 0x892; // 
            public const nint 3V�� = 0x804; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint ���W. = 0x804; // 
            public const nint �}�W. = 0xFFFFFFFF; // 
            public const nint 3V�� = 0x15A8; // 
            public const nint @��W. = 0x6D8; // 
            public const nint `l�W. = 0x15A5; // 
            public const nint  = 0x1550; // 
            public const nint �6]�� = 0x44080000; // 
            public const nint �s�W. = 0x15A6; // 
            public const nint  = 0x68; // 
            public const nint �e`�� = 0x0; // 
            public const nint 3V�� = 0x6D9; // 
            public const nint `��W. = 0x6D4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  ��W. = 0x6D7; // 
            public const nint ���W. = 0x7E4; // 
            public const nint ���� = 0x804; // 
            public const nint  = 0x666E692D; // 
            public const nint 3V�� = 0x773; // 
            public const nint  = 0x0; // 
            public const nint  = 0x7E4; // 
            public const nint  = 0x6D4; // 
            public const nint 3V�� = 0x6D8; // 
            public const nint �n�W. = 0x70C; // 
            public const nint  ��W. = 0x6FE; // 
            public const nint  ��W. = 0x6E0; // 
            public const nint  l�W. = 0x15A4; // 
            public const nint  v�W. = 0x6FE; // 
            public const nint  ��W. = 0x69656365; // 
            public const nint 3V�� = 0x6D4; // 
            public const nint 3V�� = 0x772; // 
            public const nint 3V�� = 0x15A5; // 
            public const nint ���W. = 0x159A; // 
            public const nint @��W. = 0x44080000; // 
            public const nint ���W. = 0x6FD; // 
            public const nint ���W. = 0x13EB; // 
            public const nint 3V�� = 0x158B; // 
            public const nint  = 0x6F66; // 
            public const nint 3V�� = 0x6DC; // 
            public const nint ���W. = 0x6FF; // 
            public const nint `��W. = 0x0; // 
            public const nint �r�W. = 0x15A4; // 
            public const nint  = 0x666E692D; // 
            public const nint `��W. = 0x6E0; // 
            public const nint �6]�� = 0x44080000; // 
            public const nint  = 0x68; // 
            public const nint @��W. = 0x0; // 
            public const nint �#R�� = 0xFFFFFFFF; // 
            public const nint 3V�� = 0x892; // 
            public const nint ���W. = 0xFFFFFFFF; // 
            public const nint ���W. = 0xFFFF0068; // 
            public const nint `��W. = 0x6D4; // 
            public const nint `r�W. = 0x666E692D; // 
            public const nint �}�W. = 0x15A5; // 
            public const nint  ��W. = 0x37302E37; // 
            public const nint �e`�� = 0x0; // 
            public const nint ���W. = 0x0; // 
            public const nint ���W. = 0x13EB; // 
            public const nint ���W. = 0x15A8; // 
            public const nint ���W. = 0xFFFFFFFF; // 
            public const nint 3V�� = 0x6DF; // 
        }
        // Parent: None
        // Field count: 150
        public static class __eN__ {
            public const nint  = 0x45E90000; // 
            public const nint ��o_� = 0x5F6FCC50; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint tR = 0x0; // 
            public const nint ��J�� = 0x0; // 
            public const nint  = 0x45E90000; // 
            public const nint ��o_� = 0xDBABF220; // 
            public const nint  = 0x0; // 
            public const nint  = 0x13; // 
            public const nint ࠕN. = 0xD5DC8A60; // 
            public const nint ��J�� = 0x11; // 
            public const nint  = 0xA1B12B70; // 
            public const nint  = 0x5F6FCC68; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x2A264437; // 
            public const nint  = 0x45EB4000; // 
            public const nint ��J�� = 0x45EB4000; // 
            public const nint  = 0x5F6FCE01; // 
            public const nint  = 0x1; // 
            public const nint ��J�� = 0x45EB4000; // 
            public const nint $������������ = 0xF1BA86C0; // 
            public const nint H�J�� = 0x932C2499; // H����
            public const nint  = 0x2; // 
            public const nint  = 0xA146BB98; // 
            public const nint  = 0x5F6FDE30; // 
            public const nint  = 0x4EE16800; // 01���
            public const nint ���W. = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x4EE16800; // 
            public const nint  = 0x0; // H9oXu2�G8��Hc�x'H�G@(�H��H��H��P��uH�H���H��yٽ
            public const nint ���� = 0x5F6FD030; // 
            public const nint ���� = 0x0; // 
            public const nint Initializing = 0x7FFFFFFF; // 
            public const nint  = 0x5828B500; // 
            public const nint  = 0x7FFF; // A���
            public const nint  = 0x1; // 
            public const nint  = 0xF0; // 
            public const nint  = 0x1; // 
            public const nint  = 0x8; // 
            public const nint `�o_� = 0x5F6FD0D0; // �4Y��
            public const nint H�o_� = 0x0; // 
            public const nint  = 0xF1BA86C0; // 
            public const nint  = 0xF1BA86C0; // 
            public const nint C:\buildworker\csgo_rel_win64\build\src\game\client\c_baseentity.cpp = 0xA14646A0; // 
            public const nint C:\buildworker\csgo_rel_win64\build\src\game\client\c_baseentity.cpp = 0xA14646A0; // 
            public const nint  = 0x100; // 
            public const nint  = 0x6; // 
            public const nint  = 0x6; // 
            public const nint  = 0x4F6B9E80; // 
            public const nint  = 0x3C800000; // 
            public const nint  = 0x885D3130; // 
            public const nint  = 0x1; // 
            public const nint H+�H��$p  = 0x1; // 
            public const nint  = 0x5; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5F6FD360; // 
            public const nint  = 0x1; // 
            public const nint H+�H�l$`E3�E��H��H��E���� = 0x5F6FD320; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0xA1C37D00; // 
            public const nint  = 0x1; // 
            public const nint  = 0x4EA33800; // 
            public const nint  = 0x0; // 
            public const nint  = 0x4E959F20; // 
            public const nint  = 0x46C90FDB; // 
            public const nint ��A�� = 0x5F6FD540; // 
            public const nint ��N�� = 0x0; // 
            public const nint  �J�� = 0x4ED05C00; // 
            public const nint  = 0x4EA33800; // 
            public const nint  �J�� = 0xA1C30E48; // 
            public const nint 9��B:[�B = 0x3FAAAAAB; // 
            public const nint  = 0x5F6FD6E0; // 
            public const nint ��A�� = 0x3FAAAAAB; // 
            public const nint 9��B:[�B = 0xA1C381D8; // 
            public const nint  = 0xA1C381D8; // 
            public const nint �� = 0x40A00000; // 
            public const nint  = 0x78; // 
            public const nint ����- = 0x2E4C178; // �
            public const nint  = 0x3F; // 
            public const nint  = 0x0; // 
            public const nint H���� = 0xA00050B4; // 
            public const nint S#'Ve�@��+�g�1��ܝ<c��G���Q1��� = 0x0; // 
            public const nint  = 0x19; // 
            public const nint  = 0x5F6FE228; // 
            public const nint  = 0x0; // 
            public const nint p�4. = 0x31B; // 
            public const nint  = 0xFA2070C0; // 
            public const nint �$��� = 0x57CA9AA0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x35EB72C0; // 
            public const nint �%/�� = 0x57CA9BA0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0xC181957; // 
            public const nint  = 0x0; // 
            public const nint  = 0x3F800000; // 
            public const nint  = 0x8AD232BC; // 
            public const nint  = 0x10; // 
            public const nint P7>Z. = 0x5F6FDF10; // �o_�
            public const nint  = 0xF1EAD8D0; // 
            public const nint CRenderGameSystem::OnClientPreOutput = 0xC39F3010; // 
            public const nint ��eN. = 0x2B54; // 
            public const nint  = 0x0; // 
            public const nint  = 0x41893EA5; // 
            public const nint  = 0x5F6FE130; // 
            public const nint 8�� = 0x33902400; // 
            public const nint � = 0x4FB76860; // 
            public const nint  = 0xA48FF140; // 
            public const nint EndFrame = 0xA48FF140; // 
            public const nint EndFrame = 0xA48D6930; // 
            public const nint  = 0x4670F800; // 8��
            public const nint  = 0x5F6FDD29; // 
            public const nint C:\buildworker\csgo_rel_win64\build\src\panorama\uitoplevelwindow.cpp = 0xFF000000; // 
            public const nint \�Z. = 0xA48E5590; // 
            public const nint PaintEmptyFrameAndForceLaterRepaint = 0xA48E5590; // 
            public const nint �z��� = 0xF1BA86C0; // �
            public const nint ����� = 0xFF000000; // 
            public const nint  = 0xA48D90D0; // 8��
            public const nint LayoutAndPaintWindows = 0xA48D90D0; // 
            public const nint LayoutAndPaintWindows = 0xA48D90D0; // 
            public const nint LayoutAndPaintWindows = 0x41893EA5; // 
            public const nint ����� = 0x0; // 
            public const nint P���� = 0xD3D4C8A0; // 
            public const nint ����� = 0xA13321A8; // p����
            public const nint P���� = 0xF1F433C0; // 8��
            public const nint ����� = 0x78; // 
            public const nint  = 0x0; // �
            public const nint � = 0x4C6C3800; // 
            public const nint  = 0x2; // �
            public const nint � = 0x4FB7F640; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x45636880; // PhysicsGameSystem
            public const nint  = 0x0; // 
            public const nint  = 0x5F6FE190; // 
            public const nint  = 0x5F6FE030; // H��(�����H��t�X�	
            public const nint  = 0x57CA7A00; // 
            public const nint  = 0x0; // 
            public const nint  = 0x2B54; // 
            public const nint  = 0xD40FCE20; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint �o_� = 0xD5F9EC50; // 
        }
        // Parent: None
        // Field count: 0
        public static class _8___ {
        }
        // Parent: None
        // Field count: 0
        public static class _ {
        }
        // Parent: None
        // Field count: 0
        public static class _ {
        }
        // Parent: None
        // Field count: 0
        public static class _ {
        }
    }
}
