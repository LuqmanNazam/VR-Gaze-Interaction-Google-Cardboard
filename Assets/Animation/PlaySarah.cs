using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Collider))]
public class PlaySarah : MonoBehaviour
{
    public Animator anim;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
    }

    public void OnPointerEnter()
    {
        anim.SetBool("IsGazed", true);
        anim.Play("SarahWave");
    }

    public void OnPointerExit()
    {
        anim.SetBool("IsGazed", false);
        anim.Play("SarahIdle");
    }
}
