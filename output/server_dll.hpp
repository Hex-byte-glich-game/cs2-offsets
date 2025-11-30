// Generated using https://github.com/a2x/cs2-dumper
// 2025-11-30 05:42:48.431405700 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: server.dll
        // Class count: 166
        // Enum count: 92
        namespace server_dll {
            // Alignment: 4
            // Member count: 4
            enum class CFuncMover__TransitionToPathNodeAction_t : uint32_t {
                TRANSITION_TO_PATH_NODE_ACTION_NONE = 0x0,
                TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 0x1,
                TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 0x2,
                TRANSITION_TO_PATH_NODE_TRANSITIONING = 0x3
            };
            // Alignment: 4
            // Member count: 9
            enum class CFuncMover__OrientationUpdate_t : uint32_t {
                ORIENTATION_FORWARD_PATH = 0x0,
                ORIENTATION_FORWARD_PATH_AND_FIXED_PITCH = 0x1,
                ORIENTATION_FORWARD_PATH_AND_UP_CONTROL_POINT = 0x2,
                ORIENTATION_MATCH_CONTROL_POINT = 0x3,
                ORIENTATION_FIXED = 0x4,
                ORIENTATION_FACE_PLAYER = 0x5,
                ORIENTATION_FORWARD_MOVEMENT_DIRECTION = 0x6,
                ORIENTATION_FORWARD_MOVEMENT_DIRECTION_AND_UP_CONTROL_POINT = 0x7,
                ORIENTATION_FACE_ENTITY = 0x8
            };
            // Alignment: 4
            // Member count: 29
            enum class C_EconItemView : uint32_t {
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
            };
            // Alignment: 1
            // Member count: 36
            enum class CGameSceneNode : uint8_t {
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
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CRangeFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[2]
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MFgdHelper
            namespace CDestructiblePart {
                constexpr std::ptrdiff_t m_DebugName = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nHitGroup = 0x8; // HitGroup_t
                constexpr std::ptrdiff_t m_bDisableHitGroupWhenDestroyed = 0xC; // bool
                constexpr std::ptrdiff_t m_nOtherHitgroupsToDestroyWhenFullyDestructed = 0x10; // CUtlVector<HitGroup_t>
                constexpr std::ptrdiff_t m_bOnlyDestroyWhenGibbing = 0x28; // bool
                constexpr std::ptrdiff_t m_sBodyGroupName = 0x30; // CGlobalSymbol
                constexpr std::ptrdiff_t m_DamageLevels = 0x38; // CUtlVector<CDestructiblePart_DamageLevel>
            }
            // Parent: None
            // Field count: 0
            namespace CAnimEventQueueListener {
            }
            // Parent: Relationship_t
            // Field count: 2
            namespace RelationshipOverride_t {
                constexpr std::ptrdiff_t entity = 0x8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t classType = 0xC; // Class_T
            }
            // Parent: None
            // Field count: 2
            namespace AutoRoomDoorwayPairs_t {
                constexpr std::ptrdiff_t vP1 = 0x0; // Vector
                constexpr std::ptrdiff_t vP2 = 0xC; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CRemapFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[4]
            }
            // Parent: None
            // Field count: 3
            namespace CHintMessage {
                constexpr std::ptrdiff_t m_hintString = 0x0; // char*
                constexpr std::ptrdiff_t m_args = 0x8; // CUtlVector<char*>
                constexpr std::ptrdiff_t m_duration = 0x20; // float32
            }
            // Parent: None
            // Field count: 7
            namespace ParticleNode_t {
                constexpr std::ptrdiff_t m_hEntity = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iIndex = 0x4; // ParticleIndex_t
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_flGrowthDuration = 0xC; // float32
                constexpr std::ptrdiff_t m_vecGrowthOrigin = 0x10; // Vector
                constexpr std::ptrdiff_t m_flEndcapTime = 0x1C; // float32
                constexpr std::ptrdiff_t m_bMarkedForDelete = 0x20; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomFGDType
            namespace CFootstepTableHandle {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDecalGroupVData {
                constexpr std::ptrdiff_t m_vecOptions = 0x0; // CUtlVector<DecalGroupOption_t>
                constexpr std::ptrdiff_t m_flTotalProbability = 0x18; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CNmSnapWeaponTask {
            }
            // Parent: None
            // Field count: 1
            namespace CPlayerControllerComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 1
            namespace CResponseQueue {
                constexpr std::ptrdiff_t m_ExpresserTargets = 0x38; // CUtlVector<CAI_Expresser*>
            }
            // Parent: None
            // Field count: 2
            namespace CScriptUniformRandomStream {
                constexpr std::ptrdiff_t m_hScriptScope = 0x8; // HSCRIPT
                constexpr std::ptrdiff_t m_nInitialSeed = 0x9C; // int32
            }
            // Parent: None
            // Field count: 6
            namespace lerpdata_t {
                constexpr std::ptrdiff_t m_hEnt = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_MoveType = 0x4; // MoveType_t
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_vecStartOrigin = 0xC; // Vector
                constexpr std::ptrdiff_t m_qStartRot = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_nFXIndex = 0x30; // ParticleIndex_t
            }
            // Parent: None
            // Field count: 0
            namespace WrappedPhysicsJoint_t {
            }
            // Parent: None
            // Field count: 3
            namespace SimpleConstraintSoundProfile {
                constexpr std::ptrdiff_t eKeypoints = 0x8; // SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
                constexpr std::ptrdiff_t m_keyPoints = 0xC; // float32[2]
                constexpr std::ptrdiff_t m_reversalSoundThresholds = 0x14; // float32[3]
            }
            // Parent: None
            // Field count: 2
            namespace CSimpleSimTimer {
                constexpr std::ptrdiff_t m_flNext = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0x4; // WorldGroupId_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysicsBodyGameMarkupData {
                constexpr std::ptrdiff_t m_PhysicsBodyMarkupByBoneName = 0x0; // CUtlOrderedMap<CUtlString,CPhysicsBodyGameMarkup>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSkillDamage {
                constexpr std::ptrdiff_t m_flDamage = 0x0; // CSkillFloat
                constexpr std::ptrdiff_t m_flNPCDamageScalarVsNPC = 0x10; // float32
                constexpr std::ptrdiff_t m_flPhysicsForceDamage = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CFloatExponentialMovingAverage {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimEventListenerBase {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEventConsumer {
            }
            // Parent: None
            // Field count: 3
            namespace CNetworkViewOffsetVector {
                constexpr std::ptrdiff_t m_vecX = 0x10; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecY = 0x18; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecZ = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 1
            namespace AmmoIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int8
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDestructiblePartsSystemData {
                constexpr std::ptrdiff_t m_PartsDataByHitGroup = 0x0; // CUtlOrderedMap<HitGroup_t,CDestructiblePart>
                constexpr std::ptrdiff_t m_nMinMaxNumberHitGroupsToDestroyWhenGibbing = 0x28; // CRangeInt
            }
            // Parent: None
            // Field count: 2
            namespace CRopeOverlapHit {
                constexpr std::ptrdiff_t m_hEntity = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecOverlappingLinks = 0x8; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 3
            namespace ResponseContext_t {
                constexpr std::ptrdiff_t m_iszName = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszValue = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_fExpirationTime = 0x10; // GameTime_t
            }
            // Parent: None
            // Field count: 1
            namespace CNavVolumeSphericalShell {
                constexpr std::ptrdiff_t m_flRadiusInner = 0x88; // float32
            }
            // Parent: None
            // Field count: 1
            namespace CPlayerPawnComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 0
            namespace CCSGOPlayerAnimGraphState {
            }
            // Parent: None
            // Field count: 25
            namespace CDecalInstance {
                constexpr std::ptrdiff_t m_sDecalGroup = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_hMaterial = 0x8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_sSequenceName = 0x10; // CUtlStringToken
                constexpr std::ptrdiff_t m_hEntity = 0x14; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nBoneIndex = 0x18; // int32
                constexpr std::ptrdiff_t m_nTriangleIndex = 0x1C; // int32
                constexpr std::ptrdiff_t m_vPositionLS = 0x20; // Vector
                constexpr std::ptrdiff_t m_vNormalLS = 0x2C; // Vector
                constexpr std::ptrdiff_t m_vSAxisLS = 0x38; // Vector
                constexpr std::ptrdiff_t m_nFlags = 0x44; // DecalFlags_t
                constexpr std::ptrdiff_t m_Color = 0x48; // Color
                constexpr std::ptrdiff_t m_flWidth = 0x4C; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x50; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x54; // float32
                constexpr std::ptrdiff_t m_flAnimationScale = 0x58; // float32
                constexpr std::ptrdiff_t m_flAnimationStartTime = 0x5C; // float32
                constexpr std::ptrdiff_t m_flPlaceTime = 0x60; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x64; // float32
                constexpr std::ptrdiff_t m_flFadeDuration = 0x68; // float32
                constexpr std::ptrdiff_t m_flLightingOriginOffset = 0x6C; // float32
                constexpr std::ptrdiff_t m_flBoundingRadiusSqr = 0x78; // float32
                constexpr std::ptrdiff_t m_nSequenceIndex = 0x7C; // int16
                constexpr std::ptrdiff_t m_bIsAdjacent = 0x7E; // bool
                constexpr std::ptrdiff_t m_bDoDecalLightmapping = 0x7F; // bool
                constexpr std::ptrdiff_t m_nSkinnedModelMode = 0x80; // DecalMode_t
            }
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGameScriptedMoveData {
                constexpr std::ptrdiff_t m_vAccumulatedRootMotion = 0x0; // Vector
                constexpr std::ptrdiff_t m_angAccumulatedRootMotionRotation = 0xC; // QAngle
                constexpr std::ptrdiff_t m_vSrc = 0x18; // VectorWS
                constexpr std::ptrdiff_t m_angSrc = 0x24; // QAngle
                constexpr std::ptrdiff_t m_angCurrent = 0x30; // QAngle
                constexpr std::ptrdiff_t m_flLockedSpeed = 0x3C; // float32
                constexpr std::ptrdiff_t m_flAngRate = 0x40; // float32
                constexpr std::ptrdiff_t m_flDuration = 0x44; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x48; // GameTime_t
                constexpr std::ptrdiff_t m_bActive = 0x4C; // bool
                constexpr std::ptrdiff_t m_bTeleportOnEnd = 0x4D; // bool
                constexpr std::ptrdiff_t m_bIgnoreRotation = 0x4E; // bool
                constexpr std::ptrdiff_t m_bSuccess = 0x4F; // bool
                constexpr std::ptrdiff_t m_nForcedCrouchState = 0x50; // ForcedCrouchState_t
                constexpr std::ptrdiff_t m_bIgnoreCollisions = 0x54; // bool
                constexpr std::ptrdiff_t m_vDest = 0x58; // Vector
                constexpr std::ptrdiff_t m_angDst = 0x64; // QAngle
                constexpr std::ptrdiff_t m_hDestEntity = 0x70; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 1
            namespace CSkeletonAnimationController {
                constexpr std::ptrdiff_t m_pSkeletonInstance = 0x8; // CSkeletonInstance*
            }
            // Parent: None
            // Field count: 0
            namespace CNavVolumeMarkupVolume {
            }
            // Parent: None
            // Field count: 2
            namespace CResponseCriteriaSet {
                constexpr std::ptrdiff_t m_nNumPrefixedContexts = 0x30; // int32
                constexpr std::ptrdiff_t m_bOverrideOnAppend = 0x34; // bool
            }
            // Parent: None
            // Field count: 11
            namespace CAI_Expresser {
                constexpr std::ptrdiff_t m_flStopTalkTime = 0x60; // GameTime_t
                constexpr std::ptrdiff_t m_flStopTalkTimeWithoutDelay = 0x64; // GameTime_t
                constexpr std::ptrdiff_t m_flQueuedSpeechTime = 0x68; // GameTime_t
                constexpr std::ptrdiff_t m_flBlockedTalkTime = 0x6C; // GameTime_t
                constexpr std::ptrdiff_t m_voicePitch = 0x70; // int32
                constexpr std::ptrdiff_t m_flLastTimeAcceptedSpeak = 0x74; // GameTime_t
                constexpr std::ptrdiff_t m_bAllowSpeakingInterrupts = 0x78; // bool
                constexpr std::ptrdiff_t m_bConsiderSceneInvolvementAsSpeech = 0x79; // bool
                constexpr std::ptrdiff_t m_bSceneEntityDisabled = 0x7A; // bool
                constexpr std::ptrdiff_t m_nLastSpokenPriority = 0x7C; // int32
                constexpr std::ptrdiff_t m_pOuter = 0x98; // CBaseFlex*
            }
            // Parent: None
            // Field count: 0
            namespace IChoreoServices {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEventConsumerAttributes {
            }
            // Parent: CStopwatchBase
            // Field count: 1
            namespace CStopwatch {
                constexpr std::ptrdiff_t m_flInterval = 0xC; // float32
            }
            // Parent: None
            // Field count: 3
            namespace ResponseParams {
                constexpr std::ptrdiff_t odds = 0x10; // int16
                constexpr std::ptrdiff_t flags = 0x12; // int16
                constexpr std::ptrdiff_t m_pFollowup = 0x18; // ResponseFollowup*
            }
            // Parent: None
            // Field count: 8
            namespace ConstraintSoundInfo {
                constexpr std::ptrdiff_t m_vSampler = 0x8; // VelocitySampler
                constexpr std::ptrdiff_t m_soundProfile = 0x20; // SimpleConstraintSoundProfile
                constexpr std::ptrdiff_t m_forwardAxis = 0x40; // Vector
                constexpr std::ptrdiff_t m_iszTravelSoundFwd = 0x50; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTravelSoundBack = 0x58; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszReversalSounds = 0x78; // CUtlSymbolLarge[3]
                constexpr std::ptrdiff_t m_bPlayTravelSound = 0x90; // bool
                constexpr std::ptrdiff_t m_bPlayReversalSound = 0x91; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysicsBodyGameMarkup {
                constexpr std::ptrdiff_t m_TargetBody = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_Tag = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PointCameraSettings_t {
                constexpr std::ptrdiff_t m_flNearBlurryDistance = 0x0; // float32
                constexpr std::ptrdiff_t m_flNearCrispDistance = 0x4; // float32
                constexpr std::ptrdiff_t m_flFarCrispDistance = 0x8; // float32
                constexpr std::ptrdiff_t m_flFarBlurryDistance = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CVectorMovingAverage {
            }
            // Parent: None
            // Field count: 4
            namespace CSoundEnvelope {
                constexpr std::ptrdiff_t m_current = 0x0; // float32
                constexpr std::ptrdiff_t m_target = 0x4; // float32
                constexpr std::ptrdiff_t m_rate = 0x8; // float32
                constexpr std::ptrdiff_t m_forceupdate = 0xC; // bool
            }
            // Parent: None
            // Field count: 25
            namespace dynpitchvol_base_t {
                constexpr std::ptrdiff_t preset = 0x0; // int32
                constexpr std::ptrdiff_t pitchrun = 0x4; // int32
                constexpr std::ptrdiff_t pitchstart = 0x8; // int32
                constexpr std::ptrdiff_t spinup = 0xC; // int32
                constexpr std::ptrdiff_t spindown = 0x10; // int32
                constexpr std::ptrdiff_t volrun = 0x14; // int32
                constexpr std::ptrdiff_t volstart = 0x18; // int32
                constexpr std::ptrdiff_t fadein = 0x1C; // int32
                constexpr std::ptrdiff_t fadeout = 0x20; // int32
                constexpr std::ptrdiff_t lfotype = 0x24; // int32
                constexpr std::ptrdiff_t lforate = 0x28; // int32
                constexpr std::ptrdiff_t lfomodpitch = 0x2C; // int32
                constexpr std::ptrdiff_t lfomodvol = 0x30; // int32
                constexpr std::ptrdiff_t cspinup = 0x34; // int32
                constexpr std::ptrdiff_t cspincount = 0x38; // int32
                constexpr std::ptrdiff_t pitch = 0x3C; // int32
                constexpr std::ptrdiff_t spinupsav = 0x40; // int32
                constexpr std::ptrdiff_t spindownsav = 0x44; // int32
                constexpr std::ptrdiff_t pitchfrac = 0x48; // int32
                constexpr std::ptrdiff_t vol = 0x4C; // int32
                constexpr std::ptrdiff_t fadeinsav = 0x50; // int32
                constexpr std::ptrdiff_t fadeoutsav = 0x54; // int32
                constexpr std::ptrdiff_t volfrac = 0x58; // int32
                constexpr std::ptrdiff_t lfofrac = 0x5C; // int32
                constexpr std::ptrdiff_t lfomult = 0x60; // int32
            }
            // Parent: CSimpleSimTimer
            // Field count: 1
            namespace CStopwatchBase {
                constexpr std::ptrdiff_t m_fIsRunning = 0x8; // bool
            }
            // Parent: None
            // Field count: 1
            namespace CNavVolumeVector {
                constexpr std::ptrdiff_t m_bHasBeenPreFiltered = 0x80; // bool
            }
            // Parent: None
            // Field count: 2
            namespace NavGravity_t {
                constexpr std::ptrdiff_t m_vGravity = 0x0; // Vector
                constexpr std::ptrdiff_t m_bDefault = 0xC; // bool
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseScriptedSequenceData_t {
                constexpr std::ptrdiff_t m_nActorID = 0x0; // int32
                constexpr std::ptrdiff_t m_szPreIdleSequence = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_szEntrySequence = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_szSequence = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_szExitSequence = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_nMoveTo = 0x28; // ScriptedMoveTo_t
                constexpr std::ptrdiff_t m_nMoveToGait = 0x2C; // SharedMovementGait_t
                constexpr std::ptrdiff_t m_nHeldWeaponBehavior = 0x30; // ScriptedHeldWeaponBehavior_t
                constexpr std::ptrdiff_t m_bLoopPreIdleSequence = 0x34; // bool
                constexpr std::ptrdiff_t m_bLoopActionSequence = 0x35; // bool
                constexpr std::ptrdiff_t m_bLoopPostIdleSequence = 0x36; // bool
                constexpr std::ptrdiff_t m_bIgnoreLookAt = 0x37; // bool
            }
            // Parent: None
            // Field count: 2
            namespace RotatorQueueEntry_t {
                constexpr std::ptrdiff_t qTarget = 0x0; // Quaternion
                constexpr std::ptrdiff_t eSpace = 0x10; // RotatorTargetSpace_t
            }
            // Parent: None
            // Field count: 1
            namespace CPhysicsShake {
                constexpr std::ptrdiff_t m_force = 0x8; // Vector
            }
            // Parent: None
            // Field count: 3
            namespace VelocitySampler {
                constexpr std::ptrdiff_t m_prevSample = 0x0; // Vector
                constexpr std::ptrdiff_t m_fPrevSampleTime = 0xC; // GameTime_t
                constexpr std::ptrdiff_t m_fIdealSampleRate = 0x10; // float32
            }
            // Parent: None
            // Field count: 8
            namespace CTakeDamageResult {
                constexpr std::ptrdiff_t m_pOriginatingInfo = 0x0; // CTakeDamageInfo*
                constexpr std::ptrdiff_t m_nHealthLost = 0x8; // int32
                constexpr std::ptrdiff_t m_nHealthBefore = 0xC; // int32
                constexpr std::ptrdiff_t m_nDamageDealt = 0x10; // int32
                constexpr std::ptrdiff_t m_flPreModifiedDamage = 0x14; // float32
                constexpr std::ptrdiff_t m_nTotalledHealthLost = 0x18; // int32
                constexpr std::ptrdiff_t m_nTotalledDamageDealt = 0x1C; // int32
                constexpr std::ptrdiff_t m_bWasDamageSuppressed = 0x20; // bool
            }
            // Parent: None
            // Field count: 20
            namespace CCS2WeaponGraphController {
                constexpr std::ptrdiff_t m_action = 0x80; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_bActionReset = 0xA0; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flWeaponActionSpeedScale = 0xB8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_weaponCategory = 0xD0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weaponType = 0xF0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weaponExtraInfo = 0x110; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flWeaponAmmo = 0x130; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flWeaponAmmoMax = 0x148; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flWeaponAmmoReserve = 0x160; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bWeaponIsSilenced = 0x178; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flWeaponIronsightAmount = 0x190; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bIsUsingLegacyModel = 0x1A8; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_idleVariation = 0x1C0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_deployVariation = 0x1D8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_attackType = 0x1F0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_attackThrowStrength = 0x210; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flAttackVariation = 0x228; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_inspectVariation = 0x240; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_inspectExtraInfo = 0x258; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_reloadStage = 0x278; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 1
            namespace SceneEventId_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint32
            }
            // Parent: None
            // Field count: 10
            namespace CCommentarySystem {
                constexpr std::ptrdiff_t m_bCommentaryConvarsChanging = 0x11; // bool
                constexpr std::ptrdiff_t m_bCommentaryEnabledMidGame = 0x12; // bool
                constexpr std::ptrdiff_t m_flNextTeleportTime = 0x14; // GameTime_t
                constexpr std::ptrdiff_t m_iTeleportStage = 0x18; // int32
                constexpr std::ptrdiff_t m_bCheatState = 0x1C; // bool
                constexpr std::ptrdiff_t m_bIsFirstSpawnGroupToLoad = 0x1D; // bool
                constexpr std::ptrdiff_t m_hCurrentNode = 0x38; // CHandle<CPointCommentaryNode>
                constexpr std::ptrdiff_t m_hActiveCommentaryNode = 0x3C; // CHandle<CPointCommentaryNode>
                constexpr std::ptrdiff_t m_hLastCommentaryNode = 0x40; // CHandle<CPointCommentaryNode>
                constexpr std::ptrdiff_t m_vecNodes = 0x48; // CUtlVector<CHandle<CPointCommentaryNode>>
            }
            // Parent: None
            // Field count: 8
            namespace ResponseFollowup {
                constexpr std::ptrdiff_t followup_concept = 0x0; // char*
                constexpr std::ptrdiff_t followup_contexts = 0x8; // char*
                constexpr std::ptrdiff_t followup_delay = 0x10; // float32
                constexpr std::ptrdiff_t followup_target = 0x14; // char*
                constexpr std::ptrdiff_t followup_entityiotarget = 0x1C; // char*
                constexpr std::ptrdiff_t followup_entityioinput = 0x24; // char*
                constexpr std::ptrdiff_t followup_entityiodelay = 0x2C; // float32
                constexpr std::ptrdiff_t bFired = 0x30; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AmmoTypeInfo_t {
                constexpr std::ptrdiff_t m_nMaxCarry = 0x10; // int32
                constexpr std::ptrdiff_t m_nSplashSize = 0x1C; // CRangeInt
                constexpr std::ptrdiff_t m_nFlags = 0x24; // AmmoFlags_t
                constexpr std::ptrdiff_t m_flMass = 0x28; // float32
                constexpr std::ptrdiff_t m_flSpeed = 0x2C; // CRangeFloat
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNavLinkAnimgraphVar {
                constexpr std::ptrdiff_t m_sAnimGraphNavlinkType = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_unAlignmentDegrees = 0x8; // uint32
            }
            // Parent: None
            // Field count: 1
            namespace CNetworkTransmitComponent {
                constexpr std::ptrdiff_t m_nTransmitStateOwnedCounter = 0x184; // uint8
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNavLinkMovementVData {
                constexpr std::ptrdiff_t m_sToolsOnlyOwnerModelName = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_bIsInterpolated = 0xE0; // bool
                constexpr std::ptrdiff_t m_unRecommendedDistance = 0xE4; // uint32
                constexpr std::ptrdiff_t m_vecAnimgraphVars = 0xE8; // CUtlVector<CNavLinkAnimgraphVar>
            }
            // Parent: None
            // Field count: 5
            namespace CPathQueryUtil {
                constexpr std::ptrdiff_t m_PathToEntityTransform = 0x10; // CTransform
                constexpr std::ptrdiff_t m_vecPathSamplePositions = 0x30; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_vecPathSampleParameters = 0x48; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecPathSampleDistances = 0x60; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_bIsClosedLoop = 0x78; // bool
            }
            // Parent: None
            // Field count: 5
            namespace RagdollCreationParams_t {
                constexpr std::ptrdiff_t m_vForce = 0x0; // Vector
                constexpr std::ptrdiff_t m_nForceBone = 0xC; // int32
                constexpr std::ptrdiff_t m_bForceCurrentWorldTransform = 0x10; // bool
                constexpr std::ptrdiff_t m_bUseLRURetirement = 0x11; // bool
                constexpr std::ptrdiff_t m_nHealthToGrant = 0x14; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CRangeInt {
                constexpr std::ptrdiff_t m_pValue = 0x0; // int32[2]
            }
            // Parent: None
            // Field count: 2
            namespace CWorldCompositionChunkReferenceElement_t {
                constexpr std::ptrdiff_t m_strMapToLoad = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_strLandmarkName = 0x8; // CUtlString
            }
            // Parent: CStopwatchBase
            // Field count: 2
            namespace CRandStopwatch {
                constexpr std::ptrdiff_t m_flMinInterval = 0xC; // float32
                constexpr std::ptrdiff_t m_flMaxInterval = 0x10; // float32
            }
            // Parent: None
            // Field count: 2
            namespace CMovementStatsProperty {
                constexpr std::ptrdiff_t m_nUseCounter = 0x10; // int32
                constexpr std::ptrdiff_t m_emaMovementDirection = 0x14; // CVectorExponentialMovingAverage
            }
            // Parent: None
            // Field count: 5
            namespace CGameChoreoServices {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_hScriptedSequence = 0xC; // CHandle<CScriptedSequence>
                constexpr std::ptrdiff_t m_scriptState = 0x10; // IChoreoServices::ScriptState_t
                constexpr std::ptrdiff_t m_choreoState = 0x14; // IChoreoServices::ChoreoState_t
                constexpr std::ptrdiff_t m_flTimeStartedState = 0x18; // GameTime_t
            }
            // Parent: None
            // Field count: 0
            namespace CSimpleStopwatch {
            }
            // Parent: None
            // Field count: 28
            namespace CShatterGlassShard {
                constexpr std::ptrdiff_t m_hShardHandle = 0x8; // uint32
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x10; // CUtlVector<Vector2D>
                constexpr std::ptrdiff_t m_vLocalPanelSpaceOrigin = 0x28; // Vector2D
                constexpr std::ptrdiff_t m_hModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_hPhysicsEntity = 0x38; // CHandle<CShatterGlassShardPhysics>
                constexpr std::ptrdiff_t m_hParentPanel = 0x3C; // CHandle<CFuncShatterglass>
                constexpr std::ptrdiff_t m_hParentShard = 0x40; // uint32
                constexpr std::ptrdiff_t m_ShatterStressType = 0x44; // ShatterGlassStressType
                constexpr std::ptrdiff_t m_vecStressVelocity = 0x48; // Vector
                constexpr std::ptrdiff_t m_bCreatedModel = 0x54; // bool
                constexpr std::ptrdiff_t m_flLongestEdge = 0x58; // float32
                constexpr std::ptrdiff_t m_flShortestEdge = 0x5C; // float32
                constexpr std::ptrdiff_t m_flLongestAcross = 0x60; // float32
                constexpr std::ptrdiff_t m_flShortestAcross = 0x64; // float32
                constexpr std::ptrdiff_t m_flSumOfAllEdges = 0x68; // float32
                constexpr std::ptrdiff_t m_flArea = 0x6C; // float32
                constexpr std::ptrdiff_t m_nOnFrameEdge = 0x70; // OnFrame
                constexpr std::ptrdiff_t m_nSubShardGeneration = 0x74; // int32
                constexpr std::ptrdiff_t m_vecAverageVertPosition = 0x78; // Vector2D
                constexpr std::ptrdiff_t m_bAverageVertPositionIsValid = 0x80; // bool
                constexpr std::ptrdiff_t m_vecPanelSpaceStressPositionA = 0x84; // Vector2D
                constexpr std::ptrdiff_t m_vecPanelSpaceStressPositionB = 0x8C; // Vector2D
                constexpr std::ptrdiff_t m_bStressPositionAIsValid = 0x94; // bool
                constexpr std::ptrdiff_t m_bStressPositionBIsValid = 0x95; // bool
                constexpr std::ptrdiff_t m_bFlaggedForRemoval = 0x96; // bool
                constexpr std::ptrdiff_t m_flPhysicsEntitySpawnedAtTime = 0x98; // GameTime_t
                constexpr std::ptrdiff_t m_hEntityHittingMe = 0x9C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecNeighbors = 0xA0; // CUtlVector<uint32>
            }
            // Parent: None
            // Field count: 4
            namespace ragdollelement_t {
                constexpr std::ptrdiff_t originParentSpace = 0x0; // Vector
                constexpr std::ptrdiff_t parentIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_flRadius = 0x24; // float32
                constexpr std::ptrdiff_t m_nHeight = 0x28; // int32
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGameScriptedMoveDef_t {
                constexpr std::ptrdiff_t m_vDestOffset = 0x0; // Vector
                constexpr std::ptrdiff_t m_hDestEntity = 0xC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_angDest = 0x10; // QAngle
                constexpr std::ptrdiff_t m_flDuration = 0x1C; // float32
                constexpr std::ptrdiff_t m_flAngRate = 0x20; // float32
                constexpr std::ptrdiff_t m_flMoveSpeed = 0x24; // float32
                constexpr std::ptrdiff_t m_bAimDisabled = 0x28; // bool
                constexpr std::ptrdiff_t m_bIgnoreRotation = 0x29; // bool
                constexpr std::ptrdiff_t m_nForcedCrouchState = 0x2C; // ForcedCrouchState_t
            }
            // Parent: None
            // Field count: 7
            namespace CNetworkOriginCellCoordQuantizedVector {
                constexpr std::ptrdiff_t m_cellX = 0x10; // uint16
                constexpr std::ptrdiff_t m_cellY = 0x12; // uint16
                constexpr std::ptrdiff_t m_cellZ = 0x14; // uint16
                constexpr std::ptrdiff_t m_nOutsideWorld = 0x16; // uint16
                constexpr std::ptrdiff_t m_vecX = 0x18; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecY = 0x20; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecZ = 0x28; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 8
            namespace DynamicVolumeDef_t {
                constexpr std::ptrdiff_t m_source = 0x0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_target = 0x4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nHullIdx = 0x8; // int32
                constexpr std::ptrdiff_t m_vSourceAnchorPos = 0xC; // Vector
                constexpr std::ptrdiff_t m_vTargetAnchorPos = 0x18; // Vector
                constexpr std::ptrdiff_t m_nAreaSrc = 0x24; // uint32
                constexpr std::ptrdiff_t m_nAreaDst = 0x28; // uint32
                constexpr std::ptrdiff_t m_bAttached = 0x2C; // bool
            }
            // Parent: None
            // Field count: 3
            namespace CNetworkOriginQuantizedVector {
                constexpr std::ptrdiff_t m_vecX = 0x10; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecY = 0x18; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecZ = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 1
            namespace magnetted_objects_t {
                constexpr std::ptrdiff_t hEntity = 0x8; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 3
            namespace CHintMessageQueue {
                constexpr std::ptrdiff_t m_tmMessageEnd = 0x0; // float32
                constexpr std::ptrdiff_t m_messages = 0x8; // CUtlVector<CHintMessage*>
                constexpr std::ptrdiff_t m_pPlayerController = 0x20; // CBasePlayerController*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSkillInt {
                constexpr std::ptrdiff_t m_pValue = 0x0; // int32[4]
            }
            // Parent: None
            // Field count: 4
            namespace thinkfunc_t {
                constexpr std::ptrdiff_t m_hFn = 0x8; // HSCRIPT
                constexpr std::ptrdiff_t m_nContext = 0x10; // CUtlStringToken
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x14; // GameTick_t
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x18; // GameTick_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNavHullPresetVData {
                constexpr std::ptrdiff_t m_vecNavHulls = 0x0; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSkillFloat {
                constexpr std::ptrdiff_t m_pValue = 0x0; // float32[4]
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WaterWheelFrictionScale_t {
                constexpr std::ptrdiff_t m_flFractionOfWheelSubmerged = 0x0; // float32
                constexpr std::ptrdiff_t m_flFrictionScale = 0x4; // float32
            }
            // Parent: None
            // Field count: 2
            namespace ragdollhierarchyjoint_t {
                constexpr std::ptrdiff_t parentIndex = 0x0; // int32
                constexpr std::ptrdiff_t childIndex = 0x4; // int32
            }
            // Parent: None
            // Field count: 13
            namespace CSceneEventInfo {
                constexpr std::ptrdiff_t m_iLayer = 0x0; // int32
                constexpr std::ptrdiff_t m_iPriority = 0x4; // int32
                constexpr std::ptrdiff_t m_hSequence = 0x8; // HSequence
                constexpr std::ptrdiff_t m_flWeight = 0xC; // float32
                constexpr std::ptrdiff_t m_bHasArrived = 0x10; // bool
                constexpr std::ptrdiff_t m_nType = 0x14; // int32
                constexpr std::ptrdiff_t m_flNext = 0x18; // GameTime_t
                constexpr std::ptrdiff_t m_bIsGesture = 0x1C; // bool
                constexpr std::ptrdiff_t m_bShouldRemove = 0x1D; // bool
                constexpr std::ptrdiff_t m_hTarget = 0x44; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nSceneEventId = 0x48; // SceneEventId_t
                constexpr std::ptrdiff_t m_bClientSide = 0x4C; // bool
                constexpr std::ptrdiff_t m_bStarted = 0x4D; // bool
            }
            // Parent: None
            // Field count: 5
            namespace SoundeventPathCornerPairNetworked_t {
                constexpr std::ptrdiff_t vP1 = 0x0; // Vector
                constexpr std::ptrdiff_t vP2 = 0xC; // Vector
                constexpr std::ptrdiff_t flPathLengthSqr = 0x18; // float32
                constexpr std::ptrdiff_t flP1Pct = 0x1C; // float32
                constexpr std::ptrdiff_t flP2Pct = 0x20; // float32
            }
            // Parent: None
            // Field count: 13
            namespace CSoundPatch {
                constexpr std::ptrdiff_t m_pitch = 0x8; // CSoundEnvelope
                constexpr std::ptrdiff_t m_volume = 0x18; // CSoundEnvelope
                constexpr std::ptrdiff_t m_shutdownTime = 0x3C; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0x40; // float32
                constexpr std::ptrdiff_t m_iszSoundScriptName = 0x48; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hEnt = 0x50; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_soundEntityIndex = 0x54; // CEntityIndex
                constexpr std::ptrdiff_t m_soundOrigin = 0x58; // Vector
                constexpr std::ptrdiff_t m_isPlaying = 0x64; // int32
                constexpr std::ptrdiff_t m_Filter = 0x68; // CCopyRecipientFilter
                constexpr std::ptrdiff_t m_flCloseCaptionDuration = 0xA0; // float32
                constexpr std::ptrdiff_t m_bUpdatedSoundOrigin = 0xA4; // bool
                constexpr std::ptrdiff_t m_iszClassName = 0xA8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 10
            namespace CCS2ChickenGraphController {
                constexpr std::ptrdiff_t m_action = 0x80; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_actionSubtype = 0xA0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_bActionReset = 0xC0; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_idleVariation = 0xD8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_runVariation = 0xF0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_panicVariation = 0x108; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_squatVariation = 0x120; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bInWater = 0x138; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHasActionCompletedEvent = 0x150; // bool
                constexpr std::ptrdiff_t m_bWaitingForCompletedEvent = 0x151; // bool
            }
            // Parent: None
            // Field count: 3
            namespace locksound_t {
                constexpr std::ptrdiff_t sLockedSound = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t sUnlockedSound = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t flwaitSound = 0x18; // GameTime_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace DecalGroupOption_t {
                constexpr std::ptrdiff_t m_hMaterial = 0x0; // CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_sSequenceName = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_flProbability = 0x10; // float32
                constexpr std::ptrdiff_t m_bEnableAngleBetweenNormalAndGravityRange = 0x14; // bool
                constexpr std::ptrdiff_t m_flMinAngleBetweenNormalAndGravity = 0x18; // float32
                constexpr std::ptrdiff_t m_flMaxAngleBetweenNormalAndGravity = 0x1C; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CBtNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CFiringModeFloat {
                constexpr std::ptrdiff_t m_flValues = 0x0; // float32[2]
            }
            // Parent: None
            // Field count: 3
            namespace CCopyRecipientFilter {
                constexpr std::ptrdiff_t m_Flags = 0x8; // int32
                constexpr std::ptrdiff_t m_Recipients = 0x10; // CUtlVector<CPlayerSlot>
                constexpr std::ptrdiff_t m_slotPlayerExcludedDueToPrediction = 0x30; // CPlayerSlot
            }
            // Parent: None
            // Field count: 0
            namespace CFloatMovingAverage {
            }
            // Parent: None
            // Field count: 5
            namespace CSmoothFunc {
                constexpr std::ptrdiff_t m_flSmoothAmplitude = 0x8; // float32
                constexpr std::ptrdiff_t m_flSmoothBias = 0xC; // float32
                constexpr std::ptrdiff_t m_flSmoothDuration = 0x10; // float32
                constexpr std::ptrdiff_t m_flSmoothRemainingTime = 0x14; // float32
                constexpr std::ptrdiff_t m_nSmoothDir = 0x18; // int32
            }
            // Parent: None
            // Field count: 0
            namespace IHasAttributes {
            }
            // Parent: None
            // Field count: 5
            namespace ragdoll_t {
                constexpr std::ptrdiff_t list = 0x0; // CUtlVector<ragdollelement_t>
                constexpr std::ptrdiff_t hierarchyJoints = 0x18; // CUtlVector<ragdollhierarchyjoint_t>
                constexpr std::ptrdiff_t boneIndex = 0x30; // CUtlVector<int32>
                constexpr std::ptrdiff_t allowStretch = 0x48; // bool
                constexpr std::ptrdiff_t unused = 0x49; // bool
            }
            // Parent: None
            // Field count: 10
            namespace HullFlags_t {
                constexpr std::ptrdiff_t m_bHull_Human = 0x0; // bool
                constexpr std::ptrdiff_t m_bHull_SmallCentered = 0x1; // bool
                constexpr std::ptrdiff_t m_bHull_WideHuman = 0x2; // bool
                constexpr std::ptrdiff_t m_bHull_Tiny = 0x3; // bool
                constexpr std::ptrdiff_t m_bHull_Medium = 0x4; // bool
                constexpr std::ptrdiff_t m_bHull_TinyCentered = 0x5; // bool
                constexpr std::ptrdiff_t m_bHull_Large = 0x6; // bool
                constexpr std::ptrdiff_t m_bHull_LargeCentered = 0x7; // bool
                constexpr std::ptrdiff_t m_bHull_MediumTall = 0x8; // bool
                constexpr std::ptrdiff_t m_bHull_Small = 0x9; // bool
            }
            // Parent: None
            // Field count: 0
            namespace ISkeletonAnimationController {
            }
            // Parent: None
            // Field count: 2
            namespace RotatorHistoryEntry_t {
                constexpr std::ptrdiff_t qInvChange = 0x0; // Quaternion
                constexpr std::ptrdiff_t flTimeRotationStart = 0x10; // GameTime_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace GameAmmoTypeInfo_t {
                constexpr std::ptrdiff_t m_nBuySize = 0x38; // int32
                constexpr std::ptrdiff_t m_nCost = 0x3C; // int32
            }
            // Parent: None
            // Field count: 4
            namespace CMotorController {
                constexpr std::ptrdiff_t m_speed = 0x8; // float32
                constexpr std::ptrdiff_t m_maxTorque = 0xC; // float32
                constexpr std::ptrdiff_t m_axis = 0x10; // VectorWS
                constexpr std::ptrdiff_t m_inertiaFactor = 0x1C; // float32
            }
            // Parent: CSimpleSimTimer
            // Field count: 1
            namespace CSimTimer {
                constexpr std::ptrdiff_t m_flInterval = 0x8; // float32
            }
            // Parent: None
            // Field count: 6
            namespace CBaseIssue {
                constexpr std::ptrdiff_t m_szTypeString = 0x20; // char[64]
                constexpr std::ptrdiff_t m_szDetailsString = 0x60; // char[260]
                constexpr std::ptrdiff_t m_iNumYesVotes = 0x164; // int32
                constexpr std::ptrdiff_t m_iNumNoVotes = 0x168; // int32
                constexpr std::ptrdiff_t m_iNumPotentialVotes = 0x16C; // int32
                constexpr std::ptrdiff_t m_pVoteController = 0x170; // CVoteController*
            }
            // Parent: None
            // Field count: 4
            namespace SummaryTakeDamageInfo_t {
                constexpr std::ptrdiff_t nSummarisedCount = 0x0; // int32
                constexpr std::ptrdiff_t info = 0x8; // CTakeDamageInfo
                constexpr std::ptrdiff_t result = 0x130; // CTakeDamageResult
                constexpr std::ptrdiff_t hTarget = 0x158; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 2
            namespace DestructibleHitGroupToDestroy_t {
                constexpr std::ptrdiff_t m_nHitGroup = 0x0; // HitGroup_t
                constexpr std::ptrdiff_t m_nMaxDamageLevel = 0x4; // int32
            }
            // Parent: None
            // Field count: 10
            namespace CRR_Response {
                constexpr std::ptrdiff_t m_Type = 0x0; // uint8
                constexpr std::ptrdiff_t m_szResponseName = 0x1; // char[192]
                constexpr std::ptrdiff_t m_szMatchingRule = 0xC1; // char[128]
                constexpr std::ptrdiff_t m_Params = 0x160; // ResponseParams
                constexpr std::ptrdiff_t m_fMatchScore = 0x180; // float32
                constexpr std::ptrdiff_t m_bAnyMatchingRulesInCooldown = 0x184; // bool
                constexpr std::ptrdiff_t m_szSpeakerContext = 0x188; // char*
                constexpr std::ptrdiff_t m_szWorldContext = 0x190; // char*
                constexpr std::ptrdiff_t m_Followup = 0x198; // ResponseFollowup
                constexpr std::ptrdiff_t m_recipientFilter = 0x1CA; // CUtlSymbol
            }
            // Parent: None
            // Field count: 0
            namespace CVectorExponentialMovingAverage {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmAimCSNode__CDefinition {
                constexpr std::ptrdiff_t m_nVerticalAngleNodeIdx = 0x18; // int16
                constexpr std::ptrdiff_t m_nHorizontalAngleNodeIdx = 0x1A; // int16
                constexpr std::ptrdiff_t m_nWeaponCategoryNodeIdx = 0x1C; // int16
                constexpr std::ptrdiff_t m_nEnabledNodeIdx = 0x1E; // int16
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x20; // float32
            }
            // Parent: None
            // Field count: 4
            namespace CConstantForceController {
                constexpr std::ptrdiff_t m_linear = 0xC; // Vector
                constexpr std::ptrdiff_t m_angular = 0x18; // RotationVector
                constexpr std::ptrdiff_t m_linearSave = 0x24; // Vector
                constexpr std::ptrdiff_t m_angularSave = 0x30; // RotationVector
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WaterWheelDrag_t {
                constexpr std::ptrdiff_t m_flFractionOfWheelSubmerged = 0x0; // float32
                constexpr std::ptrdiff_t m_flWheelDrag = 0x4; // float32
            }
            // Parent: None
            // Field count: 22
            namespace CTakeDamageInfo {
                constexpr std::ptrdiff_t m_vecDamageForce = 0x8; // Vector
                constexpr std::ptrdiff_t m_vecDamagePosition = 0x14; // VectorWS
                constexpr std::ptrdiff_t m_vecReportedPosition = 0x20; // VectorWS
                constexpr std::ptrdiff_t m_vecDamageDirection = 0x2C; // Vector
                constexpr std::ptrdiff_t m_hInflictor = 0x38; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hAttacker = 0x3C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hAbility = 0x40; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_flDamage = 0x44; // float32
                constexpr std::ptrdiff_t m_flTotalledDamage = 0x48; // float32
                constexpr std::ptrdiff_t m_bitsDamageType = 0x4C; // DamageTypes_t
                constexpr std::ptrdiff_t m_iDamageCustom = 0x50; // int32
                constexpr std::ptrdiff_t m_iAmmoType = 0x54; // AmmoIndex_t
                constexpr std::ptrdiff_t m_flOriginalDamage = 0x60; // float32
                constexpr std::ptrdiff_t m_bShouldBleed = 0x64; // bool
                constexpr std::ptrdiff_t m_bShouldSpark = 0x65; // bool
                constexpr std::ptrdiff_t m_nDamageFlags = 0x70; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_sDamageSourceName = 0x78; // CGlobalSymbol
                constexpr std::ptrdiff_t m_iHitGroupId = 0x80; // HitGroup_t
                constexpr std::ptrdiff_t m_nNumObjectsPenetrated = 0x84; // int32
                constexpr std::ptrdiff_t m_flFriendlyFireDamageReductionRatio = 0x88; // float32
                constexpr std::ptrdiff_t m_nDestructibleHitGroupsToForceDestroy = 0x108; // CUtlVector<DestructibleHitGroupToDestroy_t>
                constexpr std::ptrdiff_t m_bInTakeDamageFlow = 0x120; // bool
            }
            // Parent: CSimpleSimTimer
            // Field count: 2
            namespace CRandSimTimer {
                constexpr std::ptrdiff_t m_flMinInterval = 0x8; // float32
                constexpr std::ptrdiff_t m_flMaxInterval = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CBtNodeComposite {
            }
            // Parent: None
            // Field count: 4
            namespace CRelativeLocation {
                constexpr std::ptrdiff_t m_Type = 0x18; // RelativeLocationType_t
                constexpr std::ptrdiff_t m_vRelativeOffset = 0x1C; // Vector
                constexpr std::ptrdiff_t m_vWorldSpacePos = 0x28; // VectorWS
                constexpr std::ptrdiff_t m_hEntity = 0x34; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 2
            namespace Extent {
                constexpr std::ptrdiff_t lo = 0x0; // VectorWS
                constexpr std::ptrdiff_t hi = 0xC; // VectorWS
            }
            // Parent: None
            // Field count: 5
            namespace sndopvarlatchdata_t {
                constexpr std::ptrdiff_t m_iszStack = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperator = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvar = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flVal = 0x20; // float32
                constexpr std::ptrdiff_t m_vPos = 0x24; // Vector
            }
            // Parent: None
            // Field count: 0
            namespace IEconItemInterface {
            }
            // Parent: None
            // Field count: 1
            namespace CMultiplayer_Expresser {
                constexpr std::ptrdiff_t m_bAllowMultipleScenes = 0xA0; // bool
            }
            // Parent: None
            // Field count: 15
            namespace CBaseAnimGraphAnimGraphController {
                constexpr std::ptrdiff_t m_sDestructiblePartDestroyedHitGroup = 0x80; // CAnimGraphParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_nDestructiblePartDestroyedPartIndex = 0xA8; // CAnimGraphParamOptionalRef<int32>
                constexpr std::ptrdiff_t m_bHITGROUP_INVALID_Destroyed = 0xC8; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_GENERIC_Destroyed = 0xE8; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_HEAD_Destroyed = 0x108; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_CHEST_Destroyed = 0x128; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_STOMACH_Destroyed = 0x148; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_LEFTARM_Destroyed = 0x168; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_RIGHTARM_Destroyed = 0x188; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_LEFTLEG_Destroyed = 0x1A8; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_RIGHTLEG_Destroyed = 0x1C8; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_NECK_Destroyed = 0x1E8; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_UNUSED_Destroyed = 0x208; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_GEAR_Destroyed = 0x228; // CAnimGraphParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_bHITGROUP_SPECIAL_Destroyed = 0x248; // CAnimGraphParamOptionalRef<bool>
            }
            // Parent: None
            // Field count: 0
            namespace CNavVolume {
            }
            // Parent: None
            // Field count: 0
            namespace QuestProgress {
            }
            // Parent: None
            // Field count: 0
            namespace CNmAimCSTask {
            }
            // Parent: None
            // Field count: 1
            namespace ParticleIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            namespace CAI_ExpresserWithFollowup {
            }
            // Parent: None
            // Field count: 1
            namespace CTakeDamageSummaryScopeGuard {
                constexpr std::ptrdiff_t m_vecSummaries = 0x8; // CUtlVector<SummaryTakeDamageInfo_t*>
            }
            // Parent: None
            // Field count: 4
            namespace CIronSightController {
                constexpr std::ptrdiff_t m_bIronSightAvailable = 0x8; // bool
                constexpr std::ptrdiff_t m_flIronSightAmount = 0xC; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountGained = 0x10; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountBiased = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEventConsumerSound {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEventConsumerLegacy {
            }
            // Parent: None
            // Field count: 1
            namespace CInButtonState {
                constexpr std::ptrdiff_t m_pButtonStates = 0x8; // uint64[3]
            }
            // Parent: None
            // Field count: 3
            namespace ServerAuthoritativeWeaponSlot_t {
                constexpr std::ptrdiff_t unClass = 0x30; // uint16
                constexpr std::ptrdiff_t unSlot = 0x32; // uint16
                constexpr std::ptrdiff_t unItemDefIdx = 0x34; // uint16
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEventConsumerParticle {
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNavHullVData {
                constexpr std::ptrdiff_t m_bAgentEnabled = 0x0; // bool
                constexpr std::ptrdiff_t m_agentRadius = 0x4; // float32
                constexpr std::ptrdiff_t m_agentHeight = 0x8; // float32
                constexpr std::ptrdiff_t m_agentShortHeightEnabled = 0xC; // bool
                constexpr std::ptrdiff_t m_agentShortHeight = 0x10; // float32
                constexpr std::ptrdiff_t m_agentCrawlEnabled = 0x14; // bool
                constexpr std::ptrdiff_t m_agentCrawlHeight = 0x18; // float32
                constexpr std::ptrdiff_t m_agentMaxClimb = 0x1C; // float32
                constexpr std::ptrdiff_t m_agentMaxSlope = 0x20; // int32
                constexpr std::ptrdiff_t m_agentMaxJumpDownDist = 0x24; // float32
                constexpr std::ptrdiff_t m_agentMaxJumpHorizDistBase = 0x28; // float32
                constexpr std::ptrdiff_t m_agentMaxJumpUpDist = 0x2C; // float32
                constexpr std::ptrdiff_t m_agentBorderErosion = 0x30; // int32
                constexpr std::ptrdiff_t m_flowMapGenerationEnabled = 0x34; // bool
                constexpr std::ptrdiff_t m_flowMapNodeMaxRadius = 0x38; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSnapWeaponNode__CDefinition {
                constexpr std::ptrdiff_t m_nEnabledNodeIdx = 0x18; // int16
                constexpr std::ptrdiff_t m_nLockLeftHandNodeIdx = 0x1A; // int16
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x1C; // float32
            }
            // Parent: None
            // Field count: 3
            namespace SoundOpvarTraceResult_t {
                constexpr std::ptrdiff_t vPos = 0x0; // Vector
                constexpr std::ptrdiff_t bDidHit = 0xC; // bool
                constexpr std::ptrdiff_t flDistSqrToCenter = 0x10; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CAnimEventListener {
            }
            // Parent: None
            // Field count: 0
            namespace CNavVolumeCalculatedVector {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CFiringModeInt {
                constexpr std::ptrdiff_t m_nValues = 0x0; // int32[2]
            }
            // Parent: None
            // Field count: 0
            namespace CBtNodeDecorator {
            }
            // Parent: None
            // Field count: 6
            namespace CSAdditionalPerRoundStats_t {
                constexpr std::ptrdiff_t m_numChickensKilled = 0x0; // int32
                constexpr std::ptrdiff_t m_killsWhileBlind = 0x4; // int32
                constexpr std::ptrdiff_t m_bombCarrierkills = 0x8; // int32
                constexpr std::ptrdiff_t m_flBurnDamageInflicted = 0xC; // float32
                constexpr std::ptrdiff_t m_flBlastDamageInflicted = 0x10; // float32
                constexpr std::ptrdiff_t m_iDinks = 0x14; // int32
            }
            // Parent: None
            // Field count: 1
            namespace ModelConfigHandle_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MVDataOverlayType
            namespace CEntitySubclassVDataBase {
            }
            // Parent: None
            // Field count: 2
            namespace CBreakableStageHelper {
                constexpr std::ptrdiff_t m_nCurrentStage = 0x8; // int32
                constexpr std::ptrdiff_t m_nStageCount = 0xC; // int32
            }
            // Parent: None
            // Field count: 2
            namespace CNavVolumeBreadthFirstSearch {
                constexpr std::ptrdiff_t m_vStartPos = 0xA8; // Vector
                constexpr std::ptrdiff_t m_flSearchDist = 0xB4; // float32
            }
            // Parent: dynpitchvol_base_t
            // Field count: 0
            namespace dynpitchvol_t {
            }
            // Parent: None
            // Field count: 12
            namespace CSAdditionalMatchStats_t {
                constexpr std::ptrdiff_t m_numRoundsSurvived = 0x18; // int32
                constexpr std::ptrdiff_t m_maxNumRoundsSurvived = 0x1C; // int32
                constexpr std::ptrdiff_t m_numRoundsSurvivedTotal = 0x20; // int32
                constexpr std::ptrdiff_t m_iRoundsWonWithoutPurchase = 0x24; // int32
                constexpr std::ptrdiff_t m_iRoundsWonWithoutPurchaseTotal = 0x28; // int32
                constexpr std::ptrdiff_t m_numFirstKills = 0x2C; // int32
                constexpr std::ptrdiff_t m_numClutchKills = 0x30; // int32
                constexpr std::ptrdiff_t m_numPistolKills = 0x34; // int32
                constexpr std::ptrdiff_t m_numSniperKills = 0x38; // int32
                constexpr std::ptrdiff_t m_iNumSuicides = 0x3C; // int32
                constexpr std::ptrdiff_t m_iNumTeamKills = 0x40; // int32
                constexpr std::ptrdiff_t m_flTeamDamage = 0x44; // float32
            }
            // Parent: None
            // Field count: 0
            namespace IRagdoll {
            }
            // Parent: None
            // Field count: 6
            namespace hudtextparms_t {
                constexpr std::ptrdiff_t color1 = 0x0; // Color
                constexpr std::ptrdiff_t color2 = 0x4; // Color
                constexpr std::ptrdiff_t effect = 0x8; // uint8
                constexpr std::ptrdiff_t channel = 0x9; // uint8
                constexpr std::ptrdiff_t x = 0xC; // float32
                constexpr std::ptrdiff_t y = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            namespace CAnimGraphControllerBase {
                constexpr std::ptrdiff_t m_vecParamsToResetInPostGraphUpdate = 0x28; // CUtlVectorFixedGrowable<CGlobalSymbol,8>
            }
            // Parent: None
            // Field count: 3
            namespace CNetworkVelocityVector {
                constexpr std::ptrdiff_t m_vecX = 0x10; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecY = 0x18; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_vecZ = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDestructiblePart_DamageLevel {
                constexpr std::ptrdiff_t m_sName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_sBreakablePieceName = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nBodyGroupValue = 0x10; // int32
                constexpr std::ptrdiff_t m_nHealth = 0x14; // CSkillInt
                constexpr std::ptrdiff_t m_flCriticalDamagePercent = 0x24; // float32
                constexpr std::ptrdiff_t m_nDamagePassthroughType = 0x28; // EDestructiblePartDamagePassThroughType
                constexpr std::ptrdiff_t m_nDestructionDeathBehavior = 0x2C; // DestructiblePartDestructionDeathBehavior_t
                constexpr std::ptrdiff_t m_sCustomDeathHandshake = 0x30; // CGlobalSymbol
                constexpr std::ptrdiff_t m_bShouldDestroyOnDeath = 0x38; // bool
                constexpr std::ptrdiff_t m_flDeathDestroyTime = 0x3C; // CRangeFloat
            }
            // Parent: None
            // Field count: 0
            namespace CNavVolumeAll {
            }
            // Parent: None
            // Field count: 2
            namespace CNavVolumeSphere {
                constexpr std::ptrdiff_t m_vCenter = 0x78; // Vector
                constexpr std::ptrdiff_t m_flRadius = 0x84; // float32
            }
            // Parent: None
            // Field count: 2
            namespace Relationship_t {
                constexpr std::ptrdiff_t disposition = 0x0; // Disposition_t
                constexpr std::ptrdiff_t priority = 0x4; // int32
            }
            // Parent: None
            // Field count: 0
            namespace position {
            }
            // Parent: None
            // Field count: 0
            namespace ______ {
            }
            // Parent: ______
            // Field count: 569
            namespace _ {
                constexpr std::ptrdiff_t  = 0x48FFFFFF; // 
                constexpr std::ptrdiff_t  = 0xD8D48B8; // 
                constexpr std::ptrdiff_t  = 0x480B75C0; // 
                constexpr std::ptrdiff_t  = 0x5A0FF3CE; // 
                constexpr std::ptrdiff_t  = 0x2F3840F7; // 
                constexpr std::ptrdiff_t  = 0x8B56EBDE; // 
                constexpr std::ptrdiff_t  = 0xD8D48FF; // 
                constexpr std::ptrdiff_t  = 0x4AF1CC; // 
                constexpr std::ptrdiff_t  = 0x31F97315; // 
                constexpr std::ptrdiff_t  = 0x7A830675; // 
                constexpr std::ptrdiff_t  = 0x8B483F74; // 
                constexpr std::ptrdiff_t  = 0x48088B48; // 
                constexpr std::ptrdiff_t  = 0xFD8B4806; // 
                constexpr std::ptrdiff_t  = 0xE0BA0F12; // 
                constexpr std::ptrdiff_t  = 0xC824948D; // 
                constexpr std::ptrdiff_t  = 0x48004AF1; // 
                constexpr std::ptrdiff_t  = 0xF17E0F49; // 
                constexpr std::ptrdiff_t  = 0xBE8D4924; // 
                constexpr std::ptrdiff_t  = 0x280F4400; // 
                constexpr std::ptrdiff_t  = 0x8B4C0000; // 
                constexpr std::ptrdiff_t  = 0x850FF01; // 
                constexpr std::ptrdiff_t  = 0x6630244C; // 
                constexpr std::ptrdiff_t  = 0xC16F0F66; // 
                constexpr std::ptrdiff_t  = 0xC1FF4808; // 
                constexpr std::ptrdiff_t  = 0x197C0098; // 
                constexpr std::ptrdiff_t  = 0x6690104F; // 
                constexpr std::ptrdiff_t  = 0xF663024; // 
                constexpr std::ptrdiff_t  = 0x48F0CA7E; // 
                constexpr std::ptrdiff_t  = 0x8B480000; // 
                constexpr std::ptrdiff_t  = 0x85480000; // 
                constexpr std::ptrdiff_t  = 0x55C48B48; // 
                constexpr std::ptrdiff_t  = 0x593A158D; // 
                constexpr std::ptrdiff_t  = 0x682444C7; // 
                constexpr std::ptrdiff_t  = 0x100FF270; // 
                constexpr std::ptrdiff_t  = 0x8B490045; // 
                constexpr std::ptrdiff_t  = 0x908D8D49; // 
                constexpr std::ptrdiff_t  = 0xFD08B48; // 
                constexpr std::ptrdiff_t  = 0x840031F7; // 
                constexpr std::ptrdiff_t  = 0x45CC0174; // 
                constexpr std::ptrdiff_t  = 0x8148D43; // 
                constexpr std::ptrdiff_t  = 0x8B44C044; // 
                constexpr std::ptrdiff_t  = 0x634BE8; // 
                constexpr std::ptrdiff_t  = 0x2C4BCBE8; // 
                constexpr std::ptrdiff_t  = 0x4008E0F; // 
                constexpr std::ptrdiff_t  = 0x48004AEE; // 
                constexpr std::ptrdiff_t  = 0x4C000000; // 
                constexpr std::ptrdiff_t  = 0x8944FFFF; // 
                constexpr std::ptrdiff_t  = 0x68B58B4D; // 
                constexpr std::ptrdiff_t  = 0x448D4808; // 
                constexpr std::ptrdiff_t  = 0x458B0000; // 
                constexpr std::ptrdiff_t  = 0x45110FF2; // 
                constexpr std::ptrdiff_t  = 0xF41F248; // 
                constexpr std::ptrdiff_t  = 0x48C6FF14; // 
                constexpr std::ptrdiff_t  = 0xC68B4C00; // 
                constexpr std::ptrdiff_t  = 0xF13215FF; // 
                constexpr std::ptrdiff_t  = 0x2B860F7F; // 
                constexpr std::ptrdiff_t  = 0xF284; // 
                constexpr std::ptrdiff_t  = 0xD1840F; // 
                constexpr std::ptrdiff_t  = 0xFF81410D; // 
                constexpr std::ptrdiff_t  = 0xCB8B0000; // 
                constexpr std::ptrdiff_t  = 0x8BC68B44; // 
                constexpr std::ptrdiff_t  = 0x33048D0E; // 
                constexpr std::ptrdiff_t  = 0x4DC2940F; // 
                constexpr std::ptrdiff_t  = 0xFF3345FC; // 
                constexpr std::ptrdiff_t  = 0xF03B441F; // 
                constexpr std::ptrdiff_t  = 0xC48B4D42; // 
                constexpr std::ptrdiff_t  = 0x460; // 
                constexpr std::ptrdiff_t  = 0x4806B70F; // 
                constexpr std::ptrdiff_t  = 0x8B444824; // 
                constexpr std::ptrdiff_t  = 0x4AEAE305; // 
                constexpr std::ptrdiff_t  = 0x4AEA4C; // 
                constexpr std::ptrdiff_t  = 0x4AEA2B0D; // 
                constexpr std::ptrdiff_t  = 0x480031EF; // 
                constexpr std::ptrdiff_t  = 0x85483775; // 
                constexpr std::ptrdiff_t  = 0x8548FF33; // 
                constexpr std::ptrdiff_t  = 0x74DAE840; // 
                constexpr std::ptrdiff_t  = 0x480B75C0; // 
                constexpr std::ptrdiff_t  = 0xF0450F4C; // 
                constexpr std::ptrdiff_t  = 0xFFBF0000; // 
                constexpr std::ptrdiff_t  = 0x36870FC7; // 
                constexpr std::ptrdiff_t  = 0x1E0; // 
                constexpr std::ptrdiff_t  = 0xBA0F1272; // 
                constexpr std::ptrdiff_t  = 0x50558D48; // 
                constexpr std::ptrdiff_t  = 0x2DB3EC; // 
                constexpr std::ptrdiff_t  = 0x830A750C; // 
                constexpr std::ptrdiff_t  = 0x10890FF; // 
                constexpr std::ptrdiff_t  = 0xFFC88B48; // 
                constexpr std::ptrdiff_t  = 0x446630B7; // 
                constexpr std::ptrdiff_t  = 0x32EAE805; // 
                constexpr std::ptrdiff_t  = 0x15FF004A; // 
                constexpr std::ptrdiff_t  = 0x49003935; // 
                constexpr std::ptrdiff_t  = 0x4FEB0039; // 
                constexpr std::ptrdiff_t  = 0x8D48FFFE; // 
                constexpr std::ptrdiff_t  = 0x31EFCC; // 
                constexpr std::ptrdiff_t  = 0x894CDE28; // 
                constexpr std::ptrdiff_t  = 0xFF334580; // 
                constexpr std::ptrdiff_t  = 0xC2FF3024; // 
                constexpr std::ptrdiff_t  = 0x280F7824; // 
                constexpr std::ptrdiff_t  = 0x110; // 
                constexpr std::ptrdiff_t  = 0x4C000004; // 
                constexpr std::ptrdiff_t  = 0x8148D7FF; // 
                constexpr std::ptrdiff_t  = 0x20247C89; // 
                constexpr std::ptrdiff_t  = 0x8B48F68B; // 
                constexpr std::ptrdiff_t  = 0xC7FF0000; // 
                constexpr std::ptrdiff_t  = 0x50FF018B; // 
                constexpr std::ptrdiff_t  = 0x3046110F; // 
                constexpr std::ptrdiff_t  = 0x4101B141; // 
                constexpr std::ptrdiff_t  = 0x9115FFD5; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x31EA64; // 
                constexpr std::ptrdiff_t  = 0x15FFC58B; // 
                constexpr std::ptrdiff_t  = 0x992F048D; // 
                constexpr std::ptrdiff_t  = 0x5DC83F7; // 
                constexpr std::ptrdiff_t  = 0xDC838B00; // 
                constexpr std::ptrdiff_t  = 0x5C883; // 
                constexpr std::ptrdiff_t  = 0x58247C8B; // 
                constexpr std::ptrdiff_t  = 0x8B4CF28B; // 
                constexpr std::ptrdiff_t  = 0x80C0FF48; // 
                constexpr std::ptrdiff_t  = 0xA4894C28; // 
                constexpr std::ptrdiff_t  = 0xB20031EA; // 
                constexpr std::ptrdiff_t  = 0x5CB20031; // 
                constexpr std::ptrdiff_t  = 0x8B4C284D; // 
                constexpr std::ptrdiff_t  = 0x15FFE84D; // 
                constexpr std::ptrdiff_t  = 0x48C0458D; // 
                constexpr std::ptrdiff_t  = 0x48B8458B; // 
                constexpr std::ptrdiff_t  = 0x24A48B4C; // 
                constexpr std::ptrdiff_t  = 0x7F; // 
                constexpr std::ptrdiff_t  = 0x5AC; // 
                constexpr std::ptrdiff_t  = 0x48C80348; // 
                constexpr std::ptrdiff_t  = 0x4CC78B44; // 
                constexpr std::ptrdiff_t  = 0x481850FF; // 
                constexpr std::ptrdiff_t  = 0xA024BC; // 
                constexpr std::ptrdiff_t  = 0x450EC81; // 
                constexpr std::ptrdiff_t  = 0xC7C03345; // 
                constexpr std::ptrdiff_t  = 0xFF202444; // 
                constexpr std::ptrdiff_t  = 0x54894844; // 
                constexpr std::ptrdiff_t  = 0x767FFFFF; // 
                constexpr std::ptrdiff_t  = 0x74894450; // 
                constexpr std::ptrdiff_t  = 0xEEB3824; // 
                constexpr std::ptrdiff_t  = 0x31E8DC; // 
                constexpr std::ptrdiff_t  = 0x710D8B48; // 
                constexpr std::ptrdiff_t  = 0x50FF1314; // 
                constexpr std::ptrdiff_t  = 0x47024; // 
                constexpr std::ptrdiff_t  = 0xD1058B48; // 
                constexpr std::ptrdiff_t  = 0x4C8D4844; // 
                constexpr std::ptrdiff_t  = 0x245C8948; // 
                constexpr std::ptrdiff_t  = 0x48000080; // 
                constexpr std::ptrdiff_t  = 0x80702484; // 
                constexpr std::ptrdiff_t  = 0x48FFFD84; // 
                constexpr std::ptrdiff_t  = 0x48000005; // 
                constexpr std::ptrdiff_t  = 0x8B480000; // 
                constexpr std::ptrdiff_t  = 0xE66A15FF; // 
                constexpr std::ptrdiff_t  = 0x15FFCF8B; // 
                constexpr std::ptrdiff_t  = 0x53C48B48; // 
                constexpr std::ptrdiff_t  = 0xC7480000; // 
                constexpr std::ptrdiff_t  = 0x10688948; // 
                constexpr std::ptrdiff_t  = 0xE6A215FF; // 
                constexpr std::ptrdiff_t  = 0xE8868B48; // 
                constexpr std::ptrdiff_t  = 0xFFFFA912; // 
                constexpr std::ptrdiff_t  = 0x1850FF01; // 
                constexpr std::ptrdiff_t  = 0xA912EB28; // 
                constexpr std::ptrdiff_t  = 0x244C8B00; // 
                constexpr std::ptrdiff_t  = 0x2CFA3D8D; // 
                constexpr std::ptrdiff_t  = 0x48038B48; // 
                constexpr std::ptrdiff_t  = 0xD08B4810; // 
                constexpr std::ptrdiff_t  = 0x90FFCE8B; // 
                constexpr std::ptrdiff_t  = 0x8D483FFF; // 
                constexpr std::ptrdiff_t  = 0x2024548D; // 
                constexpr std::ptrdiff_t  = 0x5C8; // 
                constexpr std::ptrdiff_t  = 0x8B480000; // 
                constexpr std::ptrdiff_t  = 0x20BA03; // 
                constexpr std::ptrdiff_t  = 0xB70F2374; // 
                constexpr std::ptrdiff_t  = 0x89480039; // 
                constexpr std::ptrdiff_t  = 0xD233D7FF; // 
                constexpr std::ptrdiff_t  = 0xB8818B48; // 
                constexpr std::ptrdiff_t  = 0x30818B48; // 
                constexpr std::ptrdiff_t  = 0x245C8948; // 
                constexpr std::ptrdiff_t  = 0x290B18D; // 
                constexpr std::ptrdiff_t  = 0x48E84589; // 
                constexpr std::ptrdiff_t  = 0xFF000002; // 
                constexpr std::ptrdiff_t  = 0x8B48C803; // 
                constexpr std::ptrdiff_t  = 0xC08548C0; // 
                constexpr std::ptrdiff_t  = 0x392A7B15; // 
                constexpr std::ptrdiff_t  = 0xE21215FF; // 
                constexpr std::ptrdiff_t  = 0xC9E8084E; // 
                constexpr std::ptrdiff_t  = 0x74C08400; // 
                constexpr std::ptrdiff_t  = 0x49E8C845; // 
                constexpr std::ptrdiff_t  = 0xFF204D8D; // 
                constexpr std::ptrdiff_t  = 0x48DC8B4C; // 
                constexpr std::ptrdiff_t  = 0x8949E843; // 
                constexpr std::ptrdiff_t  = 0xFFFD7D3C; // 
                constexpr std::ptrdiff_t  = 0x8B7FFFFF; // 
                constexpr std::ptrdiff_t  = 0x31DFDC; // 
                constexpr std::ptrdiff_t  = 0x48047418; // 
                constexpr std::ptrdiff_t  = 0x48FF8548; // 
                constexpr std::ptrdiff_t  = 0x49DC8B4C; // 
                constexpr std::ptrdiff_t  = 0x8949E043; // 
                constexpr std::ptrdiff_t  = 0x85480450; // 
                constexpr std::ptrdiff_t  = 0x7EBC933; // 
                constexpr std::ptrdiff_t  = 0x48C98548; // 
                constexpr std::ptrdiff_t  = 0xA0FF4800; // 
                constexpr std::ptrdiff_t  = 0x48DA8B48; // 
                constexpr std::ptrdiff_t  = 0x74F08141; // 
                constexpr std::ptrdiff_t  = 0x95096941; // 
                constexpr std::ptrdiff_t  = 0x8349C233; // 
                constexpr std::ptrdiff_t  = 0xF41C033; // 
                constexpr std::ptrdiff_t  = 0xDE8C1D3; // 
                constexpr std::ptrdiff_t  = 0x1115FF00; // 
                constexpr std::ptrdiff_t  = 0xCCCCCC00; // 
                constexpr std::ptrdiff_t  = 0x302444; // 
                constexpr std::ptrdiff_t  = 0x8B480000; // 
                constexpr std::ptrdiff_t  = 0x80C2FF48; // 
                constexpr std::ptrdiff_t  = 0xC28B4102; // 
                constexpr std::ptrdiff_t  = 0xC88B5BD1; // 
                constexpr std::ptrdiff_t  = 0xFA831074; // 
                constexpr std::ptrdiff_t  = 0xC1334100; // 
                constexpr std::ptrdiff_t  = 0xC1C18B5B; // 
                constexpr std::ptrdiff_t  = 0x402444C7; // 
                constexpr std::ptrdiff_t  = 0x44C74800; // 
                constexpr std::ptrdiff_t  = 0x1874D285; // 
                constexpr std::ptrdiff_t  = 0x45003925; // 
                constexpr std::ptrdiff_t  = 0x30244C8D; // 
                constexpr std::ptrdiff_t  = 0x8B480031; // 
                constexpr std::ptrdiff_t  = 0xC0818B48; // 
                constexpr std::ptrdiff_t  = 0x245C8948; // 
                constexpr std::ptrdiff_t  = 0x15FF304F; // 
                constexpr std::ptrdiff_t  = 0x50FF018B; // 
                constexpr std::ptrdiff_t  = 0x7E0F4866; // 
                constexpr std::ptrdiff_t  = 0x4866D88B; // 
                constexpr std::ptrdiff_t  = 0x8948C5FF; // 
                constexpr std::ptrdiff_t  = 0x15FF0039; // 
                constexpr std::ptrdiff_t  = 0xF668E75; // 
                constexpr std::ptrdiff_t  = 0x730F66C1; // 
                constexpr std::ptrdiff_t  = 0xFFF02824; // 
                constexpr std::ptrdiff_t  = 0x245C8948; // 
                constexpr std::ptrdiff_t  = 0x840FC085; // 
                constexpr std::ptrdiff_t  = 0xB8411A74; // 
                constexpr std::ptrdiff_t  = 0x8D480000; // 
                constexpr std::ptrdiff_t  = 0x5915FFCB; // 
                constexpr std::ptrdiff_t  = 0x30249C8B; // 
                constexpr std::ptrdiff_t  = 0xCCC35F00; // 
                constexpr std::ptrdiff_t  = 0x8B4800; // 
                constexpr std::ptrdiff_t  = 0xE6840FFA; // 
                constexpr std::ptrdiff_t  = 0x840F0038; // 
                constexpr std::ptrdiff_t  = 0x93840F01; // 
                constexpr std::ptrdiff_t  = 0x8B480039; // 
                constexpr std::ptrdiff_t  = 0x79358D48; // 
                constexpr std::ptrdiff_t  = 0xD8BA15FF; // 
                constexpr std::ptrdiff_t  = 0x708B4800; // 
                constexpr std::ptrdiff_t  = 0xE8D38B00; // 
                constexpr std::ptrdiff_t  = 0x89C48B48; // 
                constexpr std::ptrdiff_t  = 0x8948C28B; // 
                constexpr std::ptrdiff_t  = 0xBC8948F9; // 
                constexpr std::ptrdiff_t  = 0xFFC93301; // 
                constexpr std::ptrdiff_t  = 0x858B7; // 
                constexpr std::ptrdiff_t  = 0x7FFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xCCEBF08B; // 
                constexpr std::ptrdiff_t  = 0x63480855; // 
                constexpr std::ptrdiff_t  = 0xC384; // 
                constexpr std::ptrdiff_t  = 0x9B850F; // 
                constexpr std::ptrdiff_t  = 0xFFE28101; // 
                constexpr std::ptrdiff_t  = 0xFF830E75; // 
                constexpr std::ptrdiff_t  = 0xA8248C; // 
                constexpr std::ptrdiff_t  = 0x31D714; // 
                constexpr std::ptrdiff_t  = 0xC4FF41F8; // 
                constexpr std::ptrdiff_t  = 0xFFFEEB85; // 
                constexpr std::ptrdiff_t  = 0x48CF8B4D; // 
                constexpr std::ptrdiff_t  = 0xD6FA15FF; // 
                constexpr std::ptrdiff_t  = 0x410D8D48; // 
                constexpr std::ptrdiff_t  = 0x3166258D; // 
                constexpr std::ptrdiff_t  = 0xFFFF0000; // 
                constexpr std::ptrdiff_t  = 0x8D480134; // 
                constexpr std::ptrdiff_t  = 0x4C202444; // 
                constexpr std::ptrdiff_t  = 0x8B56EB00; // 
                constexpr std::ptrdiff_t  = 0xD8D48FF; // 
                constexpr std::ptrdiff_t  = 0x4AD04C; // 
                constexpr std::ptrdiff_t  = 0x4800397C; // 
                constexpr std::ptrdiff_t  = 0x15FFD445; // 
                constexpr std::ptrdiff_t  = 0x4C8D480B; // 
                constexpr std::ptrdiff_t  = 0x8B440000; // 
                constexpr std::ptrdiff_t  = 0x4CC00000; // 
                constexpr std::ptrdiff_t  = 0x48317578; // 
                constexpr std::ptrdiff_t  = 0x8B481274; // 
                constexpr std::ptrdiff_t  = 0x245C8948; // 
                constexpr std::ptrdiff_t  = 0x33C0048D; // 
                constexpr std::ptrdiff_t  = 0xD18B48F8; // 
                constexpr std::ptrdiff_t  = 0x75F53B66; // 
                constexpr std::ptrdiff_t  = 0xE8057501; // 
                constexpr std::ptrdiff_t  = 0x4ACEAB0D; // 
                constexpr std::ptrdiff_t  = 0x58B5074; // 
                constexpr std::ptrdiff_t  = 0xC90D8D48; // 
                constexpr std::ptrdiff_t  = 0x480031D7; // 
                constexpr std::ptrdiff_t  = 0xC140245C; // 
                constexpr std::ptrdiff_t  = 0xB9411068; // 
                constexpr std::ptrdiff_t  = 0xF18B4C00; // 
                constexpr std::ptrdiff_t  = 0x8D4CF633; // 
                constexpr std::ptrdiff_t  = 0xF40FD83; // 
                constexpr std::ptrdiff_t  = 0xFFCD8B44; // 
                constexpr std::ptrdiff_t  = 0x678968B; // 
                constexpr std::ptrdiff_t  = 0x9915FF30; // 
                constexpr std::ptrdiff_t  = 0x713D8D48; // 
                constexpr std::ptrdiff_t  = 0x248C8B48; // 
                constexpr std::ptrdiff_t  = 0x397954; // 
                constexpr std::ptrdiff_t  = 0x2E6BE8; // 
                constexpr std::ptrdiff_t  = 0xFEFA8C0F; // 
                constexpr std::ptrdiff_t  = 0x48000000; // 
                constexpr std::ptrdiff_t  = 0x48308840; // 
                constexpr std::ptrdiff_t  = 0x15FF0039; // 
                constexpr std::ptrdiff_t  = 0x201D0; // 
                constexpr std::ptrdiff_t  = 0xFF003978; // 
                constexpr std::ptrdiff_t  = 0x41565540; // 
                constexpr std::ptrdiff_t  = 0x8C8D4800; // 
                constexpr std::ptrdiff_t  = 0x330031D7; // 
                constexpr std::ptrdiff_t  = 0x2474894C; // 
                constexpr std::ptrdiff_t  = 0x24948D48; // 
                constexpr std::ptrdiff_t  = 0x548D4800; // 
                constexpr std::ptrdiff_t  = 0x8C8B4800; // 
                constexpr std::ptrdiff_t  = 0xFF008B4C; // 
                constexpr std::ptrdiff_t  = 0xC7484024; // 
                constexpr std::ptrdiff_t  = 0x48000000; // 
                constexpr std::ptrdiff_t  = 0x28247C89; // 
                constexpr std::ptrdiff_t  = 0xC0; // 
                constexpr std::ptrdiff_t  = 0x4808408B; // 
                constexpr std::ptrdiff_t  = 0xD0FF41D3; // 
                constexpr std::ptrdiff_t  = 0x46F70000; // 
                constexpr std::ptrdiff_t  = 0x31CF6315; // 
                constexpr std::ptrdiff_t  = 0x8B0031CF; // 
                constexpr std::ptrdiff_t  = 0x993B048D; // 
                constexpr std::ptrdiff_t  = 0xC3634CC0; // 
                constexpr std::ptrdiff_t  = 0x3FFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xC0248C8D; // 
                constexpr std::ptrdiff_t  = 0xFF0031D6; // 
                constexpr std::ptrdiff_t  = 0x24BC8B48; // 
                constexpr std::ptrdiff_t  = 0x24548948; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFA9; // 
                constexpr std::ptrdiff_t  = 0x31CDF4; // 
                constexpr std::ptrdiff_t  = 0x4808478B; // 
                constexpr std::ptrdiff_t  = 0x24548948; // 
                constexpr std::ptrdiff_t  = 0x448D4C08; // 
                constexpr std::ptrdiff_t  = 0x245C8948; // 
                constexpr std::ptrdiff_t  = 0x41C71079; // 
                constexpr std::ptrdiff_t  = 0xCF6A15FF; // 
                constexpr std::ptrdiff_t  = 0x58B4818; // 
                constexpr std::ptrdiff_t  = 0x63894404; // 
                constexpr std::ptrdiff_t  = 0x538B4800; // 
                constexpr std::ptrdiff_t  = 0x2C638944; // 
                constexpr std::ptrdiff_t  = 0x31CC7305; // 
                constexpr std::ptrdiff_t  = 0x24748B48; // 
                constexpr std::ptrdiff_t  = 0x245C8948; // 
                constexpr std::ptrdiff_t  = 0x74FFFF83; // 
                constexpr std::ptrdiff_t  = 0xC74FFFA; // 
                constexpr std::ptrdiff_t  = 0xD1058B48; // 
                constexpr std::ptrdiff_t  = 0xA9E8084B; // 
                constexpr std::ptrdiff_t  = 0x890C438B; // 
                constexpr std::ptrdiff_t  = 0x8B48088B; // 
                constexpr std::ptrdiff_t  = 0xC35F20C4; // 
                constexpr std::ptrdiff_t  = 0x8D4C1071; // 
                constexpr std::ptrdiff_t  = 0x24B4894C; // 
                constexpr std::ptrdiff_t  = 0x48000000; // 
                constexpr std::ptrdiff_t  = 0x88B4890; // 
                constexpr std::ptrdiff_t  = 0x4C01498D; // 
                constexpr std::ptrdiff_t  = 0xC27E0F48; // 
                constexpr std::ptrdiff_t  = 0x8B4C014A; // 
                constexpr std::ptrdiff_t  = 0xF0C27E0F; // 
                constexpr std::ptrdiff_t  = 0x58894D20; // 
                constexpr std::ptrdiff_t  = 0x8D48FFFF; // 
                constexpr std::ptrdiff_t  = 0xF10D8B48; // 
                constexpr std::ptrdiff_t  = 0x8B48DE75; // 
                constexpr std::ptrdiff_t  = 0x8948304F; // 
                constexpr std::ptrdiff_t  = 0x56555340; // 
                constexpr std::ptrdiff_t  = 0x24BC8948; // 
                constexpr std::ptrdiff_t  = 0x24848B48; // 
                constexpr std::ptrdiff_t  = 0x24848B48; // 
                constexpr std::ptrdiff_t  = 0x8B490000; // 
                constexpr std::ptrdiff_t  = 0x24447F0F; // 
                constexpr std::ptrdiff_t  = 0xE9382454; // 
                constexpr std::ptrdiff_t  = 0x66084B10; // 
                constexpr std::ptrdiff_t  = 0x24548948; // 
                constexpr std::ptrdiff_t  = 0x8B490031; // 
                constexpr std::ptrdiff_t  = 0x1F0F3074; // 
                constexpr std::ptrdiff_t  = 0x481853FF; // 
                constexpr std::ptrdiff_t  = 0x8949185F; // 
                constexpr std::ptrdiff_t  = 0xFF485B5D; // 
                constexpr std::ptrdiff_t  = 0x24448D4C; // 
                constexpr std::ptrdiff_t  = 0x8B484914; // 
                constexpr std::ptrdiff_t  = 0x490F8B48; // 
                constexpr std::ptrdiff_t  = 0x4EBC033; // 
                constexpr std::ptrdiff_t  = 0xCCCCCCC3; // 
                constexpr std::ptrdiff_t  = 0x76BE8; // 
                constexpr std::ptrdiff_t  = 0x245C8948; // 
                constexpr std::ptrdiff_t  = 0x8B480000; // 
                constexpr std::ptrdiff_t  = 0x3934EB0D; // 
                constexpr std::ptrdiff_t  = 0x49068B49; // 
                constexpr std::ptrdiff_t  = 0x1008A; // 
                constexpr std::ptrdiff_t  = 0x48038948; // 
                constexpr std::ptrdiff_t  = 0xC748C78B; // 
                constexpr std::ptrdiff_t  = 0x1C748; // 
                constexpr std::ptrdiff_t  = 0x2024; // 
                constexpr std::ptrdiff_t  = 0x48004AAD; // 
                constexpr std::ptrdiff_t  = 0x890D8D48; // 
                constexpr std::ptrdiff_t  = 0x24448948; // 
                constexpr std::ptrdiff_t  = 0x60245C8B; // 
                constexpr std::ptrdiff_t  = 0x245C894C; // 
                constexpr std::ptrdiff_t  = 0x24448B48; // 
                constexpr std::ptrdiff_t  = 0x20244489; // 
                constexpr std::ptrdiff_t  = 0x4894C39; // 
                constexpr std::ptrdiff_t  = 0x8D8730F; // 
                constexpr std::ptrdiff_t  = 0x14A8D48; // 
                constexpr std::ptrdiff_t  = 0x49F0C27E; // 
                constexpr std::ptrdiff_t  = 0xC08B4920; // 
                constexpr std::ptrdiff_t  = 0xCCCCC35B; // 
                constexpr std::ptrdiff_t  = 0x4C10598D; // 
                constexpr std::ptrdiff_t  = 0x24448B48; // 
                constexpr std::ptrdiff_t  = 0x20244489; // 
                constexpr std::ptrdiff_t  = 0x4894C39; // 
                constexpr std::ptrdiff_t  = 0x8D8730F; // 
                constexpr std::ptrdiff_t  = 0x14A8D48; // 
                constexpr std::ptrdiff_t  = 0x49F0C27E; // 
                constexpr std::ptrdiff_t  = 0xC08B4920; // 
                constexpr std::ptrdiff_t  = 0xCCCCCCC3; // 
                constexpr std::ptrdiff_t  = 0x8D480000; // 
                constexpr std::ptrdiff_t  = 0x245C8948; // 
                constexpr std::ptrdiff_t  = 0x20247429; // 
                constexpr std::ptrdiff_t  = 0x89483889; // 
                constexpr std::ptrdiff_t  = 0x89483055; // 
                constexpr std::ptrdiff_t  = 0x10890; // 
                constexpr std::ptrdiff_t  = 0xD8B48D0; // 
                constexpr std::ptrdiff_t  = 0x15FFC88B; // 
                constexpr std::ptrdiff_t  = 0x270; // 
                constexpr std::ptrdiff_t  = 0x4D8D4810; // 
                constexpr std::ptrdiff_t  = 0xE090FF01; // 
                constexpr std::ptrdiff_t  = 0x458B184E; // 
                constexpr std::ptrdiff_t  = 0x8B485824; // 
                constexpr std::ptrdiff_t  = 0xC4834820; // 
                constexpr std::ptrdiff_t  = 0xC172058B; // 
                constexpr std::ptrdiff_t  = 0xFC840F; // 
                constexpr std::ptrdiff_t  = 0x74FF047A; // 
                constexpr std::ptrdiff_t  = 0x8B48108B; // 
                constexpr std::ptrdiff_t  = 0x8B48108B; // 
                constexpr std::ptrdiff_t  = 0x100; // 
                constexpr std::ptrdiff_t  = 0x61058D48; // 
                constexpr std::ptrdiff_t  = 0x8B48306B; // 
                constexpr std::ptrdiff_t  = 0x891C478B; // 
                constexpr std::ptrdiff_t  = 0x8B48C35F; // 
                constexpr std::ptrdiff_t  = 0x83485340; // 
                constexpr std::ptrdiff_t  = 0x75482444; // 
                constexpr std::ptrdiff_t  = 0x30C48348; // 
                constexpr std::ptrdiff_t  = 0xC48348C0; // 
                constexpr std::ptrdiff_t  = 0xB70FF28B; // 
                constexpr std::ptrdiff_t  = 0xB9; // 
                constexpr std::ptrdiff_t  = 0xC084C0FF; // 
                constexpr std::ptrdiff_t  = 0xBF52058B; // 
                constexpr std::ptrdiff_t  = 0xBE48; // 
                constexpr std::ptrdiff_t  = 0x48085F89; // 
                constexpr std::ptrdiff_t  = 0x4C004BA0; // 
                constexpr std::ptrdiff_t  = 0x48245C8B; // 
                constexpr std::ptrdiff_t  = 0x8B480789; // 
                constexpr std::ptrdiff_t  = 0x38247C8B; // 
                constexpr std::ptrdiff_t  = 0x1010101; // 
                constexpr std::ptrdiff_t  = 0x51058B48; // 
                constexpr std::ptrdiff_t  = 0x83840FC0; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xD8B481F; // 
                constexpr std::ptrdiff_t  = 0xC738948; // 
                constexpr std::ptrdiff_t  = 0x4848247C; // 
                constexpr std::ptrdiff_t  = 0x5E4120C4; // 
                constexpr std::ptrdiff_t  = 0x71058B48; // 
                constexpr std::ptrdiff_t  = 0x83840FC0; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xD8B481F; // 
                constexpr std::ptrdiff_t  = 0xC738948; // 
                constexpr std::ptrdiff_t  = 0x4848247C; // 
                constexpr std::ptrdiff_t  = 0x5E4120C4; // 
                constexpr std::ptrdiff_t  = 0x91058B48; // 
                constexpr std::ptrdiff_t  = 0x83840FC0; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xD8B481F; // 
                constexpr std::ptrdiff_t  = 0xC738948; // 
                constexpr std::ptrdiff_t  = 0x4848247C; // 
                constexpr std::ptrdiff_t  = 0x5E4120C4; // 
                constexpr std::ptrdiff_t  = 0x9F62058D; // 
                constexpr std::ptrdiff_t  = 0x31C2BB15; // 
                constexpr std::ptrdiff_t  = 0x480031C2; // 
                constexpr std::ptrdiff_t  = 0x28; // 
                constexpr std::ptrdiff_t  = 0x48382474; // 
                constexpr std::ptrdiff_t  = 0x245C8948; // 
                constexpr std::ptrdiff_t  = 0x10BAD88B; // 
                constexpr std::ptrdiff_t  = 0x4803EB08; // 
                constexpr std::ptrdiff_t  = 0x9CBA0D8B; // 
                constexpr std::ptrdiff_t  = 0x4C118B48; // 
                constexpr std::ptrdiff_t  = 0x48000002; // 
                constexpr std::ptrdiff_t  = 0x48004B9C; // 
                constexpr std::ptrdiff_t  = 0x18B4818; // 
                constexpr std::ptrdiff_t  = 0x48C3450F; // 
                constexpr std::ptrdiff_t  = 0xEB038B48; // 
                constexpr std::ptrdiff_t  = 0x245C8948; // 
                constexpr std::ptrdiff_t  = 0x88B4800; // 
                constexpr std::ptrdiff_t  = 0x4830246C; // 
                constexpr std::ptrdiff_t  = 0x18B4860; // 
                constexpr std::ptrdiff_t  = 0x48003927; // 
                constexpr std::ptrdiff_t  = 0x390D8B48; // 
                constexpr std::ptrdiff_t  = 0x47B70F0B; // 
                constexpr std::ptrdiff_t  = 0x89480000; // 
                constexpr std::ptrdiff_t  = 0xC68B4818; // 
                constexpr std::ptrdiff_t  = 0x6C7; // 
                constexpr std::ptrdiff_t  = 0x28EC8348; // 
                constexpr std::ptrdiff_t  = 0x38244489; // 
                constexpr std::ptrdiff_t  = 0x245C8948; // 
                constexpr std::ptrdiff_t  = 0x18578B48; // 
                constexpr std::ptrdiff_t  = 0xD78B4800; // 
                constexpr std::ptrdiff_t  = 0x246C8948; // 
                constexpr std::ptrdiff_t  = 0x41F70000; // 
                constexpr std::ptrdiff_t  = 0xB7E7FFF; // 
                constexpr std::ptrdiff_t  = 0x1718D3F; // 
                constexpr std::ptrdiff_t  = 0x8D0EEBFF; // 
                constexpr std::ptrdiff_t  = 0xC0000000; // 
                constexpr std::ptrdiff_t  = 0xC1F7; // 
                constexpr std::ptrdiff_t  = 0xE8B4108; // 
                constexpr std::ptrdiff_t  = 0x245C8948; // 
                constexpr std::ptrdiff_t  = 0xD98B4CFA; // 
                constexpr std::ptrdiff_t  = 0x33443501; // 
                constexpr std::ptrdiff_t  = 0x8DE03344; // 
                constexpr std::ptrdiff_t  = 0x75ED8566; // 
                constexpr std::ptrdiff_t  = 0x1FB70F41; // 
                constexpr std::ptrdiff_t  = 0x400C8D48; // 
                constexpr std::ptrdiff_t  = 0xF8834110; // 
                constexpr std::ptrdiff_t  = 0xF20738B; // 
                constexpr std::ptrdiff_t  = 0xF8C148C2; // 
                constexpr std::ptrdiff_t  = 0xEBC08B41; // 
                constexpr std::ptrdiff_t  = 0xFFF98341; // 
                constexpr std::ptrdiff_t  = 0x8B4C03; // 
                constexpr std::ptrdiff_t  = 0x8B44088B; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xE0EBC18B; // 
                constexpr std::ptrdiff_t  = 0xD98B48F2; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFE2; // 
                constexpr std::ptrdiff_t  = 0x48000001; // 
                constexpr std::ptrdiff_t  = 0xB60F41C6; // 
                constexpr std::ptrdiff_t  = 0x69C8330D; // 
                constexpr std::ptrdiff_t  = 0x14E850F; // 
                constexpr std::ptrdiff_t  = 0x41FF458D; // 
                constexpr std::ptrdiff_t  = 0x8B480453; // 
                constexpr std::ptrdiff_t  = 0x3B2574FF; // 
                constexpr std::ptrdiff_t  = 0x8310C854; // 
                constexpr std::ptrdiff_t  = 0x4747FFF; // 
                constexpr std::ptrdiff_t  = 0xC78B4812; // 
                constexpr std::ptrdiff_t  = 0x30438B4C; // 
                constexpr std::ptrdiff_t  = 0x438B4804; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFD; // 
                constexpr std::ptrdiff_t  = 0x3C6B8310; // 
                constexpr std::ptrdiff_t  = 0x4C48247C; // 
                constexpr std::ptrdiff_t  = 0x20247C89; // 
                constexpr std::ptrdiff_t  = 0x413B8B41; // 
                constexpr std::ptrdiff_t  = 0x18E9C1C8; // 
                constexpr std::ptrdiff_t  = 0x69C2330D; // 
                constexpr std::ptrdiff_t  = 0xEBC93304; // 
                constexpr std::ptrdiff_t  = 0x83418004; // 
                constexpr std::ptrdiff_t  = 0x8B4C03EB; // 
                constexpr std::ptrdiff_t  = 0x45028B4C; // 
                constexpr std::ptrdiff_t  = 0xB88C0F; // 
                constexpr std::ptrdiff_t  = 0xF8C148C2; // 
                constexpr std::ptrdiff_t  = 0xEBC08B41; // 
                constexpr std::ptrdiff_t  = 0xFFF88341; // 
                constexpr std::ptrdiff_t  = 0x49088B4C; // 
                constexpr std::ptrdiff_t  = 0x448B4500; // 
                constexpr std::ptrdiff_t  = 0x48FFFFFF; // 
                constexpr std::ptrdiff_t  = 0x880FD285; // 
                constexpr std::ptrdiff_t  = 0x247C8948; // 
                constexpr std::ptrdiff_t  = 0xCD248D; // 
            }
            // Parent: None
            // Field count: 25
            namespace _H____ {
                constexpr std::ptrdiff_t 3V�� = 0x158B; // 
                constexpr std::ptrdiff_t  = 0x6F66; // 
                constexpr std::ptrdiff_t 3V�� = 0x6DC; // 
                constexpr std::ptrdiff_t ���W. = 0x6FF; // 
                constexpr std::ptrdiff_t `��W. = 0x0; // 
                constexpr std::ptrdiff_t �r�W. = 0x15A4; // 
                constexpr std::ptrdiff_t  = 0x666E692D; // 
                constexpr std::ptrdiff_t `��W. = 0x6E0; // 
                constexpr std::ptrdiff_t �6]�� = 0x44080000; // 
                constexpr std::ptrdiff_t ���W. = 0x6E0; // 
                constexpr std::ptrdiff_t @��W. = 0x0; // 
                constexpr std::ptrdiff_t �#R�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t 3V�� = 0x892; // 
                constexpr std::ptrdiff_t ���W. = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t ���W. = 0xFFFF0068; // 
                constexpr std::ptrdiff_t `��W. = 0x6D4; // 
                constexpr std::ptrdiff_t `r�W. = 0x666E692D; // 
                constexpr std::ptrdiff_t �}�W. = 0x15A5; // 
                constexpr std::ptrdiff_t  ��W. = 0x37302E37; // 
                constexpr std::ptrdiff_t �e`�� = 0x0; // 
                constexpr std::ptrdiff_t ���W. = 0x0; // 
                constexpr std::ptrdiff_t ���W. = 0x13EB; // 
                constexpr std::ptrdiff_t ���W. = 0x15A8; // 
                constexpr std::ptrdiff_t ���W. = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t 3V�� = 0x6DF; // 
            }
            // Parent: None
            // Field count: 0
            namespace ______ {
            }
            // Parent: None
            // Field count: 103
            namespace __o__ {
                constexpr std::ptrdiff_t 3V�� = 0x805; // 
                constexpr std::ptrdiff_t  ��W. = 0x6DC; // 
                constexpr std::ptrdiff_t  = 0x751; // 
                constexpr std::ptrdiff_t ���W. = 0x891; // 
                constexpr std::ptrdiff_t  = 0x666E692D; // 
                constexpr std::ptrdiff_t 3V�� = 0x15A4; // 
                constexpr std::ptrdiff_t 3V�� = 0x6D6; // 
                constexpr std::ptrdiff_t `y�W. = 0x6D6; // 
                constexpr std::ptrdiff_t `��W. = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t @��W. = 0x6DC; // 
                constexpr std::ptrdiff_t @��W. = 0x666E692D; // 
                constexpr std::ptrdiff_t P��� = 0x7E4; // 
                constexpr std::ptrdiff_t ���W. = 0x666E692D; // 
                constexpr std::ptrdiff_t �~�W. = 0x6F66; // 
                constexpr std::ptrdiff_t ���� = 0x36636B90; // 
                constexpr std::ptrdiff_t ���W. = 0x752; // 
                constexpr std::ptrdiff_t 3V�� = 0x751; // 
                constexpr std::ptrdiff_t ���W. = 0x6DF; // 
                constexpr std::ptrdiff_t `��W. = 0x773; // 
                constexpr std::ptrdiff_t ���W. = 0x44080000; // 
                constexpr std::ptrdiff_t 3V�� = 0x6D7; // 
                constexpr std::ptrdiff_t  ��W. = 0x666E692D; // 
                constexpr std::ptrdiff_t  ��W. = 0x6D9; // 
                constexpr std::ptrdiff_t `��W. = 0x15A3; // 
                constexpr std::ptrdiff_t  = 0x6FE; // 
                constexpr std::ptrdiff_t ���W. = 0x0; // 
                constexpr std::ptrdiff_t 3V�� = 0x6E0; // 
                constexpr std::ptrdiff_t �e`�� = 0x3F800000; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t �v�W. = 0x666E692D; // 
                constexpr std::ptrdiff_t ���W. = 0x0; // 
                constexpr std::ptrdiff_t  ��W. = 0x6DF; // 
                constexpr std::ptrdiff_t  = 0x158B; // 
                constexpr std::ptrdiff_t  z�W. = 0x6F66; // 
                constexpr std::ptrdiff_t 3V�� = 0x159A; // 
                constexpr std::ptrdiff_t ��� = 0x152F; // 
                constexpr std::ptrdiff_t  = 0x666E692D; // 
                constexpr std::ptrdiff_t `��W. = 0x68; // 
                constexpr std::ptrdiff_t ���W. = 0x44080000; // 
                constexpr std::ptrdiff_t `��W. = 0x0; // 
                constexpr std::ptrdiff_t @��W. = 0x892; // 
                constexpr std::ptrdiff_t 3V�� = 0x804; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t ���W. = 0x804; // 
                constexpr std::ptrdiff_t �}�W. = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t 3V�� = 0x15A8; // 
                constexpr std::ptrdiff_t @��W. = 0x6D8; // 
                constexpr std::ptrdiff_t `l�W. = 0x15A5; // 
                constexpr std::ptrdiff_t  = 0x1550; // 
                constexpr std::ptrdiff_t �6]�� = 0x44080000; // 
                constexpr std::ptrdiff_t �s�W. = 0x15A6; // 
                constexpr std::ptrdiff_t  = 0x68; // 
                constexpr std::ptrdiff_t �e`�� = 0x0; // 
                constexpr std::ptrdiff_t 3V�� = 0x6D9; // 
                constexpr std::ptrdiff_t `��W. = 0x6D4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  ��W. = 0x6D7; // 
                constexpr std::ptrdiff_t ���W. = 0x7E4; // 
                constexpr std::ptrdiff_t ���� = 0x804; // 
                constexpr std::ptrdiff_t  = 0x666E692D; // 
                constexpr std::ptrdiff_t 3V�� = 0x773; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7E4; // 
                constexpr std::ptrdiff_t  = 0x6D4; // 
                constexpr std::ptrdiff_t 3V�� = 0x6D8; // 
                constexpr std::ptrdiff_t �n�W. = 0x70C; // 
                constexpr std::ptrdiff_t  ��W. = 0x6FE; // 
                constexpr std::ptrdiff_t  ��W. = 0x6E0; // 
                constexpr std::ptrdiff_t  l�W. = 0x15A4; // 
                constexpr std::ptrdiff_t  v�W. = 0x6FE; // 
                constexpr std::ptrdiff_t  ��W. = 0x69656365; // 
                constexpr std::ptrdiff_t 3V�� = 0x6D4; // 
                constexpr std::ptrdiff_t 3V�� = 0x772; // 
                constexpr std::ptrdiff_t 3V�� = 0x15A5; // 
                constexpr std::ptrdiff_t ���W. = 0x159A; // 
                constexpr std::ptrdiff_t @��W. = 0x44080000; // 
                constexpr std::ptrdiff_t ���W. = 0x6FD; // 
                constexpr std::ptrdiff_t ���W. = 0x13EB; // 
                constexpr std::ptrdiff_t 3V�� = 0x158B; // 
                constexpr std::ptrdiff_t  = 0x6F66; // 
                constexpr std::ptrdiff_t 3V�� = 0x6DC; // 
                constexpr std::ptrdiff_t ���W. = 0x6FF; // 
                constexpr std::ptrdiff_t `��W. = 0x0; // 
                constexpr std::ptrdiff_t �r�W. = 0x15A4; // 
                constexpr std::ptrdiff_t  = 0x666E692D; // 
                constexpr std::ptrdiff_t `��W. = 0x6E0; // 
                constexpr std::ptrdiff_t �6]�� = 0x44080000; // 
                constexpr std::ptrdiff_t  = 0x68; // 
                constexpr std::ptrdiff_t @��W. = 0x0; // 
                constexpr std::ptrdiff_t �#R�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t 3V�� = 0x892; // 
                constexpr std::ptrdiff_t ���W. = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t ���W. = 0xFFFF0068; // 
                constexpr std::ptrdiff_t `��W. = 0x6D4; // 
                constexpr std::ptrdiff_t `r�W. = 0x666E692D; // 
                constexpr std::ptrdiff_t �}�W. = 0x15A5; // 
                constexpr std::ptrdiff_t  ��W. = 0x37302E37; // 
                constexpr std::ptrdiff_t �e`�� = 0x0; // 
                constexpr std::ptrdiff_t ���W. = 0x0; // 
                constexpr std::ptrdiff_t ���W. = 0x13EB; // 
                constexpr std::ptrdiff_t ���W. = 0x15A8; // 
                constexpr std::ptrdiff_t ���W. = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t 3V�� = 0x6DF; // 
            }
            // Parent: None
            // Field count: 150
            namespace __eN__ {
                constexpr std::ptrdiff_t  = 0x45E90000; // 
                constexpr std::ptrdiff_t ��o_� = 0x5F6FCC50; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t tR = 0x0; // 
                constexpr std::ptrdiff_t ��J�� = 0x0; // 
                constexpr std::ptrdiff_t  = 0x45E90000; // 
                constexpr std::ptrdiff_t ��o_� = 0xDBABF220; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x13; // 
                constexpr std::ptrdiff_t ࠕN. = 0xD5DC8A60; // 
                constexpr std::ptrdiff_t ��J�� = 0x11; // 
                constexpr std::ptrdiff_t  = 0xA1B12B70; // 
                constexpr std::ptrdiff_t  = 0x5F6FCC68; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x2A264437; // 
                constexpr std::ptrdiff_t  = 0x45EB4000; // 
                constexpr std::ptrdiff_t ��J�� = 0x45EB4000; // 
                constexpr std::ptrdiff_t  = 0x5F6FCE01; // 
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t ��J�� = 0x45EB4000; // 
                constexpr std::ptrdiff_t $������������ = 0xF1BA86C0; // 
                constexpr std::ptrdiff_t H�J�� = 0x932C2499; // H����
                constexpr std::ptrdiff_t  = 0x2; // 
                constexpr std::ptrdiff_t  = 0xA146BB98; // 
                constexpr std::ptrdiff_t  = 0x5F6FDE30; // 
                constexpr std::ptrdiff_t  = 0x4EE16800; // 01���
                constexpr std::ptrdiff_t ���W. = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x4EE16800; // 
                constexpr std::ptrdiff_t  = 0x0; // H9oXu2�G8��Hc�x'H�G@(�H��H��H��P��uH�H���H��yٽ
                constexpr std::ptrdiff_t ���� = 0x5F6FD030; // 
                constexpr std::ptrdiff_t ���� = 0x0; // 
                constexpr std::ptrdiff_t Initializing = 0x7FFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x5828B500; // 
                constexpr std::ptrdiff_t  = 0x7FFF; // A���
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t  = 0xF0; // 
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t  = 0x8; // 
                constexpr std::ptrdiff_t `�o_� = 0x5F6FD0D0; // �4Y��
                constexpr std::ptrdiff_t H�o_� = 0x0; // 
                constexpr std::ptrdiff_t  = 0xF1BA86C0; // 
                constexpr std::ptrdiff_t  = 0xF1BA86C0; // 
                constexpr std::ptrdiff_t C:\buildworker\csgo_rel_win64\build\src\game\client\c_baseentity.cpp = 0xA14646A0; // 
                constexpr std::ptrdiff_t C:\buildworker\csgo_rel_win64\build\src\game\client\c_baseentity.cpp = 0xA14646A0; // 
                constexpr std::ptrdiff_t  = 0x100; // 
                constexpr std::ptrdiff_t  = 0x6; // 
                constexpr std::ptrdiff_t  = 0x6; // 
                constexpr std::ptrdiff_t  = 0x4F6B9E80; // 
                constexpr std::ptrdiff_t  = 0x3C800000; // 
                constexpr std::ptrdiff_t  = 0x885D3130; // 
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t H+�H��$p  = 0x1; // 
                constexpr std::ptrdiff_t  = 0x5; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5F6FD360; // 
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t H+�H�l$`E3�E��H��H��E���� = 0x5F6FD320; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xA1C37D00; // 
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t  = 0x4EA33800; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x4E959F20; // 
                constexpr std::ptrdiff_t  = 0x46C90FDB; // 
                constexpr std::ptrdiff_t ��A�� = 0x5F6FD540; // 
                constexpr std::ptrdiff_t ��N�� = 0x0; // 
                constexpr std::ptrdiff_t  �J�� = 0x4ED05C00; // 
                constexpr std::ptrdiff_t  = 0x4EA33800; // 
                constexpr std::ptrdiff_t  �J�� = 0xA1C30E48; // 
                constexpr std::ptrdiff_t 9��B:[�B = 0x3FAAAAAB; // 
                constexpr std::ptrdiff_t  = 0x5F6FD6E0; // 
                constexpr std::ptrdiff_t ��A�� = 0x3FAAAAAB; // 
                constexpr std::ptrdiff_t 9��B:[�B = 0xA1C381D8; // 
                constexpr std::ptrdiff_t  = 0xA1C381D8; // 
                constexpr std::ptrdiff_t �� = 0x40A00000; // 
                constexpr std::ptrdiff_t  = 0x78; // 
                constexpr std::ptrdiff_t ����- = 0x2E4C178; // �
                constexpr std::ptrdiff_t  = 0x3F; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t H���� = 0xA00050B4; // 
                constexpr std::ptrdiff_t S#'Ve�@��+�g�1��ܝ<c��G���Q1��� = 0x0; // 
                constexpr std::ptrdiff_t  = 0x19; // 
                constexpr std::ptrdiff_t  = 0x5F6FE228; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t p�4. = 0x31B; // 
                constexpr std::ptrdiff_t  = 0xFA2070C0; // 
                constexpr std::ptrdiff_t �$��� = 0x57CA9AA0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x35EB72C0; // 
                constexpr std::ptrdiff_t �%/�� = 0x57CA9BA0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xC181957; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3F800000; // 
                constexpr std::ptrdiff_t  = 0x8AD232BC; // 
                constexpr std::ptrdiff_t  = 0x10; // 
                constexpr std::ptrdiff_t P7>Z. = 0x5F6FDF10; // �o_�
                constexpr std::ptrdiff_t  = 0xF1EAD8D0; // 
                constexpr std::ptrdiff_t CRenderGameSystem::OnClientPreOutput = 0xC39F3010; // 
                constexpr std::ptrdiff_t ��eN. = 0x2B54; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x41893EA5; // 
                constexpr std::ptrdiff_t  = 0x5F6FE130; // 
                constexpr std::ptrdiff_t 8�� = 0x33902400; // 
                constexpr std::ptrdiff_t � = 0x4FB76860; // 
                constexpr std::ptrdiff_t  = 0xA48FF140; // 
                constexpr std::ptrdiff_t EndFrame = 0xA48FF140; // 
                constexpr std::ptrdiff_t EndFrame = 0xA48D6930; // 
                constexpr std::ptrdiff_t  = 0x4670F800; // 8��
                constexpr std::ptrdiff_t  = 0x5F6FDD29; // 
                constexpr std::ptrdiff_t C:\buildworker\csgo_rel_win64\build\src\panorama\uitoplevelwindow.cpp = 0xFF000000; // 
                constexpr std::ptrdiff_t \�Z. = 0xA48E5590; // 
                constexpr std::ptrdiff_t PaintEmptyFrameAndForceLaterRepaint = 0xA48E5590; // 
                constexpr std::ptrdiff_t �z��� = 0xF1BA86C0; // �
                constexpr std::ptrdiff_t ����� = 0xFF000000; // 
                constexpr std::ptrdiff_t  = 0xA48D90D0; // 8��
                constexpr std::ptrdiff_t LayoutAndPaintWindows = 0xA48D90D0; // 
                constexpr std::ptrdiff_t LayoutAndPaintWindows = 0xA48D90D0; // 
                constexpr std::ptrdiff_t LayoutAndPaintWindows = 0x41893EA5; // 
                constexpr std::ptrdiff_t ����� = 0x0; // 
                constexpr std::ptrdiff_t P���� = 0xD3D4C8A0; // 
                constexpr std::ptrdiff_t ����� = 0xA13321A8; // p����
                constexpr std::ptrdiff_t P���� = 0xF1F433C0; // 8��
                constexpr std::ptrdiff_t ����� = 0x78; // 
                constexpr std::ptrdiff_t  = 0x0; // �
                constexpr std::ptrdiff_t � = 0x4C6C3800; // 
                constexpr std::ptrdiff_t  = 0x2; // �
                constexpr std::ptrdiff_t � = 0x4FB7F640; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x45636880; // PhysicsGameSystem
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5F6FE190; // 
                constexpr std::ptrdiff_t  = 0x5F6FE030; // H��(�����H��t�X�	
                constexpr std::ptrdiff_t  = 0x57CA7A00; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x2B54; // 
                constexpr std::ptrdiff_t  = 0xD40FCE20; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t �o_� = 0xD5F9EC50; // 
            }
            // Parent: None
            // Field count: 0
            namespace _8___ {
            }
            // Parent: None
            // Field count: 0
            namespace _ {
            }
            // Parent: None
            // Field count: 0
            namespace _ {
            }
            // Parent: None
            // Field count: 0
            namespace _ {
            }
        }
    }
}
