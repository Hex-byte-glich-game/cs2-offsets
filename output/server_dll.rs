// Generated using https://github.com/a2x/cs2-dumper
// 2025-11-30 05:42:48.431405700 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: server.dll
        // Class count: 166
        // Enum count: 92
        pub mod server_dll {
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum CFuncMover__TransitionToPathNodeAction_t {
                TRANSITION_TO_PATH_NODE_ACTION_NONE = 0x0,
                TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 0x1,
                TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 0x2,
                TRANSITION_TO_PATH_NODE_TRANSITIONING = 0x3
            }
            // Alignment: 4
            // Member count: 9
            #[repr(u32)]
            pub enum CFuncMover__OrientationUpdate_t {
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
            #[repr(u32)]
            pub enum C_EconItemView {
                 = 0x0
            }
            // Alignment: 1
            // Member count: 36
            #[repr(u8)]
            pub enum CGameSceneNode {
                 = 0x0
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CRangeFloat {
                pub const m_pValue: usize = 0x0; // float32[2]
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MFgdHelper
            pub mod CDestructiblePart {
                pub const m_DebugName: usize = 0x0; // CGlobalSymbol
                pub const m_nHitGroup: usize = 0x8; // HitGroup_t
                pub const m_bDisableHitGroupWhenDestroyed: usize = 0xC; // bool
                pub const m_nOtherHitgroupsToDestroyWhenFullyDestructed: usize = 0x10; // CUtlVector<HitGroup_t>
                pub const m_bOnlyDestroyWhenGibbing: usize = 0x28; // bool
                pub const m_sBodyGroupName: usize = 0x30; // CGlobalSymbol
                pub const m_DamageLevels: usize = 0x38; // CUtlVector<CDestructiblePart_DamageLevel>
            }
            // Parent: None
            // Field count: 0
            pub mod CAnimEventQueueListener {
            }
            // Parent: Relationship_t
            // Field count: 2
            pub mod RelationshipOverride_t {
                pub const entity: usize = 0x8; // CHandle<CBaseEntity>
                pub const classType: usize = 0xC; // Class_T
            }
            // Parent: None
            // Field count: 2
            pub mod AutoRoomDoorwayPairs_t {
                pub const vP1: usize = 0x0; // Vector
                pub const vP2: usize = 0xC; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CRemapFloat {
                pub const m_pValue: usize = 0x0; // float32[4]
            }
            // Parent: None
            // Field count: 3
            pub mod CHintMessage {
                pub const m_hintString: usize = 0x0; // char*
                pub const m_args: usize = 0x8; // CUtlVector<char*>
                pub const m_duration: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 7
            pub mod ParticleNode_t {
                pub const m_hEntity: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_iIndex: usize = 0x4; // ParticleIndex_t
                pub const m_flStartTime: usize = 0x8; // GameTime_t
                pub const m_flGrowthDuration: usize = 0xC; // float32
                pub const m_vecGrowthOrigin: usize = 0x10; // Vector
                pub const m_flEndcapTime: usize = 0x1C; // float32
                pub const m_bMarkedForDelete: usize = 0x20; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomFGDType
            pub mod CFootstepTableHandle {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDecalGroupVData {
                pub const m_vecOptions: usize = 0x0; // CUtlVector<DecalGroupOption_t>
                pub const m_flTotalProbability: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CNmSnapWeaponTask {
            }
            // Parent: None
            // Field count: 1
            pub mod CPlayerControllerComponent {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 1
            pub mod CResponseQueue {
                pub const m_ExpresserTargets: usize = 0x38; // CUtlVector<CAI_Expresser*>
            }
            // Parent: None
            // Field count: 2
            pub mod CScriptUniformRandomStream {
                pub const m_hScriptScope: usize = 0x8; // HSCRIPT
                pub const m_nInitialSeed: usize = 0x9C; // int32
            }
            // Parent: None
            // Field count: 6
            pub mod lerpdata_t {
                pub const m_hEnt: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_MoveType: usize = 0x4; // MoveType_t
                pub const m_flStartTime: usize = 0x8; // GameTime_t
                pub const m_vecStartOrigin: usize = 0xC; // Vector
                pub const m_qStartRot: usize = 0x20; // Quaternion
                pub const m_nFXIndex: usize = 0x30; // ParticleIndex_t
            }
            // Parent: None
            // Field count: 0
            pub mod WrappedPhysicsJoint_t {
            }
            // Parent: None
            // Field count: 3
            pub mod SimpleConstraintSoundProfile {
                pub const eKeypoints: usize = 0x8; // SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
                pub const m_keyPoints: usize = 0xC; // float32[2]
                pub const m_reversalSoundThresholds: usize = 0x14; // float32[3]
            }
            // Parent: None
            // Field count: 2
            pub mod CSimpleSimTimer {
                pub const m_flNext: usize = 0x0; // GameTime_t
                pub const m_nWorldGroupId: usize = 0x4; // WorldGroupId_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPhysicsBodyGameMarkupData {
                pub const m_PhysicsBodyMarkupByBoneName: usize = 0x0; // CUtlOrderedMap<CUtlString,CPhysicsBodyGameMarkup>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSkillDamage {
                pub const m_flDamage: usize = 0x0; // CSkillFloat
                pub const m_flNPCDamageScalarVsNPC: usize = 0x10; // float32
                pub const m_flPhysicsForceDamage: usize = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CFloatExponentialMovingAverage {
            }
            // Parent: None
            // Field count: 0
            pub mod CAnimEventListenerBase {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumer {
            }
            // Parent: None
            // Field count: 3
            pub mod CNetworkViewOffsetVector {
                pub const m_vecX: usize = 0x10; // CNetworkedQuantizedFloat
                pub const m_vecY: usize = 0x18; // CNetworkedQuantizedFloat
                pub const m_vecZ: usize = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 1
            pub mod AmmoIndex_t {
                pub const m_Value: usize = 0x0; // int8
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDestructiblePartsSystemData {
                pub const m_PartsDataByHitGroup: usize = 0x0; // CUtlOrderedMap<HitGroup_t,CDestructiblePart>
                pub const m_nMinMaxNumberHitGroupsToDestroyWhenGibbing: usize = 0x28; // CRangeInt
            }
            // Parent: None
            // Field count: 2
            pub mod CRopeOverlapHit {
                pub const m_hEntity: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_vecOverlappingLinks: usize = 0x8; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 3
            pub mod ResponseContext_t {
                pub const m_iszName: usize = 0x0; // CUtlSymbolLarge
                pub const m_iszValue: usize = 0x8; // CUtlSymbolLarge
                pub const m_fExpirationTime: usize = 0x10; // GameTime_t
            }
            // Parent: None
            // Field count: 1
            pub mod CNavVolumeSphericalShell {
                pub const m_flRadiusInner: usize = 0x88; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod CPlayerPawnComponent {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGOPlayerAnimGraphState {
            }
            // Parent: None
            // Field count: 25
            pub mod CDecalInstance {
                pub const m_sDecalGroup: usize = 0x0; // CGlobalSymbol
                pub const m_hMaterial: usize = 0x8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_sSequenceName: usize = 0x10; // CUtlStringToken
                pub const m_hEntity: usize = 0x14; // CHandle<CBaseEntity>
                pub const m_nBoneIndex: usize = 0x18; // int32
                pub const m_nTriangleIndex: usize = 0x1C; // int32
                pub const m_vPositionLS: usize = 0x20; // Vector
                pub const m_vNormalLS: usize = 0x2C; // Vector
                pub const m_vSAxisLS: usize = 0x38; // Vector
                pub const m_nFlags: usize = 0x44; // DecalFlags_t
                pub const m_Color: usize = 0x48; // Color
                pub const m_flWidth: usize = 0x4C; // float32
                pub const m_flHeight: usize = 0x50; // float32
                pub const m_flDepth: usize = 0x54; // float32
                pub const m_flAnimationScale: usize = 0x58; // float32
                pub const m_flAnimationStartTime: usize = 0x5C; // float32
                pub const m_flPlaceTime: usize = 0x60; // GameTime_t
                pub const m_flFadeStartTime: usize = 0x64; // float32
                pub const m_flFadeDuration: usize = 0x68; // float32
                pub const m_flLightingOriginOffset: usize = 0x6C; // float32
                pub const m_flBoundingRadiusSqr: usize = 0x78; // float32
                pub const m_nSequenceIndex: usize = 0x7C; // int16
                pub const m_bIsAdjacent: usize = 0x7E; // bool
                pub const m_bDoDecalLightmapping: usize = 0x7F; // bool
                pub const m_nSkinnedModelMode: usize = 0x80; // DecalMode_t
            }
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGameScriptedMoveData {
                pub const m_vAccumulatedRootMotion: usize = 0x0; // Vector
                pub const m_angAccumulatedRootMotionRotation: usize = 0xC; // QAngle
                pub const m_vSrc: usize = 0x18; // VectorWS
                pub const m_angSrc: usize = 0x24; // QAngle
                pub const m_angCurrent: usize = 0x30; // QAngle
                pub const m_flLockedSpeed: usize = 0x3C; // float32
                pub const m_flAngRate: usize = 0x40; // float32
                pub const m_flDuration: usize = 0x44; // float32
                pub const m_flStartTime: usize = 0x48; // GameTime_t
                pub const m_bActive: usize = 0x4C; // bool
                pub const m_bTeleportOnEnd: usize = 0x4D; // bool
                pub const m_bIgnoreRotation: usize = 0x4E; // bool
                pub const m_bSuccess: usize = 0x4F; // bool
                pub const m_nForcedCrouchState: usize = 0x50; // ForcedCrouchState_t
                pub const m_bIgnoreCollisions: usize = 0x54; // bool
                pub const m_vDest: usize = 0x58; // Vector
                pub const m_angDst: usize = 0x64; // QAngle
                pub const m_hDestEntity: usize = 0x70; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 1
            pub mod CSkeletonAnimationController {
                pub const m_pSkeletonInstance: usize = 0x8; // CSkeletonInstance*
            }
            // Parent: None
            // Field count: 0
            pub mod CNavVolumeMarkupVolume {
            }
            // Parent: None
            // Field count: 2
            pub mod CResponseCriteriaSet {
                pub const m_nNumPrefixedContexts: usize = 0x30; // int32
                pub const m_bOverrideOnAppend: usize = 0x34; // bool
            }
            // Parent: None
            // Field count: 11
            pub mod CAI_Expresser {
                pub const m_flStopTalkTime: usize = 0x60; // GameTime_t
                pub const m_flStopTalkTimeWithoutDelay: usize = 0x64; // GameTime_t
                pub const m_flQueuedSpeechTime: usize = 0x68; // GameTime_t
                pub const m_flBlockedTalkTime: usize = 0x6C; // GameTime_t
                pub const m_voicePitch: usize = 0x70; // int32
                pub const m_flLastTimeAcceptedSpeak: usize = 0x74; // GameTime_t
                pub const m_bAllowSpeakingInterrupts: usize = 0x78; // bool
                pub const m_bConsiderSceneInvolvementAsSpeech: usize = 0x79; // bool
                pub const m_bSceneEntityDisabled: usize = 0x7A; // bool
                pub const m_nLastSpokenPriority: usize = 0x7C; // int32
                pub const m_pOuter: usize = 0x98; // CBaseFlex*
            }
            // Parent: None
            // Field count: 0
            pub mod IChoreoServices {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumerAttributes {
            }
            // Parent: CStopwatchBase
            // Field count: 1
            pub mod CStopwatch {
                pub const m_flInterval: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 3
            pub mod ResponseParams {
                pub const odds: usize = 0x10; // int16
                pub const flags: usize = 0x12; // int16
                pub const m_pFollowup: usize = 0x18; // ResponseFollowup*
            }
            // Parent: None
            // Field count: 8
            pub mod ConstraintSoundInfo {
                pub const m_vSampler: usize = 0x8; // VelocitySampler
                pub const m_soundProfile: usize = 0x20; // SimpleConstraintSoundProfile
                pub const m_forwardAxis: usize = 0x40; // Vector
                pub const m_iszTravelSoundFwd: usize = 0x50; // CUtlSymbolLarge
                pub const m_iszTravelSoundBack: usize = 0x58; // CUtlSymbolLarge
                pub const m_iszReversalSounds: usize = 0x78; // CUtlSymbolLarge[3]
                pub const m_bPlayTravelSound: usize = 0x90; // bool
                pub const m_bPlayReversalSound: usize = 0x91; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPhysicsBodyGameMarkup {
                pub const m_TargetBody: usize = 0x0; // CUtlString
                pub const m_Tag: usize = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PointCameraSettings_t {
                pub const m_flNearBlurryDistance: usize = 0x0; // float32
                pub const m_flNearCrispDistance: usize = 0x4; // float32
                pub const m_flFarCrispDistance: usize = 0x8; // float32
                pub const m_flFarBlurryDistance: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CVectorMovingAverage {
            }
            // Parent: None
            // Field count: 4
            pub mod CSoundEnvelope {
                pub const m_current: usize = 0x0; // float32
                pub const m_target: usize = 0x4; // float32
                pub const m_rate: usize = 0x8; // float32
                pub const m_forceupdate: usize = 0xC; // bool
            }
            // Parent: None
            // Field count: 25
            pub mod dynpitchvol_base_t {
                pub const preset: usize = 0x0; // int32
                pub const pitchrun: usize = 0x4; // int32
                pub const pitchstart: usize = 0x8; // int32
                pub const spinup: usize = 0xC; // int32
                pub const spindown: usize = 0x10; // int32
                pub const volrun: usize = 0x14; // int32
                pub const volstart: usize = 0x18; // int32
                pub const fadein: usize = 0x1C; // int32
                pub const fadeout: usize = 0x20; // int32
                pub const lfotype: usize = 0x24; // int32
                pub const lforate: usize = 0x28; // int32
                pub const lfomodpitch: usize = 0x2C; // int32
                pub const lfomodvol: usize = 0x30; // int32
                pub const cspinup: usize = 0x34; // int32
                pub const cspincount: usize = 0x38; // int32
                pub const pitch: usize = 0x3C; // int32
                pub const spinupsav: usize = 0x40; // int32
                pub const spindownsav: usize = 0x44; // int32
                pub const pitchfrac: usize = 0x48; // int32
                pub const vol: usize = 0x4C; // int32
                pub const fadeinsav: usize = 0x50; // int32
                pub const fadeoutsav: usize = 0x54; // int32
                pub const volfrac: usize = 0x58; // int32
                pub const lfofrac: usize = 0x5C; // int32
                pub const lfomult: usize = 0x60; // int32
            }
            // Parent: CSimpleSimTimer
            // Field count: 1
            pub mod CStopwatchBase {
                pub const m_fIsRunning: usize = 0x8; // bool
            }
            // Parent: None
            // Field count: 1
            pub mod CNavVolumeVector {
                pub const m_bHasBeenPreFiltered: usize = 0x80; // bool
            }
            // Parent: None
            // Field count: 2
            pub mod NavGravity_t {
                pub const m_vGravity: usize = 0x0; // Vector
                pub const m_bDefault: usize = 0xC; // bool
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseScriptedSequenceData_t {
                pub const m_nActorID: usize = 0x0; // int32
                pub const m_szPreIdleSequence: usize = 0x8; // CUtlString
                pub const m_szEntrySequence: usize = 0x10; // CUtlString
                pub const m_szSequence: usize = 0x18; // CUtlString
                pub const m_szExitSequence: usize = 0x20; // CUtlString
                pub const m_nMoveTo: usize = 0x28; // ScriptedMoveTo_t
                pub const m_nMoveToGait: usize = 0x2C; // SharedMovementGait_t
                pub const m_nHeldWeaponBehavior: usize = 0x30; // ScriptedHeldWeaponBehavior_t
                pub const m_bLoopPreIdleSequence: usize = 0x34; // bool
                pub const m_bLoopActionSequence: usize = 0x35; // bool
                pub const m_bLoopPostIdleSequence: usize = 0x36; // bool
                pub const m_bIgnoreLookAt: usize = 0x37; // bool
            }
            // Parent: None
            // Field count: 2
            pub mod RotatorQueueEntry_t {
                pub const qTarget: usize = 0x0; // Quaternion
                pub const eSpace: usize = 0x10; // RotatorTargetSpace_t
            }
            // Parent: None
            // Field count: 1
            pub mod CPhysicsShake {
                pub const m_force: usize = 0x8; // Vector
            }
            // Parent: None
            // Field count: 3
            pub mod VelocitySampler {
                pub const m_prevSample: usize = 0x0; // Vector
                pub const m_fPrevSampleTime: usize = 0xC; // GameTime_t
                pub const m_fIdealSampleRate: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 8
            pub mod CTakeDamageResult {
                pub const m_pOriginatingInfo: usize = 0x0; // CTakeDamageInfo*
                pub const m_nHealthLost: usize = 0x8; // int32
                pub const m_nHealthBefore: usize = 0xC; // int32
                pub const m_nDamageDealt: usize = 0x10; // int32
                pub const m_flPreModifiedDamage: usize = 0x14; // float32
                pub const m_nTotalledHealthLost: usize = 0x18; // int32
                pub const m_nTotalledDamageDealt: usize = 0x1C; // int32
                pub const m_bWasDamageSuppressed: usize = 0x20; // bool
            }
            // Parent: None
            // Field count: 20
            pub mod CCS2WeaponGraphController {
                pub const m_action: usize = 0x80; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_bActionReset: usize = 0xA0; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flWeaponActionSpeedScale: usize = 0xB8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_weaponCategory: usize = 0xD0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_weaponType: usize = 0xF0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_weaponExtraInfo: usize = 0x110; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flWeaponAmmo: usize = 0x130; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flWeaponAmmoMax: usize = 0x148; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flWeaponAmmoReserve: usize = 0x160; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bWeaponIsSilenced: usize = 0x178; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flWeaponIronsightAmount: usize = 0x190; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bIsUsingLegacyModel: usize = 0x1A8; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_idleVariation: usize = 0x1C0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_deployVariation: usize = 0x1D8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_attackType: usize = 0x1F0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_attackThrowStrength: usize = 0x210; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flAttackVariation: usize = 0x228; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_inspectVariation: usize = 0x240; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_inspectExtraInfo: usize = 0x258; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_reloadStage: usize = 0x278; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 1
            pub mod SceneEventId_t {
                pub const m_Value: usize = 0x0; // uint32
            }
            // Parent: None
            // Field count: 10
            pub mod CCommentarySystem {
                pub const m_bCommentaryConvarsChanging: usize = 0x11; // bool
                pub const m_bCommentaryEnabledMidGame: usize = 0x12; // bool
                pub const m_flNextTeleportTime: usize = 0x14; // GameTime_t
                pub const m_iTeleportStage: usize = 0x18; // int32
                pub const m_bCheatState: usize = 0x1C; // bool
                pub const m_bIsFirstSpawnGroupToLoad: usize = 0x1D; // bool
                pub const m_hCurrentNode: usize = 0x38; // CHandle<CPointCommentaryNode>
                pub const m_hActiveCommentaryNode: usize = 0x3C; // CHandle<CPointCommentaryNode>
                pub const m_hLastCommentaryNode: usize = 0x40; // CHandle<CPointCommentaryNode>
                pub const m_vecNodes: usize = 0x48; // CUtlVector<CHandle<CPointCommentaryNode>>
            }
            // Parent: None
            // Field count: 8
            pub mod ResponseFollowup {
                pub const followup_concept: usize = 0x0; // char*
                pub const followup_contexts: usize = 0x8; // char*
                pub const followup_delay: usize = 0x10; // float32
                pub const followup_target: usize = 0x14; // char*
                pub const followup_entityiotarget: usize = 0x1C; // char*
                pub const followup_entityioinput: usize = 0x24; // char*
                pub const followup_entityiodelay: usize = 0x2C; // float32
                pub const bFired: usize = 0x30; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AmmoTypeInfo_t {
                pub const m_nMaxCarry: usize = 0x10; // int32
                pub const m_nSplashSize: usize = 0x1C; // CRangeInt
                pub const m_nFlags: usize = 0x24; // AmmoFlags_t
                pub const m_flMass: usize = 0x28; // float32
                pub const m_flSpeed: usize = 0x2C; // CRangeFloat
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNavLinkAnimgraphVar {
                pub const m_sAnimGraphNavlinkType: usize = 0x0; // CGlobalSymbol
                pub const m_unAlignmentDegrees: usize = 0x8; // uint32
            }
            // Parent: None
            // Field count: 1
            pub mod CNetworkTransmitComponent {
                pub const m_nTransmitStateOwnedCounter: usize = 0x184; // uint8
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNavLinkMovementVData {
                pub const m_sToolsOnlyOwnerModelName: usize = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_bIsInterpolated: usize = 0xE0; // bool
                pub const m_unRecommendedDistance: usize = 0xE4; // uint32
                pub const m_vecAnimgraphVars: usize = 0xE8; // CUtlVector<CNavLinkAnimgraphVar>
            }
            // Parent: None
            // Field count: 5
            pub mod CPathQueryUtil {
                pub const m_PathToEntityTransform: usize = 0x10; // CTransform
                pub const m_vecPathSamplePositions: usize = 0x30; // CUtlVector<Vector>
                pub const m_vecPathSampleParameters: usize = 0x48; // CUtlVector<float32>
                pub const m_vecPathSampleDistances: usize = 0x60; // CUtlVector<float32>
                pub const m_bIsClosedLoop: usize = 0x78; // bool
            }
            // Parent: None
            // Field count: 5
            pub mod RagdollCreationParams_t {
                pub const m_vForce: usize = 0x0; // Vector
                pub const m_nForceBone: usize = 0xC; // int32
                pub const m_bForceCurrentWorldTransform: usize = 0x10; // bool
                pub const m_bUseLRURetirement: usize = 0x11; // bool
                pub const m_nHealthToGrant: usize = 0x14; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CRangeInt {
                pub const m_pValue: usize = 0x0; // int32[2]
            }
            // Parent: None
            // Field count: 2
            pub mod CWorldCompositionChunkReferenceElement_t {
                pub const m_strMapToLoad: usize = 0x0; // CUtlString
                pub const m_strLandmarkName: usize = 0x8; // CUtlString
            }
            // Parent: CStopwatchBase
            // Field count: 2
            pub mod CRandStopwatch {
                pub const m_flMinInterval: usize = 0xC; // float32
                pub const m_flMaxInterval: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 2
            pub mod CMovementStatsProperty {
                pub const m_nUseCounter: usize = 0x10; // int32
                pub const m_emaMovementDirection: usize = 0x14; // CVectorExponentialMovingAverage
            }
            // Parent: None
            // Field count: 5
            pub mod CGameChoreoServices {
                pub const m_hOwner: usize = 0x8; // CHandle<CBaseAnimGraph>
                pub const m_hScriptedSequence: usize = 0xC; // CHandle<CScriptedSequence>
                pub const m_scriptState: usize = 0x10; // IChoreoServices::ScriptState_t
                pub const m_choreoState: usize = 0x14; // IChoreoServices::ChoreoState_t
                pub const m_flTimeStartedState: usize = 0x18; // GameTime_t
            }
            // Parent: None
            // Field count: 0
            pub mod CSimpleStopwatch {
            }
            // Parent: None
            // Field count: 28
            pub mod CShatterGlassShard {
                pub const m_hShardHandle: usize = 0x8; // uint32
                pub const m_vecPanelVertices: usize = 0x10; // CUtlVector<Vector2D>
                pub const m_vLocalPanelSpaceOrigin: usize = 0x28; // Vector2D
                pub const m_hModel: usize = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_hPhysicsEntity: usize = 0x38; // CHandle<CShatterGlassShardPhysics>
                pub const m_hParentPanel: usize = 0x3C; // CHandle<CFuncShatterglass>
                pub const m_hParentShard: usize = 0x40; // uint32
                pub const m_ShatterStressType: usize = 0x44; // ShatterGlassStressType
                pub const m_vecStressVelocity: usize = 0x48; // Vector
                pub const m_bCreatedModel: usize = 0x54; // bool
                pub const m_flLongestEdge: usize = 0x58; // float32
                pub const m_flShortestEdge: usize = 0x5C; // float32
                pub const m_flLongestAcross: usize = 0x60; // float32
                pub const m_flShortestAcross: usize = 0x64; // float32
                pub const m_flSumOfAllEdges: usize = 0x68; // float32
                pub const m_flArea: usize = 0x6C; // float32
                pub const m_nOnFrameEdge: usize = 0x70; // OnFrame
                pub const m_nSubShardGeneration: usize = 0x74; // int32
                pub const m_vecAverageVertPosition: usize = 0x78; // Vector2D
                pub const m_bAverageVertPositionIsValid: usize = 0x80; // bool
                pub const m_vecPanelSpaceStressPositionA: usize = 0x84; // Vector2D
                pub const m_vecPanelSpaceStressPositionB: usize = 0x8C; // Vector2D
                pub const m_bStressPositionAIsValid: usize = 0x94; // bool
                pub const m_bStressPositionBIsValid: usize = 0x95; // bool
                pub const m_bFlaggedForRemoval: usize = 0x96; // bool
                pub const m_flPhysicsEntitySpawnedAtTime: usize = 0x98; // GameTime_t
                pub const m_hEntityHittingMe: usize = 0x9C; // CHandle<CBaseEntity>
                pub const m_vecNeighbors: usize = 0xA0; // CUtlVector<uint32>
            }
            // Parent: None
            // Field count: 4
            pub mod ragdollelement_t {
                pub const originParentSpace: usize = 0x0; // Vector
                pub const parentIndex: usize = 0x20; // int32
                pub const m_flRadius: usize = 0x24; // float32
                pub const m_nHeight: usize = 0x28; // int32
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGameScriptedMoveDef_t {
                pub const m_vDestOffset: usize = 0x0; // Vector
                pub const m_hDestEntity: usize = 0xC; // CHandle<CBaseEntity>
                pub const m_angDest: usize = 0x10; // QAngle
                pub const m_flDuration: usize = 0x1C; // float32
                pub const m_flAngRate: usize = 0x20; // float32
                pub const m_flMoveSpeed: usize = 0x24; // float32
                pub const m_bAimDisabled: usize = 0x28; // bool
                pub const m_bIgnoreRotation: usize = 0x29; // bool
                pub const m_nForcedCrouchState: usize = 0x2C; // ForcedCrouchState_t
            }
            // Parent: None
            // Field count: 7
            pub mod CNetworkOriginCellCoordQuantizedVector {
                pub const m_cellX: usize = 0x10; // uint16
                pub const m_cellY: usize = 0x12; // uint16
                pub const m_cellZ: usize = 0x14; // uint16
                pub const m_nOutsideWorld: usize = 0x16; // uint16
                pub const m_vecX: usize = 0x18; // CNetworkedQuantizedFloat
                pub const m_vecY: usize = 0x20; // CNetworkedQuantizedFloat
                pub const m_vecZ: usize = 0x28; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 8
            pub mod DynamicVolumeDef_t {
                pub const m_source: usize = 0x0; // CHandle<CBaseEntity>
                pub const m_target: usize = 0x4; // CHandle<CBaseEntity>
                pub const m_nHullIdx: usize = 0x8; // int32
                pub const m_vSourceAnchorPos: usize = 0xC; // Vector
                pub const m_vTargetAnchorPos: usize = 0x18; // Vector
                pub const m_nAreaSrc: usize = 0x24; // uint32
                pub const m_nAreaDst: usize = 0x28; // uint32
                pub const m_bAttached: usize = 0x2C; // bool
            }
            // Parent: None
            // Field count: 3
            pub mod CNetworkOriginQuantizedVector {
                pub const m_vecX: usize = 0x10; // CNetworkedQuantizedFloat
                pub const m_vecY: usize = 0x18; // CNetworkedQuantizedFloat
                pub const m_vecZ: usize = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 1
            pub mod magnetted_objects_t {
                pub const hEntity: usize = 0x8; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 3
            pub mod CHintMessageQueue {
                pub const m_tmMessageEnd: usize = 0x0; // float32
                pub const m_messages: usize = 0x8; // CUtlVector<CHintMessage*>
                pub const m_pPlayerController: usize = 0x20; // CBasePlayerController*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSkillInt {
                pub const m_pValue: usize = 0x0; // int32[4]
            }
            // Parent: None
            // Field count: 4
            pub mod thinkfunc_t {
                pub const m_hFn: usize = 0x8; // HSCRIPT
                pub const m_nContext: usize = 0x10; // CUtlStringToken
                pub const m_nNextThinkTick: usize = 0x14; // GameTick_t
                pub const m_nLastThinkTick: usize = 0x18; // GameTick_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNavHullPresetVData {
                pub const m_vecNavHulls: usize = 0x0; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSkillFloat {
                pub const m_pValue: usize = 0x0; // float32[4]
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod WaterWheelFrictionScale_t {
                pub const m_flFractionOfWheelSubmerged: usize = 0x0; // float32
                pub const m_flFrictionScale: usize = 0x4; // float32
            }
            // Parent: None
            // Field count: 2
            pub mod ragdollhierarchyjoint_t {
                pub const parentIndex: usize = 0x0; // int32
                pub const childIndex: usize = 0x4; // int32
            }
            // Parent: None
            // Field count: 13
            pub mod CSceneEventInfo {
                pub const m_iLayer: usize = 0x0; // int32
                pub const m_iPriority: usize = 0x4; // int32
                pub const m_hSequence: usize = 0x8; // HSequence
                pub const m_flWeight: usize = 0xC; // float32
                pub const m_bHasArrived: usize = 0x10; // bool
                pub const m_nType: usize = 0x14; // int32
                pub const m_flNext: usize = 0x18; // GameTime_t
                pub const m_bIsGesture: usize = 0x1C; // bool
                pub const m_bShouldRemove: usize = 0x1D; // bool
                pub const m_hTarget: usize = 0x44; // CHandle<CBaseEntity>
                pub const m_nSceneEventId: usize = 0x48; // SceneEventId_t
                pub const m_bClientSide: usize = 0x4C; // bool
                pub const m_bStarted: usize = 0x4D; // bool
            }
            // Parent: None
            // Field count: 5
            pub mod SoundeventPathCornerPairNetworked_t {
                pub const vP1: usize = 0x0; // Vector
                pub const vP2: usize = 0xC; // Vector
                pub const flPathLengthSqr: usize = 0x18; // float32
                pub const flP1Pct: usize = 0x1C; // float32
                pub const flP2Pct: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 13
            pub mod CSoundPatch {
                pub const m_pitch: usize = 0x8; // CSoundEnvelope
                pub const m_volume: usize = 0x18; // CSoundEnvelope
                pub const m_shutdownTime: usize = 0x3C; // float32
                pub const m_flLastTime: usize = 0x40; // float32
                pub const m_iszSoundScriptName: usize = 0x48; // CUtlSymbolLarge
                pub const m_hEnt: usize = 0x50; // CHandle<CBaseEntity>
                pub const m_soundEntityIndex: usize = 0x54; // CEntityIndex
                pub const m_soundOrigin: usize = 0x58; // Vector
                pub const m_isPlaying: usize = 0x64; // int32
                pub const m_Filter: usize = 0x68; // CCopyRecipientFilter
                pub const m_flCloseCaptionDuration: usize = 0xA0; // float32
                pub const m_bUpdatedSoundOrigin: usize = 0xA4; // bool
                pub const m_iszClassName: usize = 0xA8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 10
            pub mod CCS2ChickenGraphController {
                pub const m_action: usize = 0x80; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_actionSubtype: usize = 0xA0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_bActionReset: usize = 0xC0; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_idleVariation: usize = 0xD8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_runVariation: usize = 0xF0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_panicVariation: usize = 0x108; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_squatVariation: usize = 0x120; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bInWater: usize = 0x138; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_bHasActionCompletedEvent: usize = 0x150; // bool
                pub const m_bWaitingForCompletedEvent: usize = 0x151; // bool
            }
            // Parent: None
            // Field count: 3
            pub mod locksound_t {
                pub const sLockedSound: usize = 0x8; // CUtlSymbolLarge
                pub const sUnlockedSound: usize = 0x10; // CUtlSymbolLarge
                pub const flwaitSound: usize = 0x18; // GameTime_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod DecalGroupOption_t {
                pub const m_hMaterial: usize = 0x0; // CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
                pub const m_sSequenceName: usize = 0x8; // CGlobalSymbol
                pub const m_flProbability: usize = 0x10; // float32
                pub const m_bEnableAngleBetweenNormalAndGravityRange: usize = 0x14; // bool
                pub const m_flMinAngleBetweenNormalAndGravity: usize = 0x18; // float32
                pub const m_flMaxAngleBetweenNormalAndGravity: usize = 0x1C; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CBtNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CFiringModeFloat {
                pub const m_flValues: usize = 0x0; // float32[2]
            }
            // Parent: None
            // Field count: 3
            pub mod CCopyRecipientFilter {
                pub const m_Flags: usize = 0x8; // int32
                pub const m_Recipients: usize = 0x10; // CUtlVector<CPlayerSlot>
                pub const m_slotPlayerExcludedDueToPrediction: usize = 0x30; // CPlayerSlot
            }
            // Parent: None
            // Field count: 0
            pub mod CFloatMovingAverage {
            }
            // Parent: None
            // Field count: 5
            pub mod CSmoothFunc {
                pub const m_flSmoothAmplitude: usize = 0x8; // float32
                pub const m_flSmoothBias: usize = 0xC; // float32
                pub const m_flSmoothDuration: usize = 0x10; // float32
                pub const m_flSmoothRemainingTime: usize = 0x14; // float32
                pub const m_nSmoothDir: usize = 0x18; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod IHasAttributes {
            }
            // Parent: None
            // Field count: 5
            pub mod ragdoll_t {
                pub const list: usize = 0x0; // CUtlVector<ragdollelement_t>
                pub const hierarchyJoints: usize = 0x18; // CUtlVector<ragdollhierarchyjoint_t>
                pub const boneIndex: usize = 0x30; // CUtlVector<int32>
                pub const allowStretch: usize = 0x48; // bool
                pub const unused: usize = 0x49; // bool
            }
            // Parent: None
            // Field count: 10
            pub mod HullFlags_t {
                pub const m_bHull_Human: usize = 0x0; // bool
                pub const m_bHull_SmallCentered: usize = 0x1; // bool
                pub const m_bHull_WideHuman: usize = 0x2; // bool
                pub const m_bHull_Tiny: usize = 0x3; // bool
                pub const m_bHull_Medium: usize = 0x4; // bool
                pub const m_bHull_TinyCentered: usize = 0x5; // bool
                pub const m_bHull_Large: usize = 0x6; // bool
                pub const m_bHull_LargeCentered: usize = 0x7; // bool
                pub const m_bHull_MediumTall: usize = 0x8; // bool
                pub const m_bHull_Small: usize = 0x9; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod ISkeletonAnimationController {
            }
            // Parent: None
            // Field count: 2
            pub mod RotatorHistoryEntry_t {
                pub const qInvChange: usize = 0x0; // Quaternion
                pub const flTimeRotationStart: usize = 0x10; // GameTime_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod GameAmmoTypeInfo_t {
                pub const m_nBuySize: usize = 0x38; // int32
                pub const m_nCost: usize = 0x3C; // int32
            }
            // Parent: None
            // Field count: 4
            pub mod CMotorController {
                pub const m_speed: usize = 0x8; // float32
                pub const m_maxTorque: usize = 0xC; // float32
                pub const m_axis: usize = 0x10; // VectorWS
                pub const m_inertiaFactor: usize = 0x1C; // float32
            }
            // Parent: CSimpleSimTimer
            // Field count: 1
            pub mod CSimTimer {
                pub const m_flInterval: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 6
            pub mod CBaseIssue {
                pub const m_szTypeString: usize = 0x20; // char[64]
                pub const m_szDetailsString: usize = 0x60; // char[260]
                pub const m_iNumYesVotes: usize = 0x164; // int32
                pub const m_iNumNoVotes: usize = 0x168; // int32
                pub const m_iNumPotentialVotes: usize = 0x16C; // int32
                pub const m_pVoteController: usize = 0x170; // CVoteController*
            }
            // Parent: None
            // Field count: 4
            pub mod SummaryTakeDamageInfo_t {
                pub const nSummarisedCount: usize = 0x0; // int32
                pub const info: usize = 0x8; // CTakeDamageInfo
                pub const result: usize = 0x130; // CTakeDamageResult
                pub const hTarget: usize = 0x158; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 2
            pub mod DestructibleHitGroupToDestroy_t {
                pub const m_nHitGroup: usize = 0x0; // HitGroup_t
                pub const m_nMaxDamageLevel: usize = 0x4; // int32
            }
            // Parent: None
            // Field count: 10
            pub mod CRR_Response {
                pub const m_Type: usize = 0x0; // uint8
                pub const m_szResponseName: usize = 0x1; // char[192]
                pub const m_szMatchingRule: usize = 0xC1; // char[128]
                pub const m_Params: usize = 0x160; // ResponseParams
                pub const m_fMatchScore: usize = 0x180; // float32
                pub const m_bAnyMatchingRulesInCooldown: usize = 0x184; // bool
                pub const m_szSpeakerContext: usize = 0x188; // char*
                pub const m_szWorldContext: usize = 0x190; // char*
                pub const m_Followup: usize = 0x198; // ResponseFollowup
                pub const m_recipientFilter: usize = 0x1CA; // CUtlSymbol
            }
            // Parent: None
            // Field count: 0
            pub mod CVectorExponentialMovingAverage {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmAimCSNode__CDefinition {
                pub const m_nVerticalAngleNodeIdx: usize = 0x18; // int16
                pub const m_nHorizontalAngleNodeIdx: usize = 0x1A; // int16
                pub const m_nWeaponCategoryNodeIdx: usize = 0x1C; // int16
                pub const m_nEnabledNodeIdx: usize = 0x1E; // int16
                pub const m_flBlendTimeSeconds: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 4
            pub mod CConstantForceController {
                pub const m_linear: usize = 0xC; // Vector
                pub const m_angular: usize = 0x18; // RotationVector
                pub const m_linearSave: usize = 0x24; // Vector
                pub const m_angularSave: usize = 0x30; // RotationVector
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod WaterWheelDrag_t {
                pub const m_flFractionOfWheelSubmerged: usize = 0x0; // float32
                pub const m_flWheelDrag: usize = 0x4; // float32
            }
            // Parent: None
            // Field count: 22
            pub mod CTakeDamageInfo {
                pub const m_vecDamageForce: usize = 0x8; // Vector
                pub const m_vecDamagePosition: usize = 0x14; // VectorWS
                pub const m_vecReportedPosition: usize = 0x20; // VectorWS
                pub const m_vecDamageDirection: usize = 0x2C; // Vector
                pub const m_hInflictor: usize = 0x38; // CHandle<CBaseEntity>
                pub const m_hAttacker: usize = 0x3C; // CHandle<CBaseEntity>
                pub const m_hAbility: usize = 0x40; // CHandle<CBaseEntity>
                pub const m_flDamage: usize = 0x44; // float32
                pub const m_flTotalledDamage: usize = 0x48; // float32
                pub const m_bitsDamageType: usize = 0x4C; // DamageTypes_t
                pub const m_iDamageCustom: usize = 0x50; // int32
                pub const m_iAmmoType: usize = 0x54; // AmmoIndex_t
                pub const m_flOriginalDamage: usize = 0x60; // float32
                pub const m_bShouldBleed: usize = 0x64; // bool
                pub const m_bShouldSpark: usize = 0x65; // bool
                pub const m_nDamageFlags: usize = 0x70; // TakeDamageFlags_t
                pub const m_sDamageSourceName: usize = 0x78; // CGlobalSymbol
                pub const m_iHitGroupId: usize = 0x80; // HitGroup_t
                pub const m_nNumObjectsPenetrated: usize = 0x84; // int32
                pub const m_flFriendlyFireDamageReductionRatio: usize = 0x88; // float32
                pub const m_nDestructibleHitGroupsToForceDestroy: usize = 0x108; // CUtlVector<DestructibleHitGroupToDestroy_t>
                pub const m_bInTakeDamageFlow: usize = 0x120; // bool
            }
            // Parent: CSimpleSimTimer
            // Field count: 2
            pub mod CRandSimTimer {
                pub const m_flMinInterval: usize = 0x8; // float32
                pub const m_flMaxInterval: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CBtNodeComposite {
            }
            // Parent: None
            // Field count: 4
            pub mod CRelativeLocation {
                pub const m_Type: usize = 0x18; // RelativeLocationType_t
                pub const m_vRelativeOffset: usize = 0x1C; // Vector
                pub const m_vWorldSpacePos: usize = 0x28; // VectorWS
                pub const m_hEntity: usize = 0x34; // CHandle<CBaseEntity>
            }
            // Parent: None
            // Field count: 2
            pub mod Extent {
                pub const lo: usize = 0x0; // VectorWS
                pub const hi: usize = 0xC; // VectorWS
            }
            // Parent: None
            // Field count: 5
            pub mod sndopvarlatchdata_t {
                pub const m_iszStack: usize = 0x8; // CUtlSymbolLarge
                pub const m_iszOperator: usize = 0x10; // CUtlSymbolLarge
                pub const m_iszOpvar: usize = 0x18; // CUtlSymbolLarge
                pub const m_flVal: usize = 0x20; // float32
                pub const m_vPos: usize = 0x24; // Vector
            }
            // Parent: None
            // Field count: 0
            pub mod IEconItemInterface {
            }
            // Parent: None
            // Field count: 1
            pub mod CMultiplayer_Expresser {
                pub const m_bAllowMultipleScenes: usize = 0xA0; // bool
            }
            // Parent: None
            // Field count: 15
            pub mod CBaseAnimGraphAnimGraphController {
                pub const m_sDestructiblePartDestroyedHitGroup: usize = 0x80; // CAnimGraphParamOptionalRef<CGlobalSymbol>
                pub const m_nDestructiblePartDestroyedPartIndex: usize = 0xA8; // CAnimGraphParamOptionalRef<int32>
                pub const m_bHITGROUP_INVALID_Destroyed: usize = 0xC8; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_GENERIC_Destroyed: usize = 0xE8; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_HEAD_Destroyed: usize = 0x108; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_CHEST_Destroyed: usize = 0x128; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_STOMACH_Destroyed: usize = 0x148; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_LEFTARM_Destroyed: usize = 0x168; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_RIGHTARM_Destroyed: usize = 0x188; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_LEFTLEG_Destroyed: usize = 0x1A8; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_RIGHTLEG_Destroyed: usize = 0x1C8; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_NECK_Destroyed: usize = 0x1E8; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_UNUSED_Destroyed: usize = 0x208; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_GEAR_Destroyed: usize = 0x228; // CAnimGraphParamOptionalRef<bool>
                pub const m_bHITGROUP_SPECIAL_Destroyed: usize = 0x248; // CAnimGraphParamOptionalRef<bool>
            }
            // Parent: None
            // Field count: 0
            pub mod CNavVolume {
            }
            // Parent: None
            // Field count: 0
            pub mod QuestProgress {
            }
            // Parent: None
            // Field count: 0
            pub mod CNmAimCSTask {
            }
            // Parent: None
            // Field count: 1
            pub mod ParticleIndex_t {
                pub const m_Value: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod CAI_ExpresserWithFollowup {
            }
            // Parent: None
            // Field count: 1
            pub mod CTakeDamageSummaryScopeGuard {
                pub const m_vecSummaries: usize = 0x8; // CUtlVector<SummaryTakeDamageInfo_t*>
            }
            // Parent: None
            // Field count: 4
            pub mod CIronSightController {
                pub const m_bIronSightAvailable: usize = 0x8; // bool
                pub const m_flIronSightAmount: usize = 0xC; // float32
                pub const m_flIronSightAmountGained: usize = 0x10; // float32
                pub const m_flIronSightAmountBiased: usize = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumerSound {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumerLegacy {
            }
            // Parent: None
            // Field count: 1
            pub mod CInButtonState {
                pub const m_pButtonStates: usize = 0x8; // uint64[3]
            }
            // Parent: None
            // Field count: 3
            pub mod ServerAuthoritativeWeaponSlot_t {
                pub const unClass: usize = 0x30; // uint16
                pub const unSlot: usize = 0x32; // uint16
                pub const unItemDefIdx: usize = 0x34; // uint16
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumerParticle {
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNavHullVData {
                pub const m_bAgentEnabled: usize = 0x0; // bool
                pub const m_agentRadius: usize = 0x4; // float32
                pub const m_agentHeight: usize = 0x8; // float32
                pub const m_agentShortHeightEnabled: usize = 0xC; // bool
                pub const m_agentShortHeight: usize = 0x10; // float32
                pub const m_agentCrawlEnabled: usize = 0x14; // bool
                pub const m_agentCrawlHeight: usize = 0x18; // float32
                pub const m_agentMaxClimb: usize = 0x1C; // float32
                pub const m_agentMaxSlope: usize = 0x20; // int32
                pub const m_agentMaxJumpDownDist: usize = 0x24; // float32
                pub const m_agentMaxJumpHorizDistBase: usize = 0x28; // float32
                pub const m_agentMaxJumpUpDist: usize = 0x2C; // float32
                pub const m_agentBorderErosion: usize = 0x30; // int32
                pub const m_flowMapGenerationEnabled: usize = 0x34; // bool
                pub const m_flowMapNodeMaxRadius: usize = 0x38; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmSnapWeaponNode__CDefinition {
                pub const m_nEnabledNodeIdx: usize = 0x18; // int16
                pub const m_nLockLeftHandNodeIdx: usize = 0x1A; // int16
                pub const m_flBlendTimeSeconds: usize = 0x1C; // float32
            }
            // Parent: None
            // Field count: 3
            pub mod SoundOpvarTraceResult_t {
                pub const vPos: usize = 0x0; // Vector
                pub const bDidHit: usize = 0xC; // bool
                pub const flDistSqrToCenter: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CAnimEventListener {
            }
            // Parent: None
            // Field count: 0
            pub mod CNavVolumeCalculatedVector {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CFiringModeInt {
                pub const m_nValues: usize = 0x0; // int32[2]
            }
            // Parent: None
            // Field count: 0
            pub mod CBtNodeDecorator {
            }
            // Parent: None
            // Field count: 6
            pub mod CSAdditionalPerRoundStats_t {
                pub const m_numChickensKilled: usize = 0x0; // int32
                pub const m_killsWhileBlind: usize = 0x4; // int32
                pub const m_bombCarrierkills: usize = 0x8; // int32
                pub const m_flBurnDamageInflicted: usize = 0xC; // float32
                pub const m_flBlastDamageInflicted: usize = 0x10; // float32
                pub const m_iDinks: usize = 0x14; // int32
            }
            // Parent: None
            // Field count: 1
            pub mod ModelConfigHandle_t {
                pub const m_Value: usize = 0x0; // uint32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MVDataOverlayType
            pub mod CEntitySubclassVDataBase {
            }
            // Parent: None
            // Field count: 2
            pub mod CBreakableStageHelper {
                pub const m_nCurrentStage: usize = 0x8; // int32
                pub const m_nStageCount: usize = 0xC; // int32
            }
            // Parent: None
            // Field count: 2
            pub mod CNavVolumeBreadthFirstSearch {
                pub const m_vStartPos: usize = 0xA8; // Vector
                pub const m_flSearchDist: usize = 0xB4; // float32
            }
            // Parent: dynpitchvol_base_t
            // Field count: 0
            pub mod dynpitchvol_t {
            }
            // Parent: None
            // Field count: 12
            pub mod CSAdditionalMatchStats_t {
                pub const m_numRoundsSurvived: usize = 0x18; // int32
                pub const m_maxNumRoundsSurvived: usize = 0x1C; // int32
                pub const m_numRoundsSurvivedTotal: usize = 0x20; // int32
                pub const m_iRoundsWonWithoutPurchase: usize = 0x24; // int32
                pub const m_iRoundsWonWithoutPurchaseTotal: usize = 0x28; // int32
                pub const m_numFirstKills: usize = 0x2C; // int32
                pub const m_numClutchKills: usize = 0x30; // int32
                pub const m_numPistolKills: usize = 0x34; // int32
                pub const m_numSniperKills: usize = 0x38; // int32
                pub const m_iNumSuicides: usize = 0x3C; // int32
                pub const m_iNumTeamKills: usize = 0x40; // int32
                pub const m_flTeamDamage: usize = 0x44; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod IRagdoll {
            }
            // Parent: None
            // Field count: 6
            pub mod hudtextparms_t {
                pub const color1: usize = 0x0; // Color
                pub const color2: usize = 0x4; // Color
                pub const effect: usize = 0x8; // uint8
                pub const channel: usize = 0x9; // uint8
                pub const x: usize = 0xC; // float32
                pub const y: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod CAnimGraphControllerBase {
                pub const m_vecParamsToResetInPostGraphUpdate: usize = 0x28; // CUtlVectorFixedGrowable<CGlobalSymbol,8>
            }
            // Parent: None
            // Field count: 3
            pub mod CNetworkVelocityVector {
                pub const m_vecX: usize = 0x10; // CNetworkedQuantizedFloat
                pub const m_vecY: usize = 0x18; // CNetworkedQuantizedFloat
                pub const m_vecZ: usize = 0x20; // CNetworkedQuantizedFloat
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDestructiblePart_DamageLevel {
                pub const m_sName: usize = 0x0; // CUtlString
                pub const m_sBreakablePieceName: usize = 0x8; // CGlobalSymbol
                pub const m_nBodyGroupValue: usize = 0x10; // int32
                pub const m_nHealth: usize = 0x14; // CSkillInt
                pub const m_flCriticalDamagePercent: usize = 0x24; // float32
                pub const m_nDamagePassthroughType: usize = 0x28; // EDestructiblePartDamagePassThroughType
                pub const m_nDestructionDeathBehavior: usize = 0x2C; // DestructiblePartDestructionDeathBehavior_t
                pub const m_sCustomDeathHandshake: usize = 0x30; // CGlobalSymbol
                pub const m_bShouldDestroyOnDeath: usize = 0x38; // bool
                pub const m_flDeathDestroyTime: usize = 0x3C; // CRangeFloat
            }
            // Parent: None
            // Field count: 0
            pub mod CNavVolumeAll {
            }
            // Parent: None
            // Field count: 2
            pub mod CNavVolumeSphere {
                pub const m_vCenter: usize = 0x78; // Vector
                pub const m_flRadius: usize = 0x84; // float32
            }
            // Parent: None
            // Field count: 2
            pub mod Relationship_t {
                pub const disposition: usize = 0x0; // Disposition_t
                pub const priority: usize = 0x4; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod position {
            }
            // Parent: None
            // Field count: 0
            pub mod ______ {
            }
            // Parent: ______
            // Field count: 569
            pub mod _ {
                pub const : usize = 0x48FFFFFF; // 
                pub const : usize = 0xD8D48B8; // 
                pub const : usize = 0x480B75C0; // 
                pub const : usize = 0x5A0FF3CE; // 
                pub const : usize = 0x2F3840F7; // 
                pub const : usize = 0x8B56EBDE; // 
                pub const : usize = 0xD8D48FF; // 
                pub const : usize = 0x4AF1CC; // 
                pub const : usize = 0x31F97315; // 
                pub const : usize = 0x7A830675; // 
                pub const : usize = 0x8B483F74; // 
                pub const : usize = 0x48088B48; // 
                pub const : usize = 0xFD8B4806; // 
                pub const : usize = 0xE0BA0F12; // 
                pub const : usize = 0xC824948D; // 
                pub const : usize = 0x48004AF1; // 
                pub const : usize = 0xF17E0F49; // 
                pub const : usize = 0xBE8D4924; // 
                pub const : usize = 0x280F4400; // 
                pub const : usize = 0x8B4C0000; // 
                pub const : usize = 0x850FF01; // 
                pub const : usize = 0x6630244C; // 
                pub const : usize = 0xC16F0F66; // 
                pub const : usize = 0xC1FF4808; // 
                pub const : usize = 0x197C0098; // 
                pub const : usize = 0x6690104F; // 
                pub const : usize = 0xF663024; // 
                pub const : usize = 0x48F0CA7E; // 
                pub const : usize = 0x8B480000; // 
                pub const : usize = 0x85480000; // 
                pub const : usize = 0x55C48B48; // 
                pub const : usize = 0x593A158D; // 
                pub const : usize = 0x682444C7; // 
                pub const : usize = 0x100FF270; // 
                pub const : usize = 0x8B490045; // 
                pub const : usize = 0x908D8D49; // 
                pub const : usize = 0xFD08B48; // 
                pub const : usize = 0x840031F7; // 
                pub const : usize = 0x45CC0174; // 
                pub const : usize = 0x8148D43; // 
                pub const : usize = 0x8B44C044; // 
                pub const : usize = 0x634BE8; // 
                pub const : usize = 0x2C4BCBE8; // 
                pub const : usize = 0x4008E0F; // 
                pub const : usize = 0x48004AEE; // 
                pub const : usize = 0x4C000000; // 
                pub const : usize = 0x8944FFFF; // 
                pub const : usize = 0x68B58B4D; // 
                pub const : usize = 0x448D4808; // 
                pub const : usize = 0x458B0000; // 
                pub const : usize = 0x45110FF2; // 
                pub const : usize = 0xF41F248; // 
                pub const : usize = 0x48C6FF14; // 
                pub const : usize = 0xC68B4C00; // 
                pub const : usize = 0xF13215FF; // 
                pub const : usize = 0x2B860F7F; // 
                pub const : usize = 0xF284; // 
                pub const : usize = 0xD1840F; // 
                pub const : usize = 0xFF81410D; // 
                pub const : usize = 0xCB8B0000; // 
                pub const : usize = 0x8BC68B44; // 
                pub const : usize = 0x33048D0E; // 
                pub const : usize = 0x4DC2940F; // 
                pub const : usize = 0xFF3345FC; // 
                pub const : usize = 0xF03B441F; // 
                pub const : usize = 0xC48B4D42; // 
                pub const : usize = 0x460; // 
                pub const : usize = 0x4806B70F; // 
                pub const : usize = 0x8B444824; // 
                pub const : usize = 0x4AEAE305; // 
                pub const : usize = 0x4AEA4C; // 
                pub const : usize = 0x4AEA2B0D; // 
                pub const : usize = 0x480031EF; // 
                pub const : usize = 0x85483775; // 
                pub const : usize = 0x8548FF33; // 
                pub const : usize = 0x74DAE840; // 
                pub const : usize = 0x480B75C0; // 
                pub const : usize = 0xF0450F4C; // 
                pub const : usize = 0xFFBF0000; // 
                pub const : usize = 0x36870FC7; // 
                pub const : usize = 0x1E0; // 
                pub const : usize = 0xBA0F1272; // 
                pub const : usize = 0x50558D48; // 
                pub const : usize = 0x2DB3EC; // 
                pub const : usize = 0x830A750C; // 
                pub const : usize = 0x10890FF; // 
                pub const : usize = 0xFFC88B48; // 
                pub const : usize = 0x446630B7; // 
                pub const : usize = 0x32EAE805; // 
                pub const : usize = 0x15FF004A; // 
                pub const : usize = 0x49003935; // 
                pub const : usize = 0x4FEB0039; // 
                pub const : usize = 0x8D48FFFE; // 
                pub const : usize = 0x31EFCC; // 
                pub const : usize = 0x894CDE28; // 
                pub const : usize = 0xFF334580; // 
                pub const : usize = 0xC2FF3024; // 
                pub const : usize = 0x280F7824; // 
                pub const : usize = 0x110; // 
                pub const : usize = 0x4C000004; // 
                pub const : usize = 0x8148D7FF; // 
                pub const : usize = 0x20247C89; // 
                pub const : usize = 0x8B48F68B; // 
                pub const : usize = 0xC7FF0000; // 
                pub const : usize = 0x50FF018B; // 
                pub const : usize = 0x3046110F; // 
                pub const : usize = 0x4101B141; // 
                pub const : usize = 0x9115FFD5; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x31EA64; // 
                pub const : usize = 0x15FFC58B; // 
                pub const : usize = 0x992F048D; // 
                pub const : usize = 0x5DC83F7; // 
                pub const : usize = 0xDC838B00; // 
                pub const : usize = 0x5C883; // 
                pub const : usize = 0x58247C8B; // 
                pub const : usize = 0x8B4CF28B; // 
                pub const : usize = 0x80C0FF48; // 
                pub const : usize = 0xA4894C28; // 
                pub const : usize = 0xB20031EA; // 
                pub const : usize = 0x5CB20031; // 
                pub const : usize = 0x8B4C284D; // 
                pub const : usize = 0x15FFE84D; // 
                pub const : usize = 0x48C0458D; // 
                pub const : usize = 0x48B8458B; // 
                pub const : usize = 0x24A48B4C; // 
                pub const : usize = 0x7F; // 
                pub const : usize = 0x5AC; // 
                pub const : usize = 0x48C80348; // 
                pub const : usize = 0x4CC78B44; // 
                pub const : usize = 0x481850FF; // 
                pub const : usize = 0xA024BC; // 
                pub const : usize = 0x450EC81; // 
                pub const : usize = 0xC7C03345; // 
                pub const : usize = 0xFF202444; // 
                pub const : usize = 0x54894844; // 
                pub const : usize = 0x767FFFFF; // 
                pub const : usize = 0x74894450; // 
                pub const : usize = 0xEEB3824; // 
                pub const : usize = 0x31E8DC; // 
                pub const : usize = 0x710D8B48; // 
                pub const : usize = 0x50FF1314; // 
                pub const : usize = 0x47024; // 
                pub const : usize = 0xD1058B48; // 
                pub const : usize = 0x4C8D4844; // 
                pub const : usize = 0x245C8948; // 
                pub const : usize = 0x48000080; // 
                pub const : usize = 0x80702484; // 
                pub const : usize = 0x48FFFD84; // 
                pub const : usize = 0x48000005; // 
                pub const : usize = 0x8B480000; // 
                pub const : usize = 0xE66A15FF; // 
                pub const : usize = 0x15FFCF8B; // 
                pub const : usize = 0x53C48B48; // 
                pub const : usize = 0xC7480000; // 
                pub const : usize = 0x10688948; // 
                pub const : usize = 0xE6A215FF; // 
                pub const : usize = 0xE8868B48; // 
                pub const : usize = 0xFFFFA912; // 
                pub const : usize = 0x1850FF01; // 
                pub const : usize = 0xA912EB28; // 
                pub const : usize = 0x244C8B00; // 
                pub const : usize = 0x2CFA3D8D; // 
                pub const : usize = 0x48038B48; // 
                pub const : usize = 0xD08B4810; // 
                pub const : usize = 0x90FFCE8B; // 
                pub const : usize = 0x8D483FFF; // 
                pub const : usize = 0x2024548D; // 
                pub const : usize = 0x5C8; // 
                pub const : usize = 0x8B480000; // 
                pub const : usize = 0x20BA03; // 
                pub const : usize = 0xB70F2374; // 
                pub const : usize = 0x89480039; // 
                pub const : usize = 0xD233D7FF; // 
                pub const : usize = 0xB8818B48; // 
                pub const : usize = 0x30818B48; // 
                pub const : usize = 0x245C8948; // 
                pub const : usize = 0x290B18D; // 
                pub const : usize = 0x48E84589; // 
                pub const : usize = 0xFF000002; // 
                pub const : usize = 0x8B48C803; // 
                pub const : usize = 0xC08548C0; // 
                pub const : usize = 0x392A7B15; // 
                pub const : usize = 0xE21215FF; // 
                pub const : usize = 0xC9E8084E; // 
                pub const : usize = 0x74C08400; // 
                pub const : usize = 0x49E8C845; // 
                pub const : usize = 0xFF204D8D; // 
                pub const : usize = 0x48DC8B4C; // 
                pub const : usize = 0x8949E843; // 
                pub const : usize = 0xFFFD7D3C; // 
                pub const : usize = 0x8B7FFFFF; // 
                pub const : usize = 0x31DFDC; // 
                pub const : usize = 0x48047418; // 
                pub const : usize = 0x48FF8548; // 
                pub const : usize = 0x49DC8B4C; // 
                pub const : usize = 0x8949E043; // 
                pub const : usize = 0x85480450; // 
                pub const : usize = 0x7EBC933; // 
                pub const : usize = 0x48C98548; // 
                pub const : usize = 0xA0FF4800; // 
                pub const : usize = 0x48DA8B48; // 
                pub const : usize = 0x74F08141; // 
                pub const : usize = 0x95096941; // 
                pub const : usize = 0x8349C233; // 
                pub const : usize = 0xF41C033; // 
                pub const : usize = 0xDE8C1D3; // 
                pub const : usize = 0x1115FF00; // 
                pub const : usize = 0xCCCCCC00; // 
                pub const : usize = 0x302444; // 
                pub const : usize = 0x8B480000; // 
                pub const : usize = 0x80C2FF48; // 
                pub const : usize = 0xC28B4102; // 
                pub const : usize = 0xC88B5BD1; // 
                pub const : usize = 0xFA831074; // 
                pub const : usize = 0xC1334100; // 
                pub const : usize = 0xC1C18B5B; // 
                pub const : usize = 0x402444C7; // 
                pub const : usize = 0x44C74800; // 
                pub const : usize = 0x1874D285; // 
                pub const : usize = 0x45003925; // 
                pub const : usize = 0x30244C8D; // 
                pub const : usize = 0x8B480031; // 
                pub const : usize = 0xC0818B48; // 
                pub const : usize = 0x245C8948; // 
                pub const : usize = 0x15FF304F; // 
                pub const : usize = 0x50FF018B; // 
                pub const : usize = 0x7E0F4866; // 
                pub const : usize = 0x4866D88B; // 
                pub const : usize = 0x8948C5FF; // 
                pub const : usize = 0x15FF0039; // 
                pub const : usize = 0xF668E75; // 
                pub const : usize = 0x730F66C1; // 
                pub const : usize = 0xFFF02824; // 
                pub const : usize = 0x245C8948; // 
                pub const : usize = 0x840FC085; // 
                pub const : usize = 0xB8411A74; // 
                pub const : usize = 0x8D480000; // 
                pub const : usize = 0x5915FFCB; // 
                pub const : usize = 0x30249C8B; // 
                pub const : usize = 0xCCC35F00; // 
                pub const : usize = 0x8B4800; // 
                pub const : usize = 0xE6840FFA; // 
                pub const : usize = 0x840F0038; // 
                pub const : usize = 0x93840F01; // 
                pub const : usize = 0x8B480039; // 
                pub const : usize = 0x79358D48; // 
                pub const : usize = 0xD8BA15FF; // 
                pub const : usize = 0x708B4800; // 
                pub const : usize = 0xE8D38B00; // 
                pub const : usize = 0x89C48B48; // 
                pub const : usize = 0x8948C28B; // 
                pub const : usize = 0xBC8948F9; // 
                pub const : usize = 0xFFC93301; // 
                pub const : usize = 0x858B7; // 
                pub const : usize = 0x7FFFFFFF; // 
                pub const : usize = 0xCCEBF08B; // 
                pub const : usize = 0x63480855; // 
                pub const : usize = 0xC384; // 
                pub const : usize = 0x9B850F; // 
                pub const : usize = 0xFFE28101; // 
                pub const : usize = 0xFF830E75; // 
                pub const : usize = 0xA8248C; // 
                pub const : usize = 0x31D714; // 
                pub const : usize = 0xC4FF41F8; // 
                pub const : usize = 0xFFFEEB85; // 
                pub const : usize = 0x48CF8B4D; // 
                pub const : usize = 0xD6FA15FF; // 
                pub const : usize = 0x410D8D48; // 
                pub const : usize = 0x3166258D; // 
                pub const : usize = 0xFFFF0000; // 
                pub const : usize = 0x8D480134; // 
                pub const : usize = 0x4C202444; // 
                pub const : usize = 0x8B56EB00; // 
                pub const : usize = 0xD8D48FF; // 
                pub const : usize = 0x4AD04C; // 
                pub const : usize = 0x4800397C; // 
                pub const : usize = 0x15FFD445; // 
                pub const : usize = 0x4C8D480B; // 
                pub const : usize = 0x8B440000; // 
                pub const : usize = 0x4CC00000; // 
                pub const : usize = 0x48317578; // 
                pub const : usize = 0x8B481274; // 
                pub const : usize = 0x245C8948; // 
                pub const : usize = 0x33C0048D; // 
                pub const : usize = 0xD18B48F8; // 
                pub const : usize = 0x75F53B66; // 
                pub const : usize = 0xE8057501; // 
                pub const : usize = 0x4ACEAB0D; // 
                pub const : usize = 0x58B5074; // 
                pub const : usize = 0xC90D8D48; // 
                pub const : usize = 0x480031D7; // 
                pub const : usize = 0xC140245C; // 
                pub const : usize = 0xB9411068; // 
                pub const : usize = 0xF18B4C00; // 
                pub const : usize = 0x8D4CF633; // 
                pub const : usize = 0xF40FD83; // 
                pub const : usize = 0xFFCD8B44; // 
                pub const : usize = 0x678968B; // 
                pub const : usize = 0x9915FF30; // 
                pub const : usize = 0x713D8D48; // 
                pub const : usize = 0x248C8B48; // 
                pub const : usize = 0x397954; // 
                pub const : usize = 0x2E6BE8; // 
                pub const : usize = 0xFEFA8C0F; // 
                pub const : usize = 0x48000000; // 
                pub const : usize = 0x48308840; // 
                pub const : usize = 0x15FF0039; // 
                pub const : usize = 0x201D0; // 
                pub const : usize = 0xFF003978; // 
                pub const : usize = 0x41565540; // 
                pub const : usize = 0x8C8D4800; // 
                pub const : usize = 0x330031D7; // 
                pub const : usize = 0x2474894C; // 
                pub const : usize = 0x24948D48; // 
                pub const : usize = 0x548D4800; // 
                pub const : usize = 0x8C8B4800; // 
                pub const : usize = 0xFF008B4C; // 
                pub const : usize = 0xC7484024; // 
                pub const : usize = 0x48000000; // 
                pub const : usize = 0x28247C89; // 
                pub const : usize = 0xC0; // 
                pub const : usize = 0x4808408B; // 
                pub const : usize = 0xD0FF41D3; // 
                pub const : usize = 0x46F70000; // 
                pub const : usize = 0x31CF6315; // 
                pub const : usize = 0x8B0031CF; // 
                pub const : usize = 0x993B048D; // 
                pub const : usize = 0xC3634CC0; // 
                pub const : usize = 0x3FFFFFFF; // 
                pub const : usize = 0xC0248C8D; // 
                pub const : usize = 0xFF0031D6; // 
                pub const : usize = 0x24BC8B48; // 
                pub const : usize = 0x24548948; // 
                pub const : usize = 0xFFFFFFA9; // 
                pub const : usize = 0x31CDF4; // 
                pub const : usize = 0x4808478B; // 
                pub const : usize = 0x24548948; // 
                pub const : usize = 0x448D4C08; // 
                pub const : usize = 0x245C8948; // 
                pub const : usize = 0x41C71079; // 
                pub const : usize = 0xCF6A15FF; // 
                pub const : usize = 0x58B4818; // 
                pub const : usize = 0x63894404; // 
                pub const : usize = 0x538B4800; // 
                pub const : usize = 0x2C638944; // 
                pub const : usize = 0x31CC7305; // 
                pub const : usize = 0x24748B48; // 
                pub const : usize = 0x245C8948; // 
                pub const : usize = 0x74FFFF83; // 
                pub const : usize = 0xC74FFFA; // 
                pub const : usize = 0xD1058B48; // 
                pub const : usize = 0xA9E8084B; // 
                pub const : usize = 0x890C438B; // 
                pub const : usize = 0x8B48088B; // 
                pub const : usize = 0xC35F20C4; // 
                pub const : usize = 0x8D4C1071; // 
                pub const : usize = 0x24B4894C; // 
                pub const : usize = 0x48000000; // 
                pub const : usize = 0x88B4890; // 
                pub const : usize = 0x4C01498D; // 
                pub const : usize = 0xC27E0F48; // 
                pub const : usize = 0x8B4C014A; // 
                pub const : usize = 0xF0C27E0F; // 
                pub const : usize = 0x58894D20; // 
                pub const : usize = 0x8D48FFFF; // 
                pub const : usize = 0xF10D8B48; // 
                pub const : usize = 0x8B48DE75; // 
                pub const : usize = 0x8948304F; // 
                pub const : usize = 0x56555340; // 
                pub const : usize = 0x24BC8948; // 
                pub const : usize = 0x24848B48; // 
                pub const : usize = 0x24848B48; // 
                pub const : usize = 0x8B490000; // 
                pub const : usize = 0x24447F0F; // 
                pub const : usize = 0xE9382454; // 
                pub const : usize = 0x66084B10; // 
                pub const : usize = 0x24548948; // 
                pub const : usize = 0x8B490031; // 
                pub const : usize = 0x1F0F3074; // 
                pub const : usize = 0x481853FF; // 
                pub const : usize = 0x8949185F; // 
                pub const : usize = 0xFF485B5D; // 
                pub const : usize = 0x24448D4C; // 
                pub const : usize = 0x8B484914; // 
                pub const : usize = 0x490F8B48; // 
                pub const : usize = 0x4EBC033; // 
                pub const : usize = 0xCCCCCCC3; // 
                pub const : usize = 0x76BE8; // 
                pub const : usize = 0x245C8948; // 
                pub const : usize = 0x8B480000; // 
                pub const : usize = 0x3934EB0D; // 
                pub const : usize = 0x49068B49; // 
                pub const : usize = 0x1008A; // 
                pub const : usize = 0x48038948; // 
                pub const : usize = 0xC748C78B; // 
                pub const : usize = 0x1C748; // 
                pub const : usize = 0x2024; // 
                pub const : usize = 0x48004AAD; // 
                pub const : usize = 0x890D8D48; // 
                pub const : usize = 0x24448948; // 
                pub const : usize = 0x60245C8B; // 
                pub const : usize = 0x245C894C; // 
                pub const : usize = 0x24448B48; // 
                pub const : usize = 0x20244489; // 
                pub const : usize = 0x4894C39; // 
                pub const : usize = 0x8D8730F; // 
                pub const : usize = 0x14A8D48; // 
                pub const : usize = 0x49F0C27E; // 
                pub const : usize = 0xC08B4920; // 
                pub const : usize = 0xCCCCC35B; // 
                pub const : usize = 0x4C10598D; // 
                pub const : usize = 0x24448B48; // 
                pub const : usize = 0x20244489; // 
                pub const : usize = 0x4894C39; // 
                pub const : usize = 0x8D8730F; // 
                pub const : usize = 0x14A8D48; // 
                pub const : usize = 0x49F0C27E; // 
                pub const : usize = 0xC08B4920; // 
                pub const : usize = 0xCCCCCCC3; // 
                pub const : usize = 0x8D480000; // 
                pub const : usize = 0x245C8948; // 
                pub const : usize = 0x20247429; // 
                pub const : usize = 0x89483889; // 
                pub const : usize = 0x89483055; // 
                pub const : usize = 0x10890; // 
                pub const : usize = 0xD8B48D0; // 
                pub const : usize = 0x15FFC88B; // 
                pub const : usize = 0x270; // 
                pub const : usize = 0x4D8D4810; // 
                pub const : usize = 0xE090FF01; // 
                pub const : usize = 0x458B184E; // 
                pub const : usize = 0x8B485824; // 
                pub const : usize = 0xC4834820; // 
                pub const : usize = 0xC172058B; // 
                pub const : usize = 0xFC840F; // 
                pub const : usize = 0x74FF047A; // 
                pub const : usize = 0x8B48108B; // 
                pub const : usize = 0x8B48108B; // 
                pub const : usize = 0x100; // 
                pub const : usize = 0x61058D48; // 
                pub const : usize = 0x8B48306B; // 
                pub const : usize = 0x891C478B; // 
                pub const : usize = 0x8B48C35F; // 
                pub const : usize = 0x83485340; // 
                pub const : usize = 0x75482444; // 
                pub const : usize = 0x30C48348; // 
                pub const : usize = 0xC48348C0; // 
                pub const : usize = 0xB70FF28B; // 
                pub const : usize = 0xB9; // 
                pub const : usize = 0xC084C0FF; // 
                pub const : usize = 0xBF52058B; // 
                pub const : usize = 0xBE48; // 
                pub const : usize = 0x48085F89; // 
                pub const : usize = 0x4C004BA0; // 
                pub const : usize = 0x48245C8B; // 
                pub const : usize = 0x8B480789; // 
                pub const : usize = 0x38247C8B; // 
                pub const : usize = 0x1010101; // 
                pub const : usize = 0x51058B48; // 
                pub const : usize = 0x83840FC0; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xD8B481F; // 
                pub const : usize = 0xC738948; // 
                pub const : usize = 0x4848247C; // 
                pub const : usize = 0x5E4120C4; // 
                pub const : usize = 0x71058B48; // 
                pub const : usize = 0x83840FC0; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xD8B481F; // 
                pub const : usize = 0xC738948; // 
                pub const : usize = 0x4848247C; // 
                pub const : usize = 0x5E4120C4; // 
                pub const : usize = 0x91058B48; // 
                pub const : usize = 0x83840FC0; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xD8B481F; // 
                pub const : usize = 0xC738948; // 
                pub const : usize = 0x4848247C; // 
                pub const : usize = 0x5E4120C4; // 
                pub const : usize = 0x9F62058D; // 
                pub const : usize = 0x31C2BB15; // 
                pub const : usize = 0x480031C2; // 
                pub const : usize = 0x28; // 
                pub const : usize = 0x48382474; // 
                pub const : usize = 0x245C8948; // 
                pub const : usize = 0x10BAD88B; // 
                pub const : usize = 0x4803EB08; // 
                pub const : usize = 0x9CBA0D8B; // 
                pub const : usize = 0x4C118B48; // 
                pub const : usize = 0x48000002; // 
                pub const : usize = 0x48004B9C; // 
                pub const : usize = 0x18B4818; // 
                pub const : usize = 0x48C3450F; // 
                pub const : usize = 0xEB038B48; // 
                pub const : usize = 0x245C8948; // 
                pub const : usize = 0x88B4800; // 
                pub const : usize = 0x4830246C; // 
                pub const : usize = 0x18B4860; // 
                pub const : usize = 0x48003927; // 
                pub const : usize = 0x390D8B48; // 
                pub const : usize = 0x47B70F0B; // 
                pub const : usize = 0x89480000; // 
                pub const : usize = 0xC68B4818; // 
                pub const : usize = 0x6C7; // 
                pub const : usize = 0x28EC8348; // 
                pub const : usize = 0x38244489; // 
                pub const : usize = 0x245C8948; // 
                pub const : usize = 0x18578B48; // 
                pub const : usize = 0xD78B4800; // 
                pub const : usize = 0x246C8948; // 
                pub const : usize = 0x41F70000; // 
                pub const : usize = 0xB7E7FFF; // 
                pub const : usize = 0x1718D3F; // 
                pub const : usize = 0x8D0EEBFF; // 
                pub const : usize = 0xC0000000; // 
                pub const : usize = 0xC1F7; // 
                pub const : usize = 0xE8B4108; // 
                pub const : usize = 0x245C8948; // 
                pub const : usize = 0xD98B4CFA; // 
                pub const : usize = 0x33443501; // 
                pub const : usize = 0x8DE03344; // 
                pub const : usize = 0x75ED8566; // 
                pub const : usize = 0x1FB70F41; // 
                pub const : usize = 0x400C8D48; // 
                pub const : usize = 0xF8834110; // 
                pub const : usize = 0xF20738B; // 
                pub const : usize = 0xF8C148C2; // 
                pub const : usize = 0xEBC08B41; // 
                pub const : usize = 0xFFF98341; // 
                pub const : usize = 0x8B4C03; // 
                pub const : usize = 0x8B44088B; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xE0EBC18B; // 
                pub const : usize = 0xD98B48F2; // 
                pub const : usize = 0xFFFFFFE2; // 
                pub const : usize = 0x48000001; // 
                pub const : usize = 0xB60F41C6; // 
                pub const : usize = 0x69C8330D; // 
                pub const : usize = 0x14E850F; // 
                pub const : usize = 0x41FF458D; // 
                pub const : usize = 0x8B480453; // 
                pub const : usize = 0x3B2574FF; // 
                pub const : usize = 0x8310C854; // 
                pub const : usize = 0x4747FFF; // 
                pub const : usize = 0xC78B4812; // 
                pub const : usize = 0x30438B4C; // 
                pub const : usize = 0x438B4804; // 
                pub const : usize = 0xFFFFFFFD; // 
                pub const : usize = 0x3C6B8310; // 
                pub const : usize = 0x4C48247C; // 
                pub const : usize = 0x20247C89; // 
                pub const : usize = 0x413B8B41; // 
                pub const : usize = 0x18E9C1C8; // 
                pub const : usize = 0x69C2330D; // 
                pub const : usize = 0xEBC93304; // 
                pub const : usize = 0x83418004; // 
                pub const : usize = 0x8B4C03EB; // 
                pub const : usize = 0x45028B4C; // 
                pub const : usize = 0xB88C0F; // 
                pub const : usize = 0xF8C148C2; // 
                pub const : usize = 0xEBC08B41; // 
                pub const : usize = 0xFFF88341; // 
                pub const : usize = 0x49088B4C; // 
                pub const : usize = 0x448B4500; // 
                pub const : usize = 0x48FFFFFF; // 
                pub const : usize = 0x880FD285; // 
                pub const : usize = 0x247C8948; // 
                pub const : usize = 0xCD248D; // 
            }
            // Parent: None
            // Field count: 25
            pub mod _H____ {
                pub const 3V��: usize = 0x158B; // 
                pub const : usize = 0x6F66; // 
                pub const 3V��: usize = 0x6DC; // 
                pub const ���W.: usize = 0x6FF; // 
                pub const `��W.: usize = 0x0; // 
                pub const �r�W.: usize = 0x15A4; // 
                pub const : usize = 0x666E692D; // 
                pub const `��W.: usize = 0x6E0; // 
                pub const �6]��: usize = 0x44080000; // 
                pub const ���W.: usize = 0x6E0; // 
                pub const @��W.: usize = 0x0; // 
                pub const �#R��: usize = 0xFFFFFFFF; // 
                pub const 3V��: usize = 0x892; // 
                pub const ���W.: usize = 0xFFFFFFFF; // 
                pub const ���W.: usize = 0xFFFF0068; // 
                pub const `��W.: usize = 0x6D4; // 
                pub const `r�W.: usize = 0x666E692D; // 
                pub const �}�W.: usize = 0x15A5; // 
                pub const  ��W.: usize = 0x37302E37; // 
                pub const �e`��: usize = 0x0; // 
                pub const ���W.: usize = 0x0; // 
                pub const ���W.: usize = 0x13EB; // 
                pub const ���W.: usize = 0x15A8; // 
                pub const ���W.: usize = 0xFFFFFFFF; // 
                pub const 3V��: usize = 0x6DF; // 
            }
            // Parent: None
            // Field count: 0
            pub mod ______ {
            }
            // Parent: None
            // Field count: 103
            pub mod __o__ {
                pub const 3V��: usize = 0x805; // 
                pub const  ��W.: usize = 0x6DC; // 
                pub const : usize = 0x751; // 
                pub const ���W.: usize = 0x891; // 
                pub const : usize = 0x666E692D; // 
                pub const 3V��: usize = 0x15A4; // 
                pub const 3V��: usize = 0x6D6; // 
                pub const `y�W.: usize = 0x6D6; // 
                pub const `��W.: usize = 0xFFFFFFFF; // 
                pub const @��W.: usize = 0x6DC; // 
                pub const @��W.: usize = 0x666E692D; // 
                pub const P���: usize = 0x7E4; // 
                pub const ���W.: usize = 0x666E692D; // 
                pub const �~�W.: usize = 0x6F66; // 
                pub const ����: usize = 0x36636B90; // 
                pub const ���W.: usize = 0x752; // 
                pub const 3V��: usize = 0x751; // 
                pub const ���W.: usize = 0x6DF; // 
                pub const `��W.: usize = 0x773; // 
                pub const ���W.: usize = 0x44080000; // 
                pub const 3V��: usize = 0x6D7; // 
                pub const  ��W.: usize = 0x666E692D; // 
                pub const  ��W.: usize = 0x6D9; // 
                pub const `��W.: usize = 0x15A3; // 
                pub const : usize = 0x6FE; // 
                pub const ���W.: usize = 0x0; // 
                pub const 3V��: usize = 0x6E0; // 
                pub const �e`��: usize = 0x3F800000; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const �v�W.: usize = 0x666E692D; // 
                pub const ���W.: usize = 0x0; // 
                pub const  ��W.: usize = 0x6DF; // 
                pub const : usize = 0x158B; // 
                pub const  z�W.: usize = 0x6F66; // 
                pub const 3V��: usize = 0x159A; // 
                pub const ���: usize = 0x152F; // 
                pub const : usize = 0x666E692D; // 
                pub const `��W.: usize = 0x68; // 
                pub const ���W.: usize = 0x44080000; // 
                pub const `��W.: usize = 0x0; // 
                pub const @��W.: usize = 0x892; // 
                pub const 3V��: usize = 0x804; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const ���W.: usize = 0x804; // 
                pub const �}�W.: usize = 0xFFFFFFFF; // 
                pub const 3V��: usize = 0x15A8; // 
                pub const @��W.: usize = 0x6D8; // 
                pub const `l�W.: usize = 0x15A5; // 
                pub const : usize = 0x1550; // 
                pub const �6]��: usize = 0x44080000; // 
                pub const �s�W.: usize = 0x15A6; // 
                pub const : usize = 0x68; // 
                pub const �e`��: usize = 0x0; // 
                pub const 3V��: usize = 0x6D9; // 
                pub const `��W.: usize = 0x6D4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const  ��W.: usize = 0x6D7; // 
                pub const ���W.: usize = 0x7E4; // 
                pub const ����: usize = 0x804; // 
                pub const : usize = 0x666E692D; // 
                pub const 3V��: usize = 0x773; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x7E4; // 
                pub const : usize = 0x6D4; // 
                pub const 3V��: usize = 0x6D8; // 
                pub const �n�W.: usize = 0x70C; // 
                pub const  ��W.: usize = 0x6FE; // 
                pub const  ��W.: usize = 0x6E0; // 
                pub const  l�W.: usize = 0x15A4; // 
                pub const  v�W.: usize = 0x6FE; // 
                pub const  ��W.: usize = 0x69656365; // 
                pub const 3V��: usize = 0x6D4; // 
                pub const 3V��: usize = 0x772; // 
                pub const 3V��: usize = 0x15A5; // 
                pub const ���W.: usize = 0x159A; // 
                pub const @��W.: usize = 0x44080000; // 
                pub const ���W.: usize = 0x6FD; // 
                pub const ���W.: usize = 0x13EB; // 
                pub const 3V��: usize = 0x158B; // 
                pub const : usize = 0x6F66; // 
                pub const 3V��: usize = 0x6DC; // 
                pub const ���W.: usize = 0x6FF; // 
                pub const `��W.: usize = 0x0; // 
                pub const �r�W.: usize = 0x15A4; // 
                pub const : usize = 0x666E692D; // 
                pub const `��W.: usize = 0x6E0; // 
                pub const �6]��: usize = 0x44080000; // 
                pub const : usize = 0x68; // 
                pub const @��W.: usize = 0x0; // 
                pub const �#R��: usize = 0xFFFFFFFF; // 
                pub const 3V��: usize = 0x892; // 
                pub const ���W.: usize = 0xFFFFFFFF; // 
                pub const ���W.: usize = 0xFFFF0068; // 
                pub const `��W.: usize = 0x6D4; // 
                pub const `r�W.: usize = 0x666E692D; // 
                pub const �}�W.: usize = 0x15A5; // 
                pub const  ��W.: usize = 0x37302E37; // 
                pub const �e`��: usize = 0x0; // 
                pub const ���W.: usize = 0x0; // 
                pub const ���W.: usize = 0x13EB; // 
                pub const ���W.: usize = 0x15A8; // 
                pub const ���W.: usize = 0xFFFFFFFF; // 
                pub const 3V��: usize = 0x6DF; // 
            }
            // Parent: None
            // Field count: 150
            pub mod __eN__ {
                pub const : usize = 0x45E90000; // 
                pub const ��o_�: usize = 0x5F6FCC50; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const tR: usize = 0x0; // 
                pub const ��J��: usize = 0x0; // 
                pub const : usize = 0x45E90000; // 
                pub const ��o_�: usize = 0xDBABF220; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x13; // 
                pub const ࠕN.: usize = 0xD5DC8A60; // 
                pub const ��J��: usize = 0x11; // 
                pub const : usize = 0xA1B12B70; // 
                pub const : usize = 0x5F6FCC68; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x2A264437; // 
                pub const : usize = 0x45EB4000; // 
                pub const ��J��: usize = 0x45EB4000; // 
                pub const : usize = 0x5F6FCE01; // 
                pub const : usize = 0x1; // 
                pub const ��J��: usize = 0x45EB4000; // 
                pub const $������������: usize = 0xF1BA86C0; // 
                pub const H�J��: usize = 0x932C2499; // H����
                pub const : usize = 0x2; // 
                pub const : usize = 0xA146BB98; // 
                pub const : usize = 0x5F6FDE30; // 
                pub const : usize = 0x4EE16800; // 01���
                pub const ���W.: usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x4EE16800; // 
                pub const : usize = 0x0; // H9oXu2�G8��Hc�x'H�G@(�H��H��H��P��uH�H���H��yٽ
                pub const ����: usize = 0x5F6FD030; // 
                pub const ����: usize = 0x0; // 
                pub const Initializing: usize = 0x7FFFFFFF; // 
                pub const : usize = 0x5828B500; // 
                pub const : usize = 0x7FFF; // A���
                pub const : usize = 0x1; // 
                pub const : usize = 0xF0; // 
                pub const : usize = 0x1; // 
                pub const : usize = 0x8; // 
                pub const `�o_�: usize = 0x5F6FD0D0; // �4Y��
                pub const H�o_�: usize = 0x0; // 
                pub const : usize = 0xF1BA86C0; // 
                pub const : usize = 0xF1BA86C0; // 
                pub const C:\buildworker\csgo_rel_win64\build\src\game\client\c_baseentity.cpp: usize = 0xA14646A0; // 
                pub const C:\buildworker\csgo_rel_win64\build\src\game\client\c_baseentity.cpp: usize = 0xA14646A0; // 
                pub const : usize = 0x100; // 
                pub const : usize = 0x6; // 
                pub const : usize = 0x6; // 
                pub const : usize = 0x4F6B9E80; // 
                pub const : usize = 0x3C800000; // 
                pub const : usize = 0x885D3130; // 
                pub const : usize = 0x1; // 
                pub const H+�H��$p : usize = 0x1; // 
                pub const : usize = 0x5; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x5F6FD360; // 
                pub const : usize = 0x1; // 
                pub const H+�H�l$`E3�E��H��H��E����: usize = 0x5F6FD320; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xA1C37D00; // 
                pub const : usize = 0x1; // 
                pub const : usize = 0x4EA33800; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x4E959F20; // 
                pub const : usize = 0x46C90FDB; // 
                pub const ��A��: usize = 0x5F6FD540; // 
                pub const ��N��: usize = 0x0; // 
                pub const  �J��: usize = 0x4ED05C00; // 
                pub const : usize = 0x4EA33800; // 
                pub const  �J��: usize = 0xA1C30E48; // 
                pub const 9��B:[�B: usize = 0x3FAAAAAB; // 
                pub const : usize = 0x5F6FD6E0; // 
                pub const ��A��: usize = 0x3FAAAAAB; // 
                pub const 9��B:[�B: usize = 0xA1C381D8; // 
                pub const : usize = 0xA1C381D8; // 
                pub const ��: usize = 0x40A00000; // 
                pub const : usize = 0x78; // 
                pub const ����-: usize = 0x2E4C178; // �
                pub const : usize = 0x3F; // 
                pub const : usize = 0x0; // 
                pub const H����: usize = 0xA00050B4; // 
                pub const S#'Ve�@��+�g�1��ܝ<c��G���Q1���: usize = 0x0; // 
                pub const : usize = 0x19; // 
                pub const : usize = 0x5F6FE228; // 
                pub const : usize = 0x0; // 
                pub const p�4.: usize = 0x31B; // 
                pub const : usize = 0xFA2070C0; // 
                pub const �$���: usize = 0x57CA9AA0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x35EB72C0; // 
                pub const �%/��: usize = 0x57CA9BA0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xC181957; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x3F800000; // 
                pub const : usize = 0x8AD232BC; // 
                pub const : usize = 0x10; // 
                pub const P7>Z.: usize = 0x5F6FDF10; // �o_�
                pub const : usize = 0xF1EAD8D0; // 
                pub const CRenderGameSystem::OnClientPreOutput: usize = 0xC39F3010; // 
                pub const ��eN.: usize = 0x2B54; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x41893EA5; // 
                pub const : usize = 0x5F6FE130; // 
                pub const 8��: usize = 0x33902400; // 
                pub const �: usize = 0x4FB76860; // 
                pub const : usize = 0xA48FF140; // 
                pub const EndFrame: usize = 0xA48FF140; // 
                pub const EndFrame: usize = 0xA48D6930; // 
                pub const : usize = 0x4670F800; // 8��
                pub const : usize = 0x5F6FDD29; // 
                pub const C:\buildworker\csgo_rel_win64\build\src\panorama\uitoplevelwindow.cpp: usize = 0xFF000000; // 
                pub const \�Z.: usize = 0xA48E5590; // 
                pub const PaintEmptyFrameAndForceLaterRepaint: usize = 0xA48E5590; // 
                pub const �z���: usize = 0xF1BA86C0; // �
                pub const �����: usize = 0xFF000000; // 
                pub const : usize = 0xA48D90D0; // 8��
                pub const LayoutAndPaintWindows: usize = 0xA48D90D0; // 
                pub const LayoutAndPaintWindows: usize = 0xA48D90D0; // 
                pub const LayoutAndPaintWindows: usize = 0x41893EA5; // 
                pub const �����: usize = 0x0; // 
                pub const P����: usize = 0xD3D4C8A0; // 
                pub const �����: usize = 0xA13321A8; // p����
                pub const P����: usize = 0xF1F433C0; // 8��
                pub const �����: usize = 0x78; // 
                pub const : usize = 0x0; // �
                pub const �: usize = 0x4C6C3800; // 
                pub const : usize = 0x2; // �
                pub const �: usize = 0x4FB7F640; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x45636880; // PhysicsGameSystem
                pub const : usize = 0x0; // 
                pub const : usize = 0x5F6FE190; // 
                pub const : usize = 0x5F6FE030; // H��(�����H��t�X�	
                pub const : usize = 0x57CA7A00; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x2B54; // 
                pub const : usize = 0xD40FCE20; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const �o_�: usize = 0xD5F9EC50; // 
            }
            // Parent: None
            // Field count: 0
            pub mod _8___ {
            }
            // Parent: None
            // Field count: 0
            pub mod _ {
            }
            // Parent: None
            // Field count: 0
            pub mod _ {
            }
            // Parent: None
            // Field count: 0
            pub mod _ {
            }
        }
    }
}
