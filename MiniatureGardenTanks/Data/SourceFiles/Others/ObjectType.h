#pragma once

/*-------------------------------------------*/
/* �v���O�����S�̂ň����I�u�W�F�N�g�̎��
/*�i�I�u�W�F�N�g�̎��ʂɎg�p����j
/*-------------------------------------------*/
enum class ObjectType
{
	CHARACTER_PLAYER,		// �L�����N�^�[�F�v���C���[
	CHARACTER_ENEMY,		// �L�����N�^�[�F�G�l�~�[
	CHARACTER_TANKBODY,		// �L�����N�^�[�F��Ԃ̎ԑ�
	CHARACTER_TANKTURRET,	// �L�����N�^�[�F��ԖC��
	CHARACTER_LASER,		// �L�����N�^�[�F���[�U�[
	CHARACTER_SHOT,			// �L�����N�^�[�F�V���b�g
	TERRAIN_GROUND,			// �X�e�[�W�̒n�`�F�n�`�̒n��
	TERRAIN_WALL,			// �X�e�[�W�̒n�`�F�n�`�̕�
};