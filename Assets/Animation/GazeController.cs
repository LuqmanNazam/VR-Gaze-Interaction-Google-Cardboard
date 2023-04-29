using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class GazeController : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    public void OnPointerEnter(PointerEventData eventData)
    {
        RaycastHit hit;
        if (Physics.Raycast(transform.position, transform.forward, out hit))
        {
            PlayBob avatarController = hit.collider.GetComponent<PlayBob>();
            if (avatarController != null)
            {
                avatarController.OnPointerEnter();
            }

            PlaySarah avatarController1 = hit.collider.GetComponent<PlaySarah>();
            if (avatarController1 != null)
            {
                avatarController1.OnPointerEnter();
            }

            PlayAli avatarController2 = hit.collider.GetComponent<PlayAli>();
            if (avatarController2 != null)
            {
                avatarController2.OnPointerEnter();
            }
        }
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        RaycastHit hit;
        if (Physics.Raycast(transform.position, transform.forward, out hit))
        {
            PlayBob avatarController = hit.collider.GetComponent<PlayBob>();
            if (avatarController != null)
            {
                avatarController.OnPointerExit();
            }

            PlaySarah avatarController1 = hit.collider.GetComponent<PlaySarah>();
            if (avatarController1 != null)
            {
                avatarController1.OnPointerExit();
            }

            PlayAli avatarController2 = hit.collider.GetComponent<PlayAli>();
            if (avatarController2 != null)
            {
                avatarController2.OnPointerExit();
            }
        }
    }

}
