using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayAli : MonoBehaviour
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
        anim.Play("AliSalute");
    }

    public void OnPointerExit()
    {
        anim.SetBool("IsGazed", false);
        anim.Play("AliIdle");
    }
}